<!DOCTYPE php>

<html>

<head>
    <title>add catagory name</title>
</head>

<style>
    .container{
	width: 100%;
	background-color: #f5fff5;
	border: 1px solid #b0b0b0;
	text-align: center;
	margin: 2px;
	padding: 2px;
	line-height: 140%;
}
a:visited {
    color: #558855;
}

body {
    BACKGROUND-COLOR: #FAF1F7;
    font-size: 11pt;
    font-family: tahoma;
}
.add_author{
    margin-top:50px;
    width: 200px;
    margin-left: 550px;
}

</style>

<body>
    <div class="container">
        <a href="/">
            <h1 class="title"> Bangla Books Database </h1>
        </a>
        <h3>Support System</h3>
    </div>

    <div action="add_author_name.php" class="add_author">
        <form method="post">
            <fieldset>
                Add Catagory Name: <br> <input type="text" name="catagory_name" value=""> <br>
                Comment: <br> <input type="text" name="comment" value=""> <br>
                <br>
                <button type="submit" name="submit"> Submit </button> <br>
            </fieldset>
            </from>
    </div>
    <li> <a href="index.php" style="text-decoration:none"> Go to Index page</a> </li>
    <li> <a href="connect.php" style="text-decoration:none">Check Database connection</a> </li>
    <li> <a href="add_author_name.php" style="text-decoration:none">Add Names to Author List</a> </li>
    <li> <a href="display_author_list.php" style="text-decoration:none;">Show Author List</a> </li>
    <li> <a href="add_names_to_catagory.php" style="text-decoration:none">Add Names to Catagory </a> </li>
    <li> <a href="display_catagory_list.php" style="text-decoration:none">Show Catagory Names List</a> </li>
    <li> <a href="add_publication.php" style="text-decoration:none;">Add Name to publication List</a> </li>
    <li> <a href="display_publication_list.php" style="text-decoration:none">Show Publicaton list</a> </li>
    <li> <a href="" style="text-decoration:none">Show Full Database</a> </li>

    <?php

    include("connect.php");

    if (isset($_POST['submit'])) {
        $catagory_name = $_POST["catagory_name"];
        $comment = $_POST["comment"];

        $Query = "INSERT INTO catagory_list(catagory_name,other) VALUES('$catagory_name','$comment')";


        echo "<br>";

        if ($connection->query($Query) === TRUE) {
            echo "<h3>submit successfully.</h3>";
        } else {
            echo "Error: " . $Query . "<br>" . $connection->error;
        }
    }

    $connection->close();
    ?>
</body>
</html>