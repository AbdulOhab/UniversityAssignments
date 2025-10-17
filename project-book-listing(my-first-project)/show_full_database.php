<!DOCTYPE php>

<html>

<head>
    <title>Full database</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-0evHe/X+R7YkIZDRvuzKMRqM+OrBnVFBL6DOitfPri4tjfHxaWutUpFmBp4vmVor" crossorigin="anonymous">
</head>
<style>
    h3 {
        list-style-type: circle;
        text-align: left;
        color: black;
        text-decoration: none;
        padding: 20px;
        padding-left: 10px;
        font-size: 30px; 
    }
    table {
        width: 90%;
        /* border-collapse: separate;
        border-spacing:0 20px; */
    }

    th{
        /* background-color: #588c7e; */
        background-color: #3498db;
        color: white;
        text-align: center;
        font-size: 10px;
    }
    th:nth-child(2){
        width: 40%;
    }
    th:nth-child(3){
        width: 20%;
    }
    /* td{
        padding:13px;
    }
    th:child1 tr:nth-child(even) {
        background-color: #f2f2f2;
    } */
</style>



<body>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/js/bootstrap.bundle.min.js" integrity="sha384-pprn3073KE6tl6bjs2QrFaJGz5/SUsLqktiwsUTF55Jfv3qYSDhgCecCxMW52nD2" crossorigin="anonymous"></script>
    <section class="bg-light p-5">
        <br> <br> <br>
        <!-- ----------------------------------------আল_কোরআন -->
        <h3>আল কোরআন</h3>
        <div class="table-responsive">
            <div class = "table table-sm table-striped" >
                <table>
                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet FROM quran";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                            <tr> 
                            <td>" . $inc++ . "</td>
                            <td>" . $row['books_name'] . "</td>
                            <td>" . $row['author_name'] . "</td>
                            <td>" . $row['publication_name'] . "</td>
                            <td>" . $row['price'] . "</td>
                            <td>" . $row['catagory'] . "</td>
                            <td>" . $row['yes_no'] . "</td>
                            <td>" . $row['commnet'] . "</td>
                            </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>

                <br> <br> <br>

                <h3>আল হাদিস</h3>
                <table>
                    <!-- ----------------------------------------আল_হাদিস-->

                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet FROM hadith";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                            <tr> 
                            <td>" . $inc++ . "</td>
                            <td>" . $row['books_name'] . "</td>
                            <td>" . $row['author_name'] . "</td>
                            <td>" . $row['publication_name'] . "</td>
                            <td>" . $row['price'] . "</td>
                            <td>" . $row['catagory'] . "</td>
                            <td>" . $row['yes_no'] . "</td>
                            <td>" . $row['commnet'] . "</td>
                        </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>

                <br> <br> <br>

                <h3>সীরাতে রাসূল সাঃ ও সাহাবীদের জীবনী</h3>
                <table>
                    <!-- ----------------------------------------সীরাতে রাসূল সাঃ ও সাহাবীদের জীবনী-->
                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet FROM as_sirat";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                            <tr> 
                            <td>" . $inc++ . "</td>
                            <td>" . $row['books_name'] . "</td>
                            <td>" . $row['author_name'] . "</td>
                            <td>" . $row['publication_name'] . "</td>
                            <td>" . $row['price'] . "</td>
                            <td>" . $row['catagory'] . "</td>
                            <td>" . $row['yes_no'] . "</td>
                            <td>" . $row['commnet'] . "</td>
                            </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>

                <br> <br> <br>

                <h3>ইসলামের মৌলিক ইবাদত সমূহ</h3>
                <table>
                    <!-- ----------------------------------------ইসলামের মৌলিক ইবাদত সমূহ-->
                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet FROM maulik_ibadat";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                            <tr> 
                            <td>" . $inc++ . "</td>
                            <td>" . $row['books_name'] . "</td>
                            <td>" . $row['author_name'] . "</td>
                            <td>" . $row['publication_name'] . "</td>
                            <td>" . $row['price'] . "</td>
                            <td>" . $row['catagory'] . "</td>
                            <td>" . $row['yes_no'] . "</td>
                            <td>" . $row['commnet'] . "</td>
                        </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>

                <br> <br> <br>

                <h3>ইসলামী সাহিত্য ও দাওয়াত</h3>
                <table>
                    <!-- ----------------------------------------ইসলামী সাহিত্য ও দাওয়াত-->
                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet,id FROM sahitto_dowat";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                            <tr> 
                            <td>" . $inc++ . "</td>
                            <td>" . $row['books_name'] . "</td>
                            <td>" . $row['author_name'] . "</td>
                            <td>" . $row['publication_name'] . "</td>
                            <td>" . $row['price'] . "</td>
                            <td>" . $row['catagory'] . "</td>
                            <td>" . $row['yes_no'] . "</td>
                            <td>" . $row['commnet'] . "</td>
                            <td>" . $row['id'] . "</td>
                            </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>

                <br> <br> <br>

                <h3>আখিরাত</h3>
                <table>
                    <!-- ----------------------------------------আখিরাত-->
                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet,id FROM akhirat";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                            <tr> 
                            <td>" . $inc++ . "</td>
                            <td>" . $row['books_name'] . "</td>
                            <td>" . $row['author_name'] . "</td>
                            <td>" . $row['publication_name'] . "</td>
                            <td>" . $row['price'] . "</td>
                            <td>" . $row['catagory'] . "</td>
                            <td>" . $row['yes_no'] . "</td>
                            <td>" . $row['commnet'] . "</td>
                            <td>" . $row['id'] . "</td>
                        </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>


                <br> <br> <br>

                <h3>ইসলামী জীবন ব্যবস্থা</h3>
                <table>
                    <!-- ---------------------------------------- 	ইসলামী জীবন ব্যবস্থা-->
                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet,id FROM islami_jibon_babostha";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                            <tr> 
                            <td>" . $inc++ . "</td>
                            <td>" . $row['books_name'] . "</td>
                            <td>" . $row['author_name'] . "</td>
                            <td>" . $row['publication_name'] . "</td>
                            <td>" . $row['price'] . "</td>
                            <td>" . $row['catagory'] . "</td>
                            <td>" . $row['yes_no'] . "</td>
                            <td>" . $row['commnet'] . "</td>
                            <td>" . $row['id'] . "</td>
                            </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>


                <br> <br> <br>

                <h3>ইসলামী অর্থনীতি</h3>
                <table>
                    <!-- ----------------------------------------ইসলামী অর্থনীতি-->

                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet,id FROM islami_orthoniti";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                            <tr> 
                            <td>" . $inc++ . "</td>
                            <td>" . $row['books_name'] . "</td>
                            <td>" . $row['author_name'] . "</td>
                            <td>" . $row['publication_name'] . "</td>
                            <td>" . $row['price'] . "</td>
                            <td>" . $row['catagory'] . "</td>
                            <td>" . $row['yes_no'] . "</td>
                            <td>" . $row['commnet'] . "</td>
                            <td>" . $row['id'] . "</td>
                            </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>

                <br> <br> <br>

                <h3>মানবাধিকার</h3>
                <table>
                    <!-- ---------------------------------------- 	মানবাধিকার-->
                    <tr>
                        <th>ID </th>
                        <th>Books name</th>
                        <th>Author name</th>
                        <th>Publication</th>
                        <th>Price</th>
                        <th>Catagory</th>
                        <th>exist</th>
                        <th>Comments</th>
                        <th>Operations</th>

                        <?php
                        include("connect.php");
                        $sql = "SELECT books_name,author_name,publication_name,catagory,price,yes_no,commnet,id FROM manabadhikar";
                        $result = $connection->query($sql);
                        $inc = 1;
                        if ($result->num_rows > 0) {
                            while ($row = $result->fetch_assoc()) {
                                echo "
                        <tr> 
                        <td>" . $inc++ . "</td>
                        <td>" . $row['books_name'] . "</td>
                        <td>" . $row['author_name'] . "</td>
                        <td>" . $row['publication_name'] . "</td>
                        <td>" . $row['price'] . "</td>
                        <td>" . $row['catagory'] . "</td>
                        <td>" . $row['yes_no'] . "</td>
                        <td>" . $row['commnet'] . "</td>
                        <td>" . $row['id'] . "</td>
                    </tr> ";
                            }
                            echo "</table>";
                        } else {
                            echo "0 results";
                        }
                        ?>
                    </tr>
                </table>
            </div>
        </div>
    </section>



    <button onClick="window.print()">Print</button>
    <li> <a href="index.php" style="text-decoration:none"> Go to Index page</a></li>
    <li> <a href="connect.php" style="text-decoration:none">Check Database connection</a> </li>
    <li> <a href="add_author_name.php" style="text-decoration:none">Add Names to Author List</a> </li>
    <li> <a href="display_author_list.php" style="text-decoration:none;">Show Author List</a> </li>
    <li> <a href="add_names_to_catagory.php" style="text-decoration:none">Add Names to Catagory </a> </li>
    <li> <a href="display_catagory_list.php" style="text-decoration:none">Show Catagory Names List</a> </li>
    <li> <a href="add_publication.php" style="text-decoration:none;">Add Name to publication List</a> </li>
    <li> <a href="display_publication_list.php" style="text-decoration:none">Show Publicaton list</a> </li>
    <li> <a href="" style="text-decoration:none">Show Full Database</a> </li>

</body>

</html>