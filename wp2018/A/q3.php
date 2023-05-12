<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title></title>
</head>

<body>
    <?php

    //associative array
    $marks = array(
        "marks1" => 30,
        "marks2" => 65,
        "marks" => 52,
        "marks4" => 14,
        "marks5" => 45
    );

    //get highest marks name
    $maxMarks = max($marks);
    $maxMarksName = array_search($maxMarks, $marks);
    echo "Highest marks is in $maxMarksName with marks $maxMarks";

    //get index of highest marks
    $maxMarksIndex = array_search($maxMarks, $marks);
    echo "<br>Index of highest marks is $maxMarksIndex";

    //check each student grades based on the marks
    foreach ($marks as $key => $value) {
        //print index
        echo "<br>Index of $key is $value";
        if ($value >= 75) {
            echo "<br>Grade of $key is A";
        } else if ($value >= 65) {
            echo "<br>Grade of $key is B";
        } else if ($value >= 55) {
            echo "<br>Grade of $key is C";
        } else if ($value >= 45) {
            echo "<br>Grade of $key is D";
        } else if ($value >= 35) {
            echo "<br>Grade of $key is E";
        } else {
            echo "<br>Grade of $key is F";
        }
        echo "<br>";
    }


    ?>
</body>

</html>