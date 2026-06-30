## Assignment-05

## 

## \#program 1.c



### variables

.total

.totalMarks

.average

.i  



### Arrays

marks\[5]

scores\[5]

attendance\[5]

arr\[5]

prices\[5]

inventory\[5]

result\[5]

salary\[5]

subject\[5]

grade\[5]

city\[10]



### Functions

printf()

scanf()

strcpy()

main()



### Loops

for(int i=0;i<5;i++)

{

&#x20;   ...

}(8 for loops are used)



### Conditional Statement

if(prices\[2] == 300)

{

&#x20;   printf("Price Found");

}



### File Operations

fopen()

fclose()

fprintf()

fscanf()



### Debugging Checklist



| Check                  | Status                                        |

| ---------------------- | --------------------------------------------- |

| ☑ Syntax Errors        | Found (missing `;`)                           |

| ☑ Undeclared Variables | None                                          |

| ☑ Type Mismatches      | Found                                         |

| ☑ Function Call Errors | Found (`scanf`, `printf`, `strcpy`)           |

| ☑ Scope Errors         | None                                          |

| ☑ Shadowing Issues     | None                                          |

| ☑ Linker Errors        | None                                          |

| ☑ Array Bounds Errors  | Found                                         |

| ☑ Pointer Errors       | Found (`scanf` missing `\&`)                   |

| ☑ File Handling Errors | None                                          |

| ☑ Runtime Errors       | Found (out-of-bounds access, buffer overflow) |

| ☑ Logical Errors       | Found                                         |

| ☑ Wrong Formulas       | Found (`total / 5`)                           |

| ☑ Wrong Conditions     | Found (`=` instead of `==`)                   |





## \#program 2.c



### variables

.sum

.highest

.present

.totalResult

.average

.i



### Arrays

numbers\[10]

marks\[5]

attendance\[5]

fees\[5]

result\[5]

stock\[5]

backup\[5]

inventory\[5]

count\[5]

salary\[5]

subject\[10]

branch\[20]

college\[10]

city\[8]



### Functions

printf()

scanf()

strcpy()

main()



### Loops:

for(int i=0;i<10;i++)

{

&#x20;   numbers\[i] = (i+1) \* 10;

}



for(int i=0;i<=10;i++)

{

&#x20;   printf("%d ", numbers\[i]);

}



for(int i=0;i<10;i++)

{

&#x20;   sum = numbers\[i];

}



for(int i=1;i<5;i++)

{

&#x20;   if(marks\[i] < highest)

&#x20;   {

&#x20;       highest = marks\[i];

&#x20;   }

}



for(int i=0;i<=5;i++)

{

&#x20;   present += attendance\[i];

}



for(int i=0;i<5;i++)

{

&#x20;   fees\[i] = i \* 10000;

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", fees\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   scanf("%d", result\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   totalResult += result\[i];

}



for(int i=0;i<=5;i++)

{

&#x20;   inventory\[i] = i;

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", inventory\[i]);

}



### Debugging checklist

| Check                  | Status                                          |

| ---------------------- | ----------------------------------------------- |

| ☑ Syntax Errors        | Found (missing `;`)                             |

| ☑ Undeclared Variables | None                                            |

| ☑ Type Mismatches      | Found                                           |

| ☑ Function Call Errors | Found (`scanf`, `printf`, `strcpy`)             |

| ☑ Scope Errors         | None                                            |

| ☑ Shadowing Issues     | None                                            |

| ☑ Linker Errors        | None                                            |

| ☑ Array Bounds Errors  | Found                                           |

| ☑ Pointer Errors       | Found (`scanf` missing `\&`)                     |

| ☑ File Handling Errors | None                                            |

| ☑ Runtime Errors       | Found (out-of-bounds access, buffer overflows)  |

| ☑ Logical Errors       | Found                                           |

| ☑ Wrong Formulas       | Found (`sum = numbers\[i]`, `sum / 10`)          |

| ☑ Wrong Conditions     | Found (`<` instead of `>`, `=` instead of `==`) |



## \#program 3.c



### variables

.total

.highest

.lowest

.totalResult

.present

.i

.average



### Functions

printf()

scanf()

strcpy()

main()



### Arrays

marks\[5]

attendance\[5]

fees\[5]

stock\[5]

backup\[5]

result\[5]

inventory\[5]

count\[5]

numbers\[5]

salary\[5]

subject\[8]

branch\[10]

city\[10]

college\[5]

course\[6]



### Loops

for(int i=0;i<5;i++)

{

&#x20;   total += marks\[i];

}



for(int i=1;i<5;i++)

{

&#x20;   if(marks\[i] > highest)

&#x20;   {

&#x20;       highest = marks\[i];

&#x20;   }

}



for(int i=1;i<5;i++)

{

&#x20;   if(marks\[i] > lowest)

&#x20;   {

&#x20;       lowest = marks\[i];

&#x20;   }

}



for(int i=0;i<=5;i++)

{

&#x20;   present += attendance\[i];

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", fees\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   scanf("%d", result\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   totalResult += result\[i];

}



for(int i=0;i<5;i++)

{

&#x20;   inventory\[i] = i \* 100;

}



for(int i=0;i<=5;i++)

{

&#x20;   printf("%d ", inventory\[i]);

}



for(int i=0;i<=5;i++)

{

&#x20;   numbers\[i] = i \* 10;

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", numbers\[i]);

}



## Debugging Checklist

| Check                  | Status                                                                                                                                   |

| ---------------------- | ---------------------------------------------------------------------------------------------------------------------------------------- |

| ☑ Syntax Errors        | \*\*Found\*\* (missing `;` after `return 0`)                                                                                                 |

| ☑ Undeclared Variables | \*\*None\*\*                                                                                                                                 |

| ☑ Type Mismatches      | \*\*Found\*\* (`printf("%d", salary\[0])`, invalid array indices `"one"` and `2.5`)                                                           |

| ☑ Function Call Errors | \*\*Found\*\* (`scanf("%d", result\[i])`, `strcpy()` buffer overflow risk, `scanf("%s",\&branch)` should preferably be `scanf("%9s", branch)`) |

| ☑ Scope Errors         | \*\*None\*\*                                                                                                                                 |

| ☑ Shadowing Issues     | \*\*None\*\*                                                                                                                                 |

| ☑ Linker Errors        | \*\*None\*\*                                                                                                                                 |

| ☑ Array Bounds Errors  | \*\*Found\*\* (`attendance\[5]`, `fees\[5]`, `inventory\[5]`, `numbers\[5]`)                                                                     |

| ☑ Pointer Errors       | \*\*Found\*\* (`scanf("%d", result\[i])` missing `\&`)                                                                                         |

| ☑ File Handling Errors | \*\*None\*\* (no file operations used)                                                                                                       |

| ☑ Runtime Errors       | \*\*Found\*\* (array out-of-bounds, buffer overflows)                                                                                        |

| ☑ Logical Errors       | \*\*Found\*\*                                                                                                                                |

| ☑ Wrong Formulas       | \*\*Found\*\* (`average = total / 5` performs integer division)                                                                              |

| ☑ Wrong Conditions     | \*\*Found\*\* (`if(marks\[i] > lowest)` should be `<`; `if(stock\[2] = 30)` should use `==`)    





### \#program 4.c

### 

### variables

.totalSales

.highestSale   

.totalOrders

.averageSales

.i



### Array                                      

sales\[5]

monthlySales\[5]

stock\[5]

orders\[5]

revenue\[5]

backupRevenue\[5]

employees\[5]

expenses\[5]

ratings\[5]

feedback\[5]

product\[8]

category\[15]

city\[10]

branch\[5]

department\[6]



### Functions

printf()

scanf()

strcpy()

main()



### loops

for(int i=0;i<5;i++)

{

&#x20;   totalSales += sales\[i];

}



for(int i=1;i<5;i++)

{

&#x20;   if(sales\[i] < highestSale)

&#x20;   {

&#x20;       highestSale = sales\[i];

&#x20;   }

}



for(int i=0;i<=5;i++)

{

&#x20;   printf("%d ", monthlySales\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   stock\[i] = i \* 50;

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", stock\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   scanf("%d", orders\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   totalOrders += orders\[i];

}



for(int i=0;i<=5;i++)

{

&#x20;   employees\[i] = i \* 100;

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", employees\[i]);

}



### Debugging checklist

| Check                  | Status                                                                                                     |

| ---------------------- | ---------------------------------------------------------------------------------------------------------- |

| ☑ Syntax Errors        | \*\*Found\*\* (missing `;` after last `printf`)                                                                |

| ☑ Undeclared Variables | \*\*None\*\*                                                                                                   |

| ☑ Type Mismatches      | \*\*Found\*\* (`printf("%d", commission\[0])`, `printf("%s", feedback\[0])`)                                     |

| ☑ Function Call Errors | \*\*Found\*\* (`scanf("%d", orders\[i])`, `strcpy()` buffer issues, unsafe string assignments)                  |

| ☑ Scope Errors         | \*\*None\*\*                                                                                                   |

| ☑ Shadowing Issues     | \*\*None\*\*                                                                                                   |

| ☑ Linker Errors        | \*\*None\*\*                                                                                                   |

| ☑ Array Bounds Errors  | \*\*Found\*\* (`monthlySales\[5]`, `monthlySales\[i<=5]`, `employees\[i<=5]`, `ratings\[-1]`)                      |

| ☑ Pointer Errors       | \*\*Found\*\* (missing `\&` in `scanf`, invalid array assignment)                                               |

| ☑ File Handling Errors | \*\*None\*\*                                                                                                   |

| ☑ Runtime Errors       | \*\*Found\*\* (out-of-bounds access, negative index, buffer overflow)                                          |

| ☑ Logical Errors       | \*\*Found\*\* (wrong comparisons, incorrect accumulation logic not present but comparison errors exist)        |

| ☑ Wrong Formulas       | \*\*Found\*\* (integer division in average not present here but logic issue still exists in general structure) |

| ☑ Wrong Conditions     | \*\*Found\*\* (`if(revenue\[2] = 3000)` uses assignment instead of `==`)                                        |





## \#program 5.c



### variables

total;

highest;

lowest;

present;

totalResult;

totalSales;

highestSale;

average;

averageSales;

totalOrders;



### Arrays

int marks\[10];

int attendance\[10];

int fees\[5];

int result\[5];

int inventory\[5];

int stock\[5];

int ratings\[5];

int feedback\[5];

int scores\[5];

int temp\[5];

int sales\[5];

int monthlySales\[5];

int orders\[5];

int revenue\[5];

int backupRevenue\[5];

int employees\[5];

int expenses\[5];

int count\[5];

int numbers\[5];

char subject\[10];

char department\[20];

char product\[8];

char category\[15];

char city\[10];

char branch\[5];

char course\[8];

char college\[5];

### 

### Functions

printf()

scanf()

strcpy()

main()



### Loops

for(int i=0;i<10;i++)

{

&#x20;   total += marks\[i];

}



for(int i=1;i<10;i++)

{

&#x20;   if(marks\[i] < highest)

&#x20;   {

&#x20;       highest = marks\[i];

&#x20;   }

}



for(int i=1;i<10;i++)

{

&#x20;   if(marks\[i] > lowest)

&#x20;   {

&#x20;       lowest = marks\[i];

&#x20;   }

}



for(int i=0;i<10;i++)

{

&#x20;   attendance\[i] = 1;

}



for(int i=0;i<=10;i++)

{

&#x20;   present += attendance\[i];

}



for(int i=0;i<5;i++)

{

&#x20;   fees\[i] = i \* 10000;

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", fees\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   scanf("%d", result\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   totalResult += result\[i];

}



for(int i=0;i<5;i++)

{

&#x20;   fees\[i] = i \* 10000;

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", fees\[i]);

}



for(int i=0;i<=5;i++)

{

&#x20;   stock\[i] = i \* 100;

}



for(int i=0;i<5;i++)

{

&#x20;   printf("%d ", stock\[i]);

}



for(int i=0;i<5;i++)

{

&#x20;   temp\[i] = i;

}





### Debugging Checklist

| Check                  | Status                                                                                                                     |

| ---------------------- | -------------------------------------------------------------------------------------------------------------------------- |

| ☑ Syntax Errors        | \*\*None major found\*\* (code compiles after fixing minor issues like missing headers/format usage)                           |

| ☑ Undeclared Variables | \*\*Found\*\* (several variables used in loops like `result`, `totalResult` are not declared in provided code section context) |

| ☑ Type Mismatches      | \*\*Found\*\* (`printf("%d", average)`, `printf("%s", feedback\[0])`, float/int mismatches)                                     |

| ☑ Function Call Errors | \*\*Found\*\* (`scanf("%d", result\[i])`, `strcpy()` buffer risks, unsafe string assignment)                                    |

| ☑ Scope Errors         | \*\*None\*\*                                                                                                                   |

| ☑ Shadowing Issues     | \*\*None\*\*                                                                                                                   |

| ☑ Linker Errors        | \*\*None\*\*                                                                                                                   |

| ☑ Array Bounds Errors  | \*\*Found\*\* (`attendance\[10]`, `i<=10`, `ratings\[-1]`, `temp\[5]`, `inventory\[10]` style risks)                               |

| ☑ Pointer Errors       | \*\*Found\*\* (missing `\&` in `scanf`, array assignment like `scores = marks`)                                                 |

| ☑ File Handling Errors | \*\*None\*\*                                                                                                                   |

| ☑ Runtime Errors       | \*\*Found\*\* (out-of-bounds access, negative index, buffer overflow risks)                                                    |

| ☑ Logical Errors       | \*\*Found\*\* (highest/lowest logic swapped, wrong comparisons)                                                                |

| ☑ Wrong Formulas       | \*\*Found\*\* (`average = total / 10` integer division issue)                                                                  |

| ☑ Wrong Conditions     | \*\*Found\*\* (`if(inventory\[2] = 30)` uses assignment instead of comparison)                                                  |





















