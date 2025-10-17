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
          <a href="index.php"><span>Books Database</span></a>
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
            <h3 class="page-header">All Books Database</h3>
          </div>
          <!-- /# column -->
        </div>
        <div class="row">
          <!-- /# column -->
          <div class="col-lg-12">
            <div class="card">
              <div class="card-title">
                <h4>বইয়ের তালিকা</h4>
              </div>
              <div class="card-body">
                <!-- Advanced Tables -->
                <div id="page-inner">
                  <div class="row">
                    <div class="col-md-12">
                      <div class="panel panel-default">
                        <!-- ----------------------------------------Books List -->
                        <div class="panel-body">
                          <div class="table-responsive">
                           <table class="table table-hover ">
                            <thead>
                                <tr>
                                    <th>#</th>
                                    <th>বইয়ের নাম</th>
                                    <th>লেখক</th>
                                    <th>প্রকাশনী</th>
                                    <th>মূল্য</th>
                                    <th>ক্যাটাগরি</th>
                                    <th>পাওয়া যাবে</th>
                                    <th>মন্তব্য</th>
                                </tr>
                            </thead>
                            <tbody>
                                <?php
                                $inc = 1;
                                
                                // List of all book tables
                                $book_tables = ['quran', 'hadith', 'as_sirat', 'maulik_ibadat', 'sahitto_dowat', 
                                                'akhirat', 'islami_jibon_babostha', 'islami_orthoniti', 'manabadhikar'];
                                
                                $all_books = [];
                                
                                // Fetch books from all category tables
                                foreach ($book_tables as $table) {
                                    $sql = "SELECT books_name, author_name, publication_name, price, catagory, yes_no, commnet 
                                            FROM `$table` ORDER BY id DESC";
                                    $result = $conn->query($sql);
                                    
                                    if ($result && $result->num_rows > 0) {
                                        while($row = $result->fetch_assoc()) {
                                            $all_books[] = $row;
                                        }
                                    }
                                }
                                
                                // Display all books
                                if (count($all_books) > 0) {
                                    foreach($all_books as $book) {
                                        echo "
                                        <tr>
                                        <td>" . $inc++ . "</td>
                                        <td>" . htmlspecialchars($book['books_name']) . "</td>
                                        <td>" . htmlspecialchars($book['author_name']) . "</td>
                                        <td>" . htmlspecialchars($book['publication_name']) . "</td>
                                        <td>" . htmlspecialchars($book['price']) . " টাকা</td>
                                        <td>" . htmlspecialchars($book['catagory']) . "</td>
                                        <td>" . htmlspecialchars($book['yes_no']) . "</td>
                                        <td>" . htmlspecialchars($book['commnet']) . "</td>
                                        </tr>";
                                    }
                                } else {
                                    echo "<tr><td colspan='8' class='text-center'>কোনো বই পাওয়া যায়নি</td></tr>";
                                }
                                ?>
                            </tbody>
                          </table>
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
<?php
$conn->close();
?>
