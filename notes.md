### BusfareD102
##### How to convert $xxx to xxx?
###### atof(the start of string +1)
###### We can also use this method to cut off unwanted head or tail and convert it to number
### squareAndTriangularD107

### SquareAndTriangleD107.c
##### Why it failed?
###### In the test it succeed 16 times but keep failing one trial
###### It is because when I use pow(), floating point numbers are used, so there was floating point calculation problem
###### So sometimes simply use x*x when not necessary!

### KingMovementD110.c
##### How to convert a char to number?
###### We can use ASCII. For example, 'a' in ASCII is 97, and we want to convert it to 1, so we just perform 'a'-96
##### What is the algorithm?
###### Method 1: Calculate the MIN of x-distace and y-distance, and add it to the sum. It is because we want to perform diagonal operations first. Then we find out the difference between the two distances, then add it to sum.
###### Method 2: Thanks for giving inspiration, Timmy Lan. We can consider the two coordinates as a rectangle, and we try to fit the biggest square in. After it, we add the difference between the longer side of the rectangle and the length of the square to the sum.