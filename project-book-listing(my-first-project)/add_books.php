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
            <h3 class="page-header">Insert Book Details</h3>
          </div>
          <!-- /# column -->
        </div>
        <div class="row">
          <div class="col-lg-12">
            <div class="card">
              <div class="card-body">
                <div class="basic-elements">
                  <form role="form" action="add_books_c.php" method="post">
                    <div class="form-group">

                    <!--------------------------------------- Book Name ---------------------------------->
                    <label>Book Name:</label>
                      <input class="form-control" type="text" placeholder="Name" name="book_name" />
                    </div>

                    <!--------------------------------------- Author Name ---------------------------------->
                    <div class="form-group">
                        <label>Author Name:</label>
                        <select class="form-control" name="author_name">
                            <option value="N/A">Select</option>
                            <?php
                            $result = $conn->query("SELECT author_name FROM authors_name ORDER BY author_name ASC");
                            if ($result && $result->num_rows > 0) {
                                while($row = $result->fetch_assoc()) {
                                    echo "<option>" . htmlspecialchars($row['author_name']) . "</option>";
                                }
                            }
                            ?>
                        </select>
                    </div>

                    <!--------------------------------------- Publication ---------------------------------->
                      <div class="form-group">
                        <label>Publication Name:</label>
                        <select class="form-control" name="publication_name">
                            <option value="N/A">Select</option>
                            <?php
                            $result = $conn->query("SELECT publication_name FROM publication_list ORDER BY publication_name ASC");
                            if ($result && $result->num_rows > 0) {
                                while($row = $result->fetch_assoc()) {
                                    echo "<option>" . htmlspecialchars($row['publication_name']) . "</option>";
                                }
                            }
                            ?>
                        </select>
                    </div>

                    <!--------------------------------------- Price ---------------------------------->
                    <div class="form-group">
                        <label>Price:</label>
                        <input class="form-control" type="text" name="price" placeholder="Price">
                    </div>

                    <!--------------------------------------- Total Page ---------------------------------->
                    <div class="form-group">
                        <label>Total Page:</label>
                        <input class="form-control" type="text" name="total_page" placeholder="Total Page">
                    </div>
                    <!--------------------------------------- Catagory ---------------------------------->
                    <div class="form-group">
                        <label>Catagory:</label>
                        <select class="form-control" name="catagory_list">
                            <option value="N/A">Select</option>
                            <?php
                            $result = $conn->query("SELECT catagory_name FROM catagory_list ORDER BY catagory_name ASC");
                            if ($result && $result->num_rows > 0) {
                                while($row = $result->fetch_assoc()) {
                                    echo "<option>" . htmlspecialchars($row['catagory_name']) . "</option>";
                                }
                            }
                            ?>
                        </select>
                    </div>
                    <!--------------------------------------- Avail or not ---------------------------------->
                    <div class="form-group">
                        <label>Available In the market:</label>
                        <div class="checkbox">
                            <label>
                                <input type="checkbox" name="availORnot" value="Yes">Yes
                            </label>
                        </div>
                        <div class="checkbox">
                            <label>
                                <input type="checkbox" name="availORnot" value="No">No
                            </label>
                        </div>
                    </div>
                    <!--------------------------------------- Comment ---------------------------------->
                    <div class="form-group">
                      <label>Comments:</label>
                      <textarea class="form-control" rows="3" name="comments" id="comments"></textarea>
                    </div>
                    <!--------------------------------------- Button ---------------------------------->
                    <button class="btn btn-primary btn-rounded m-b-10 m-l-5" type="submit" name="submit"> Submit
                    </button>
                    <button type="reset" class="btn btn-dark btn-rounded m-b-10 m-l-5"> Cancel </button>
                  </form>
                </div>
              </div>
            </div>
          </div>
          <!-- /# column -->
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