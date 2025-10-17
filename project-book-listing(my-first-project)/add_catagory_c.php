<?php
require_once('connection.php');
$conn = getDBConnection();

$category_name = ''; 
$comment = '';

if(isset($_POST['submit'])){
    $category_name = $_POST['catagory_name'];
    $comment = $_POST['comments'];
    
    // Prepare and bind
    $stmt = $conn->prepare("INSERT INTO catagory_list (catagory_name, other) VALUES (?, ?)");
    $stmt->bind_param("ss", $category_name, $comment);
    
    // Execute the statement
    if ($stmt->execute()) {
        // Success
        header("Location: add_catagory.php");
        exit;
    } else {
        echo "Error: " . $stmt->error;
    }
    
    $stmt->close();
} else {
    // If not submitting, just redirect
    header("Location: add_catagory.php");
    exit;
}

$conn->close();
?>
