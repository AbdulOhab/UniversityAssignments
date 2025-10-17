<!DOCTYPE php>

<html>

<head>
    <title>publication</title>
</head>
<style>
    table {
        border-collapse: collapse;
        width: 100%;
        color: #588c7e;
        font-family: monospace;
        font-size: 20px;
        text-align: left;
        margin: px auto;
    }

    th {
        background-color: #588c7e;
        color: white;
    }

    tr:nth-child(even) {
        background-color: #f2f2f2
    }

    .btn {
        text-decoration: none;
    }
</style>



<body>
    <!-- ----------------------------------------Author list -->
    <table>
        <h3>Publicaton List</h3>
        <tr>
            <th> ID </th>
            <th> publication list</th>
            <th> Id</th>
            <th> Ohter</th>
            <th> Operation</th>


            <?php
            include("connect.php");
            $sql = "SELECT publication_name,other,id FROM publication_List";
            $result = $connection->query($sql);
            $inc = 1;
            if ($result->num_rows > 0) {
                while ($row = $result->fetch_assoc()) {
                    echo "
					<tr> 
					    <td>" . $inc++ . "</td>
					    <td>" . $row['publication_name'] . "</td>
                        <td>" . $row['id'] . "</td>
                        <td>" . $row['other'] . "</td>
					</tr> ";
                }
                echo "</table>";
            } else {
                echo "0 results";
            }
            ?>
        </tr>
    </table>

    <button onClick="window.print()">Print</button>
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
    //this code for delete data in the class
    include("connect.php");
    if (isset($_GET['id'])) {
        $id = $_GET['id'];
        $query = "DELETE FROM authors_name WHERE id = '$id' ";
        $Exec = mysqli_query($connection, $query);
        if ($Exec) {
            echo "record_deletet";
        } else {
            echo "fail to deleted";
        }
    }
    ?>



</body>

</html>