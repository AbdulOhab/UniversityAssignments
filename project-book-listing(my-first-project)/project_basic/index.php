<!DOCTYPE html>
<html lang="en-US">

<head>
    <title>Books Database</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="index_style.css">

</head>

<html>
<?php
include("connect.php");
$author_query_1 = "SELECT author_name FROM authors_name";
$author_res_1 = mysqli_query($connection, $author_query_1);

$publication_query_2 = "SELECT publication_name FROM publication_list";
$publication_res_2 = mysqli_query($connection, $publication_query_2);

$catagory_query_3 = "SELECT catagory_name FROM catagory_list";
$catagory_res_3 = mysqli_query($connection, $catagory_query_3);
?>

<body>
    <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
    <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.2.0-beta1/dist/js/bootstrap.bundle.min.js" integrity="sha384-pprn3073KE6tl6bjs2QrFaJGz5/SUsLqktiwsUTF55Jfv3qYSDhgCecCxMW52nD2" crossorigin="anonymous"></script>
    <div class="titles">
        <h1> Bangla Books Database </h1>
        <h3>Support System</h3>
    </div>


    <div class="container">
       <!-- insert_data_in_full_database.php -->

        <form action="index.php" method="post" class="form-group">
            <fieldset>
                <!--------------------------------------- Author Name ---------------------------------->
                <div class="child1">
                    <h3>Enter Books details:</h3>
                    <label>Books Name:</label>
                    <br>
                    <input type="text" name="book_name" placeholder="Books name" size="38px" maxlength="100">

                    <!--------------------------------------- Author Name ---------------------------------->

                    <br><label>Author Name:</label><br>
                    <select name="author_name">
                        <option value="N/A" >--------------------select--------------------</option>
                        <?php
                        while ($row = mysqli_fetch_array($author_res_1, MYSQLI_ASSOC)) :;
                        ?>
                            <option value="<?php echo $row["author_name"]; ?>">
                                <?php echo $row["author_name"]; ?>
                            </option>
                        <?php
                        endwhile;
                        ?>
                    </select>


                    <!--------------------------------------- Publication ---------------------------------->

                    <br><label>Publication Name:</label> <br>
                    <select name="publication_name">
                        <option value="N/A" >--------------------select--------------------</option>
                        <?php
                        while ($row = mysqli_fetch_array($publication_res_2, MYSQLI_ASSOC)) :;
                        ?>
                            <option value="<?php echo $row["publication_name"]; ?>">
                                <?php echo $row["publication_name"]; ?>
                            </option>
                        <?php
                        endwhile;
                        ?>
                    </select>

                    <!--------------------------------------- Price ---------------------------------->

                    <br><label>Price:</label> <br>
                    <input type="text" name="price" placeholder="price" size="38px" maxlength="100">


                    <!--------------------------------------- Catagory ---------------------------------->
                    <!--Most importent part in this Project-->

                    <br><label>Catagory:</label> <br>
                    <select name="catagory">
                        <option value="N/A">--------------------select--------------------</option>
                        <?php
                        while ($row = mysqli_fetch_array($catagory_res_3, MYSQLI_ASSOC)) :;
                        ?>
                            <option value="<?php echo $row["catagory_name"]; ?>">
                                <?php echo $row["catagory_name"]; ?>
                            </option>
                        <?php
                        endwhile;
                        ?>
                    </select>


                    <br><label>Available In the market:</label><br>
                    <label><input type="radio" name="yes_no" value="Yes">Yes</label>
                    <label><input type="radio" name="yes_no" value="No"> No</label>
                    <br><label>Comments:</label> <br>
                    <textarea rows="1" cols="30" name="comments" id="comments" size="38px" maxlength="100"></textarea>
                    <br><button type="submit" name="submit"> Submit </button> <br>
                </div>
            </fieldset>
        </form>

        <div class="child3">
        <h4>Link:</h4>
        <li> <a href="connect.php" style="text-decoration:none">Check Database connection</a> </li>
        <li> <a href="add_author_name.php" style="text-decoration:none">Add Names to Author List</a> </li>
        <li> <a href="display_author_list.php" style="text-decoration:none;">Show Author Name List</a> </li>
        <li> <a href="add_names_to_catagory.php" style="text-decoration:none">Add Names to Catagory </a> </li>
        <li> <a href="display_catagory_list.php" style="text-decoration:none">Show Catagory Names List</a> </li>
        <li> <a href="add_publication.php" style="text-decoration:none;">Add Name to publication List</a> </li>
        <li> <a href="display_publication_list.php" style="text-decoration:none">Show Publicaton list</a> </li>
        <li> <a href="show_full_database.php" style="text-decoration:none">Show Full Database</a> </li>
    </div>
    </div>

    <br>

    <hr>
    <p class="footer">Developed & Maintained by Unknown</p>
</body>
<?php

if (isset($_POST['submit'])) {
    $catagory = mysqli_real_escape_string($connection, $_POST["catagory"]);
    if ($catagory == 'আল_কোরআন') {

        $sql = "INSERT INTO quran(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit successfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }

    if ($catagory == 'আল_হাদিস') {

        $sql = "INSERT INTO hadith(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit successfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }

    if ($catagory == 'সীরাতে রাসূল সাঃ ও সাহাবীদের জীবনী') {

        $sql = "INSERT INTO as_sirat(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit successfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }

    if ($catagory == 'ইসলামের মৌলিক ইবাদত সমূহ') {

        $sql = "INSERT INTO maulik_ibadat(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit succesßßßßsfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }

    if ($catagory == 'ইসলামী সাহিত্য ও দাওয়াত') {

        $sql = "INSERT INTO sahitto_dowat(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit successfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }

    
    if ($catagory == 'আখিরাত') {

        $sql = "INSERT INTO akhirat(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit successfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }

    if ($catagory == 'ইসলামী জীবন ব্যবস্থা') {

        $sql = "INSERT INTO islami_jibon_babostha(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit successfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }

    if ($catagory == 'ইসলামী অর্থনীতি') {

        $sql = "INSERT INTO islami_orthoniti(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit successfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }



    if ($catagory == 'মানবাধিকার') {

        $sql = "INSERT INTO manabadhikar(books_name,author_name,publication_name,price,catagory,yes_no,commnet) 
                VALUES('$_POST[book_name]','$_POST[author_name]','$_POST[publication_name]','$_POST[price]','$catagory','$_POST[yes_no]','$_POST[comments]')";


        if ($connection->query($sql) === TRUE) {
            // echo "<h3>submit successfully.</h3>";
            echo '<script> swal("Successful!","Data submit complete!", "success"); </script>';
        } else {
            // echo "Error: " . $sql . "<br>" . $connection->error;
            echo '<script>swal("Data unsuccess!", "error"); </script>';
        }
    }
}

?>





</html>