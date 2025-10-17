<?php
require_once('connection.php');
$conn = getDBConnection();

$author_name = ''; 
$comment = '';

if(isset($_POST['submit'])){
    $author_name = $_POST['author_name'];
    $comment = $_POST['comments'];
    
    // Prepare and bind
    $stmt = $conn->prepare("INSERT INTO authors_name (author_name, other) VALUES (?, ?)");
    $stmt->bind_param("ss", $author_name, $comment);
    
    // Execute the statement
    if ($stmt->execute()) {
        // Success
        header("Location: add_author.php");
        exit;
    } else {
        echo "Error: " . $stmt->error;
    }
    
    $stmt->close();
} else {
    // If not submitting, just redirect
    header("Location: add_author.php");
    exit;
}

$conn->close();
?>
