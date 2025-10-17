<?php

$servername = "127.0.0.1";
$root_username = "root";
$root_password = "root123";
$db_name = "books_database";
$port = 3310;

$connection = new mysqli($servername, $root_username, $root_password, $db_name);
$connection->set_charset("utf8");


if($connection){
	echo '';
} else{
	die("Connection failed " . "<br>" . $connection->connect_error);
    // echo 'swal("Good job!", "You clicked the button!", "unsuccess");';
}
?>


<!DOCTYPE this_part_html>
<html>
	<head>
		<title> connect database </title>
	</head>
	<body>
    <!-- <script src="https://unpkg.com/sweetalert/dist/sweetalert.min.js"></script>
    <button onclick="history.back()">Go Back</button>
    <script> swal("Connection successful!", "...Back to main page!"); </script> -->
	</body>
</html>