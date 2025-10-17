<?php
require_once('connection.php');
$conn = getDBConnection();

$publication_name = ''; 
$comment = '';

if(isset($_POST['submit'])){
    $publication_name = $_POST['publication_name'];
    $comment = $_POST['comments'];
    
    // Prepare and bind
    $stmt = $conn->prepare("INSERT INTO publication_list (publication_name, other) VALUES (?, ?)");
    $stmt->bind_param("ss", $publication_name, $comment);
    
    // Execute the statement
    if ($stmt->execute()) {
        // Success
        header("Location: add_publication.php");
        exit;
    } else {
        echo "Error: " . $stmt->error;
    }
    
    $stmt->close();
} else {
    // If not submitting, just redirect
    header("Location: add_publication.php");
    exit;
}

$conn->close();
?>
