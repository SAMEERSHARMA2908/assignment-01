DAY-1 Programming fundamentals answers:

//Q.1 What is a variable in C/C++?
A variable is a named memory location used to store data.
//Q.2 Why do we use variables in programs?
Variables are used to store and manipulate data in programs
//Q.3 What is the difference between the variable name and its value?
A variable name identifies the storage location,while its value is the data stored in it.
//Q.4 Which of the following is a valid variable name?a.2num b.total_marks c.for d.my marks
Valid variable name: b.total_marks
//Q.5 Why is Age different from age?
C++ is case sensitive,so Age and age are different variables.
//Q.6 Can a variable name contain spaces?Why?
No.Variable names cannot contain spaces because the compiler treats spaces as seperators.
//Q.7 Can a variable name start with a underscore(_)?
yes,a variable name can start with a underscore(_).
//Q.8 WWhat happens if two variables can have the same name in the same scope?
it causes an error because two variables cannot have the same name in the same scope.
//Q.9 Write three meaningful variables name to store student information?
Examples:studentName,studentAge,studentMarks.
//Q.10 Which naming convention is better studentMarks or sm?
studentMarks is better because it is more meaningful and readable.
//Q.11 What is a data type?
A data type specifies the kind of data a variable can store.
//Q.12 What kind of data type is used to store whole numbers?
int
//Q.13 What data type is used to store decimal values?
float or double
//Q.14 what is the difference between float and double?
double has greater precision and stores more decimal digits than float.
//Q.15 what type of data type is used to store character values?
char
//Q.16 which data type stores true/false values?
bool
//Q.17 which data type is suitable for storing a person's name?
string
//Q.18 Predict the output: int age=18; cout<<age;
Output:18
//Q.19 Identify the data type:25,3.14,'A',true?
25->int,3.14->double,'a'->char,true->bool
//Q.20 What happens if we store a decimal value in int variable?
The decimal part is truncated.
//Q.21 What is the purpose of cin?
cin is used to take input from the user.
//Q.22 What is the purpose of cout?
cout is used to display output.
//q.23 Which symbol is used with cin?
>>
//Q.24 which symbol is used with cout?
<<
//Q.25 Explain: cin>>age;
cin>>age; takes input from the user and stores it in age.
//Q.26 Explain: cout<<age;
cout<<age; displays the value of age.
//Q.27 What is the purpose of endl?
endl moves the cursor to the next line.
//Q.28 Write a statement to input a student's marks.
cin>>marks;
//Q.29 Write a statement to display "welcome to C++".
cout<<"welcome to C++";
//Q.30 Predict the output: cout<<"programming";
output:programming
//Q.31 What is an operator?
An operator is a symbol that performs a specific operation on one or more operands.
//Q.32 Which operator is used for addition?
+
//Q.33 What is the result of 10%3?
10%3=1
//Q.34 What is the result of 8%2?
8%2=0
//Q.35 Which operator checks equality?
==
//Q.36 What is the difference between = and ==?
=assigns a value to a variable,while == compares two values for equality.
//Q.37 What is the result of 5>3?
true
//Q.38 What does && represent?
&& represents logical AND.
//Q.39 What does || represent?
|| represents logical OR.
//Q.40 What does ! represent?
! represents logical NOT.
//Q.41 Write a program to print"hello world".
program to print hello world:
#include <iostream>
using namespace std;
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
//Q.42 Write a program to input two numbers and display their sum.
program to input two numbers and display their sum:
#include <iostream>
using namespace std;
int main() {
    int num1, num2, sum;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
    return 0;
}
//Q.43 Write a program to calculate the area of a rectangle.
program to calculate the area of a rectangle:
#include <iostream>
using namespace std;
int main() {
    double length, width, area;
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
    return 0;
}
Q.44 What formula is used to calculate Simple Interest?
Simple interest formula:SI+(P*R*T)/100
//Q.45 Write a program to calculate simple interest.
Program to calculate simple interest:
#include <iostream>
using namespace std;
int main() {
    double principal, rate, time, simpleInterest;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time in years: ";
    cin >> time;
    simpleInterest = (principal * rate * time) / 100;
    cout << "The simple interest is: " << simpleInterest << endl;
    return 0;
}
//Q.46 Why is a temporary variable used while swapping two numbers?
A temporary variable is a variable used to prevent data loss while swapping.
//Q.47 Swap the values:a=10,b=20.
After swapping:a=20,b=10
//Q.48 What formula is used to convert Celsius into Fahrenheit?
Formula F=(C*9/5)+32
//Q.49 What is the Fahrenheit value of 0°C?
0°C=32°F
//Q.50 Why can integer division give incorrect results in the Celsius-to-Fahrenheit program?
Integer division can give incorrect results because 9/5 becomes 1 instead of  1.8 