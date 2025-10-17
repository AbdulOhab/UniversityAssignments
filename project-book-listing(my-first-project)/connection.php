<?php
// MySQL Database Connection
// Replace these values with your actual MySQL database connection details

ini_set('display_errors', 1);
ini_set('display_startup_errors', 1);
error_reporting(E_ALL);

$host = '127.0.0.1';
$username = 'root';
$password = 'root123';
$database = 'books_database';
$port = 3310;

// Create connection
$conn = new mysqli($host, $username, $password, $database, $port);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
} else {
    // echo "Connected with database successfully!<br>";
}

// Set charset to utf8mb4 for better Unicode support
$conn->set_charset("utf8mb4");

// Function to get database connection (for reusability)
function getDBConnection() {
    static $connection = null;
    
    if ($connection === null) {
        $host = '127.0.0.1';
        $username = 'root';
        $password = 'root123';
        $database = 'books_database';
        $port = 3310;
        
        $connection = new mysqli($host, $username, $password, $database, $port);
        
        if ($connection->connect_error) {
            die("Connection failed: " . $connection->connect_error);
        }
        
        $connection->set_charset("utf8mb4");
    }
    
    return $connection;
}
?>
