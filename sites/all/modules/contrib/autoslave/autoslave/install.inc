<?php

/**
 * @file
 * Installation code for AutoSlave embedded database engine.
 */

/**
 * Specifies installation tasks for AutoSlave driver. (Just a wrapper for the 'master' DB)
 */
class DatabaseTasks_autoslave extends DatabaseTasks {
  protected $pdoDriver = '';

  /**
   * Returns a human-readable name string for the backend databases.
   */
  public function name() {
    $conn = Database::getConnection();
    if (!$conn->driver() == 'autoslave') {
      return st('Default connection is not an AutoSlave driver?!?');
    }

    if (!module_exists('autoslave')) {
      $t = get_t();
      drupal_set_message($t('AutoSlave module is disabled! You MUST enable the AutoSlave module!'), 'error');
    }

    return $this->connectionStatusTable($conn);
  }

  /**
   * Format autoslave connection info in a table
   *
   * @param $target
   *   Target
   * @param $key
   *   Database connection key
   */
  public function connectionStatusTable($conn) {
    $output = '';
    $key = $conn->getKey();
    $target = $conn->getTarget();
    $msg = array();
    $pool = $conn->getPool();
    $master_pool = array();
    foreach ($pool['master'] as $target => $conninfos) {
      if ($conn->determineMasterTarget() == $target) {
        $target = '<strong>' . $target . '</strong>';
      }
      $master_pool[] = $target;
    }
    $slave_pool = array();
    foreach ($pool['slave'] as $target => $conninfos) {
      if ($conn->determineSlaveTarget() == $target) {
        $target = '<strong>' . $target . '</strong>';
      }
      $slave_pool[] = $target;
    }
    $msg[] = '<strong>Master pools:</strong> (' . implode(', ', $master_pool) . ')';
    $msg[] = '<strong>Slave pools:</strong> (' . implode(', ', $slave_pool) . ')';
    $path = 'misc/';
    $rows = array();
    foreach ($pool['all'] as $id => $conninfo) {
      if ($conninfo['driver'] == 'autoslave') {
        $icon = 'message-16-ok.png';
        $message = st('OK');
        $dsn = 'AutoSlave';
      }
      else {
        $status = $conn->checkConnection($id);
        if (is_object($status)) {
          $icon = 'message-16-error.png';
          $message = $status->getMessage();
        }
        elseif ($status === TRUE) {
          $icon = 'message-16-ok.png';
          $message = st('OK');
        }
        elseif ($status === FALSE) {
          $icon = 'message-16-warning.png';
          $message = st('OK, but flagged as down. Run cron to re-enable connection');
        }
        else {
          $icon = 'message-16-error.png';
          $message = st('Could not acquire status');
        }
        $dsn = $conninfo['driver'] . '://' . $conninfo['host'];
      }
      $status = '<img title="' . $message . '" src="' . url($path . $icon) . '"/>';

      if (!empty($conninfo['connected'])) {
        $status .= ' (connected)';
      }
      $rows[] = array($id, $conninfo['target'], $dsn, $status);
    }
    $msg[] .= theme('table', array('header' => array('ID', 'Target', 'Connection', 'Status'), 'rows' => $rows));
    $msg = implode('<br>', $msg);
    $output .= $msg;
    return $output;
  }
}

