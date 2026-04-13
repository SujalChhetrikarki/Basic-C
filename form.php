<?php
$localhost = "localhost";
$username = "root"; 
$password = "";
$dbname = "sujal";  

$conn = new mysqli($localhost, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {

    // Get and sanitize inputs
    $name = $_POST["name"];
    $address = $_POST["address"];
    $email = $_POST["email"];
    $phone = $_POST["phone"];
    $password = $_POST["password"];

    // Hash password (VERY IMPORTANT)
    $hashedPassword = password_hash($password, PASSWORD_DEFAULT);

    // Use prepared statement (prevents SQL injection)
    $stmt = $conn->prepare("INSERT INTO users (name, address, email, phone, password) VALUES (?, ?, ?, ?, ?)");
    $stmt->bind_param("sssss", $name, $address, $email, $phone, $hashedPassword);

    if ($stmt->execute()) {
        echo "✅ New record created successfully";
    } else {
        echo "❌ Error: " . $stmt->error;
    }

    $stmt->close();
}
?>

<html>
<head>
    <title>Sujal</title>
    <style>
        table {
            margin: auto;
            background-color: lime;
            padding: 10px;
        }
        td {
            padding: 5px;
        }    
    </style>
</head>

<body style="background-color:lightblue; text-align:center;">
    <img src="html.jpg" alt="HTML Image" height="100" width="100"><br><br>

    <h1>Welcome to HTML Form</h1>

    <!-- FIXED FORM -->
    <form method="POST" action="">
        <table>
            <tr>
                <td>Name:</td>
                <td><input type="text" name="name" required></td>
            </tr>
            <tr>
                <td>Address:</td>
                <td><input type="text" name="address" required></td>
            </tr>
            <tr>
                <td>Email:</td>
                <td><input type="email" name="email" required></td>
            </tr>
            <tr>
                <td>Phone:</td>
                <td><input type="tel" name="phone" required></td>
            </tr>
            <tr>
                <td>Password:</td>
                <td><input type="password" name="password" required></td>
            </tr>
            <tr>
                <td colspan="2" style="text-align:center;">
                    <input type="submit" value="Submit">
                </td>
            </tr>
        </table>
    </form>
</body>
</html>