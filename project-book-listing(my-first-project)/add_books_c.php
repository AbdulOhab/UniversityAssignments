<?php
require_once('connection.php');
$conn = getDBConnection();

$book_name = '';
$author_name = '';
$publication_name = ''; 
$price = '';
$total_page = '';
$catagory_list = '';
$availORnot = '';
$comment = '';

if(isset($_POST['submit'])){
    $book_name = $_POST['book_name'];
    $author_name = $_POST['author_name'];
    $publication_name = $_POST['publication_name'];
    $price = $_POST['price'];
    $total_page = $_POST['total_page'];
    $catagory_list = $_POST['catagory_list'];
    $availORnot = isset($_POST['availORnot']) ? $_POST['availORnot'] : 'No';
    $comment = $_POST['comments'];
    
    // Note: Since the SQL schema uses simple text fields instead of foreign keys,
    // we'll insert the names directly into the respective book tables
    // We need to determine which category table to insert into based on catagory_list
    
    // Map category names to their respective tables
    $category_tables = [
        'কুরআন ও তাফসীর' => 'quran',
        'হাদিস ও সুন্নাহ' => 'hadith',
        'সীরাত ও জীবনী' => 'as_sirat',
        'মৌলিক ইবাদাত' => 'maulik_ibadat',
        'সাহিত্য ও দা\'ওয়াহ' => 'sahitto_dowat',
        'আখিরাত' => 'akhirat',
        'ইসলামী জীবন ব্যবস্থা' => 'islami_jibon_babostha',
        'ইসলামী অর্থনীতি' => 'islami_orthoniti',
        'মানবাধিকার' => 'manabadhikar'
    ];
    
    // Default to quran table if category not found
    $table_name = isset($category_tables[$catagory_list]) ? $category_tables[$catagory_list] : 'quran';
    
    // Insert book record into the appropriate category table
    $stmt = $conn->prepare("INSERT INTO `$table_name` (books_name, author_name, publication_name, price, catagory, yes_no, commnet) VALUES (?, ?, ?, ?, ?, ?, ?)");
    $stmt->bind_param("sssssss", $book_name, $author_name, $publication_name, $price, $catagory_list, $availORnot, $comment);
    
    if ($stmt->execute()) {
        // Success
        header("Location: add_books.php");
        exit;
    } else {
        echo "Error: " . $stmt->error;
    }
    
    $stmt->close();
} else {
    // If not submitting, just redirect
    header("Location: add_books.php");
    exit;
}

$conn->close();
?>
