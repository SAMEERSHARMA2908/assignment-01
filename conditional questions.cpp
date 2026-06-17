DAY-2 Conditional Statements

Q.1 What are the conditional statements in programming?
A conditional statement is used to make decisions in a program based on a condition.
Q.2 What does an if statement do?
An if statement executes a block of code if a condition is true 
Q.3 what is the purpose of an else block?
An else block is executed when the condition in the if statement is false.
Q.4when is a else block executed?
An else block is executed when the corresponding if condition evaluates to false.
Q.5What is a boolean expression?
A boolean expression is an expression that evaluates to either true or false. It is used in conditional statements to determine the flow of control in a program.
Q.6 Write the syntax of an if statement.
if (condition) {
    // code to be executed if condition is true
}
Q.7 What operator is commonly used to test equality in conditional statements?
The operator commonly used to test equality in conditional statements is ==
Q.8 What does the modulus operator (%) return?
The modulus operator (%) returns the remainder of a division operation between two integers. For example, 5 % 2 would return 1, since 5 divided by 2 is 2 with a remainder of 1.
Q.9 How can you check if a number is even?
You can check if a number is even by using the modulus operator (%) to see if the number divided by 2 has a remainder of 0. For example, if (number % 2 == 0)  //{ number is even } else { // number is odd }
Q.10 How can you check if a number is odd?
You can check if a number is odd by using the modulus operator (%) to see if the number divided by 2 has a remainder of 1. For example, if (number % 2 != 0) //{ number is odd } else { // number is even }
Q.11what is the purpose of else if statement?
The purpose of an else if statement is to provide an additional condition to check if the previous if condition is false. It allows for multiple conditions to be evaluated in a sequence, enabling more complex decision-making in a program.    
Q.12 What is a nested if statement?
A nested if statement is an if statement that is placed inside another if statement. It allows for
    more complex decision-making by enabling multiple levels of conditions to be checked.
Q.13 Can an if statement exist without an else?
Yes, an if statement can exist without an else block. The else block is optional and is only used when you want to specify an alternative action to take when the if condition is false. If there is no else block, the program will simply continue executing the code that follows the if statement when the condition is false.    
Q.14 What is the output when a false condition is encountered in an if statement without an else?
When a false condition is encountered in an if statement without an else block, the program will simply skip the code inside the if block and continue executing the code that follows the if statement. There will be no output from the if statement itself since the condition was false and there is no else block to provide an alternative action. 
Q.15 What is the role of braces{} in C/C++ conditionals?
Braces {} are used to group multiple statements together into a single block. 
Q.16 What does >mean?
> means grater than
Q.17 What does < mean?
< means less than
Q.18 What does >= mean?
>= means greater than or equal to
Q.19 What does <= mean?
<= means less than or equal to
Q.20 What does != mean?
!= means not equal to
Q.21 What is a switch statement?
A switch statement selects one block of code from many choices
Q.22 What is a case label in a switch statement?
A case label represents a specific value in a switch statement. 
Q.23 Why is break used in switch?
The break statement is used in a switch statement to terminate a case and exit the switch block. 
Q.24 What happens if break is omitted??
Without break,execution continues to the next case
Q.25 What is the default case in switvh?
Thedefault case executes when no case matches the condition
Q.26 Can switch compare strings in C++?
No, traditional switch statements in C++ cannot compare strings. 
Q.27 Which statement is better for many constant choices:if-else or switch?
Switch is generally better for many constant choices as it can be more readable and efficient
Q.28 How do you test whether a value is positive?
if value>0
Q.29 How do you test whether a value is negative?
if value<0
Q.30 How do you test whether a value is zero?
if value==0
Q.31Write a condition to check if age is at least 18.
if (age >= 18) {
    // code to execute if age is at least 18
}
Q.32 Write a condition to check if marks above 50.
if (marks > 50) {
    // code to execute if marks are above 50
}
Q.33 What is decision making in programming?
Decision making in programming refers to the process of making choices based on certain conditions or criteria.
Q.34 Can nested if statements have multiple levels?
Yes, nested if statements can have multiple levels. 
Q.35 What is logical AND(&&)?
Logical AND(&&) is a binary operator that returns true if both operands are true, otherwise it returns false.
Q.36 What is logical OR(||)?
Logical OR(||) is a binary operator that returns true if at least one of the operands is true, otherwise it returns false.
Q.37 What is logical NOT(!)?
Logical NOT(!) is a unary operator that negates the value of a boolean expression. If the expression is true, it returns false, and if the expression is false, it returns true.
Q.38 How do you check if a year is divisible by 4?
You can check if a year is divisible by 4 using the modulus operator (%). If the year divided by 4 has a remainder of 0, then it is divisible by 4.
 if(year % 4 == 0) {
    // code to execute if year is divisible by 4
 }
 Q.39 What is a leap year?
 A leap year is a year that has an extra day added to it, making it 366 days long instead of the usual 365 days. 
 Q.40 What is the condition to check if a year is a leap year?
 A year is a leap year if it is divisible by 4, but not divisible by 100
 Q.41 How do you find the largest of two numbers?
 if(num1 > num2) {
    // code to execute if num1 is larger
 } else {
    // code to execute if num2 is larger or equal
 }
 Q.42 How do you find the largest of three numbers?
    if(num1 > num2 && num1 > num3) {
        // code to execute if num1 is the largest
    } else if(num2 > num1 && num2 > num3) {
        // code to execute if num2 is the largest
    } else {
        // code to execute if num3 is the largest or equal
    }
Q.43 What is an if else-if ladder?
An if else-if ladder is a series of if and else-if statements that allows for multiple conditions to be checked in sequence.
Q.44 What is the difference between if and switch statements? 
The main difference between if and switch statements is that if statements are used to test multiple conditions, while switch statements are used to test a single expression against multiple possible values.
Q.45 Can switch use ranges directly?
No, switch statements cannot use ranges directly. 
Q.46 What is fall-through in switch ?
Fall-through in a switch statement occurs when the execution of one case continues into the next case without a break statement. 
Q.47 What data type is usually used for conditions?
The bool data type is usually used for conditions 
Q.48 Why are conditional statements important?
Conditional statements are important because they allow programs to make decisions and execute different blocks of code based on specific conditions. 
Q.49 Give one example of a conditional statement
if (temperature > 30) {
    std::cout << "It's a hot day!" << std::endl;
} else {
    std::cout << "It's not too hot today." << std::endl;
}
Q.50 Name four conditional structures covered.
if-else, if-else-if, switch, and ternary operator.