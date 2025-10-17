<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge" />
  <meta name="viewport" content="width=device-width, initial-scale=1" />
  <title>Books Database</title>
  <!-- Common -->
  <link href="css/lib/font-awesome.min.css" rel="stylesheet" />
  <link href="css/lib/themify-icons.css" rel="stylesheet" />
  <link href="css/lib/sidebar.css" rel="stylesheet" />
  <link href="css/lib/bootstrap.min.css" rel="stylesheet" />
  <link href="css/lib/helper.css" rel="stylesheet" />
  <link href="css/style.css" rel="stylesheet" />
</head>

<?php
    require_once('connection.php');
    // MySQL connection is now established via $conn variable
?>

<body>
  <!--------------------------------------------------------------------------------------------- /# sidebar -->
  <div class="sidebar sidebar-hide-to-small sidebar-shrink sidebar-gestures">
    <div class="nano">
      <div class="nano-content">
        <div class="logo">
          <a href="index.html"><span>Books Database</span></a>
        </div>
        <ul>
          <li><a href="index.php"><i class="ti-book"></i> Database </a></li>
          <li><a href="add_books.php"><i class="ti-agenda"></i>Add Book </a></li>
          <li><a href="add_author.php"><i class="ti-slice"></i>Add Author </a></li>
          <li><a href="add_publication.php"><i class="ti-clipboard"></i>Add Publication </a></li>
          <li><a href="add_catagory.php"><i class="ti-layers-alt"></i>Add Catagory </a></li>
          <li><a href="full_database.php"><i class="ti-harddrives"></i>Full Database </a></li>
          <li><a href="Empty_Page.php"><i class="ti-file"></i> Empty Page </a> </li>
        </ul>
      </div>
    </div>
  </div>
  <!--------------------------------------------------------------------------------------------- /# Nevbar -->
  <div class="header">
    <div class="container-fluid">
      <div class="row">
        <div class="col-lg-12">
          <div class="float-left">
            <div class="hamburger sidebar-toggle">
              <span class="line"></span>
              <span class="line"></span>
              <span class="line"></span>
            </div>
          </div>
          <div class="float-right">
            <div class="dropdown dib">
              <div class="header-icon" data-toggle="dropdown">
                <span class="ti-panel">
                  <i class="ti-angle-down f-s-10"></i>
                </span>
                <div class="drop-down dropdown-profile dropdown-menu dropdown-menu-right">
                  <div class="dropdown-content-body">
                    <ul>
                      <li><a href="#"><i class="ti-user"></i><span>Profile</span></a></li>
                      <li><a href="#"><i class="ti-settings"></i><span>Setting</span></a></li>
                      <li><a href="#"><i class="ti-power-off"></i><span>Logout</span>
                        </a>
                      </li>
                    </ul>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>
  <!--------------------------------------------------------------------------------------------- /# Mainpage -->
  <div class="content-wrap">
    <div class="main">
      <div class="container-fluid">
        <div class="row">
          <div class="col-lg-6 p-l-0 title-margin-right">
            <h3 class="page-header">Insert Publication Details</h3>
          </div>
          <!-- /# column -->
        </div>
        <div class="row">
          <div class="col-lg-12">
            <div class="card">
              <div class="card-body">
                <div class="basic-elements">
                  <form role="form" action="add_publication_c.php" method="post">
                    <div class="form-group">
                      <label>Publication Name:</label>
                      <input class="form-control" type="text" placeholder="Name" name="publication_name" />
                    </div>
                    <div class="form-group">
                      <label>Comments:</label>
                      <textarea class="form-control" rows="3" name="comments" id="comments"></textarea>
                    </div>
                    <button class="btn btn-primary btn-rounded m-b-10 m-l-5" type="submit" name="submit"> Submit
                    </button>
                    <button type="reset" class="btn btn-dark btn-rounded m-b-10 m-l-5"> Cancel </button>
                  </form>
                </div>
              </div>
            </div>
          </div>
          <!-- /# column -->
          <div class="col-lg-12">
            <div class="card">
              <div class="card-title">
                <h4>পাবলিকেশনের লিষ্ট</h4>
              </div>
              <div class="card-body">
                <!-- Advanced Tables -->
                <div id="page-inner">
                  <div class="row">
                    <div class="col-md-12">
                      <div class="panel panel-default">
                        <!-- ----------------------------------------publication Name -->
                        <div class="panel-body">
                          <div class="table-responsive">
                           <table class="table table-hover ">
                            <thead>
                                <tr>
                                    <th>#</th>
                                    <th>Name</th>

                                </tr>
                            </thead>
                            <tbody>
                                <tr>
                                    <?php
                                    $inc = 1;
                                    $result = $conn->query("SELECT * FROM publication_list ORDER BY id DESC");
                                    if ($result && $result->num_rows > 0) {
                                        while($row = $result->fetch_assoc()) {
                                            echo "
                                            <tr>
                                            <td>" . $inc++ . "</td>
                                            <td>" . htmlspecialchars($row['publication_name']) . "</td>
                                            <td>" . htmlspecialchars($row['other']) . "</td>
                                            </tr>";
                                        }
                                    }
                                    ?>
                                    </tr>
                                </tbody>
                            </table>
                          </div>
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
                <!--End Advanced Tables -->
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>
    <div class="row">
      <div class="col-lg-12">
        <div class="footer">
          <p>Developed & Maintained by Unknown</p>
        </div>
      </div>
    </div>
  </div>
  <!-- Common -->
  <script src="js/jquery.min.js"></script>
  <script src="js/jquery.nanoscroller.min.js"></script>
  <script src="js/sidebar.js"></script>
  <!-- <script src="js/pace.min.js"></script> -->
  <script src="js/bootstrap.min.js"></script>
  <script src="js/scripts.js"></script>
</body>

</html>