<a name="br1"></a> 

**Computer Engineering Department**

**TED University**

**CMPE 252 C Programming, Spring 2023**

**HOMEWORK 1**

**Q1 ( 30 points)**

In this question you will calculate the total score of a football team. There are three states in total and they are Win (W) which gives 3 points, In a Draw (D), which gives 1 point and Lost (L) which gives no points.

**Getting to know input file:**

A sample input file (**team1.txt**) is given as follows:

5 WWLDDD

10 WWLLDDLL

3 LLDW

Each line contains team id and results of matches. There is only one white space between team id and results of matches. You should calculate the total points for each team.


Example Input and Output :

> Enter txt file name:

> *team1.txt*

> There are 3 teams in total.

> Team 5: 9

> Team 10: 8

> Team 3: 4

**Q2 ( 30 points)**

You have the following formula for the non-negative numbers:

Xn = Xn-1 * b + (-b + sqrt(b^2-4ac))/2a

X0 = 10. You should read the number a, b, c from the user and they are float.

Also, user enters range for x and you should print all x values within this range. You should print **two** digits after decimal point for the result of the above formula.


Example Input and Output:

> Enter value of a:

> *4*

> Enter value of b:

> *5*

> Enter value of c:

> *1*

> Enter minimum value of x\_n:

> *3*

> Enter maximum value of x\_n:

> *6*

> x\_3: 1242.25

> x\_4: 6211.00

> x\_5: 31054.75

> x\_6: 155273.5
> 

**Q3 ( 40 Points)**

You would like to find the area under the curve y = f(x) between the lines x = a and x = b . One way to approximate this area is to use line segments as approximations of small pieces of the curve and then to sum the areas of trapezoids created by drawing perpendiculars from the line segment endpoints to the x-axis, as shown in Figure 1. We will assume that f (x) is nonnegative over the interval [a , b]. The trapezoidal rule approximates this area T as

T = h/2 * (f(a) + f(b) + 2 Σ (i = 1 to n-1) f(xi))

for n subintervals of length h:

h = (b-a)/n

You should calculate the value of T for the function: <b>x<sup>c</sup> + 2d</b>, where c and d are integer user inputs. You should print **two** digits after decimal point for the value of T.

Example Input and Output:

> Enter value of a:

> *1*

> Enter value of b:

> *9*

Enter value of n:

> *4*

> Enter value of c:

> *1*

> Enter value of d:

> *2*

> T: 54.00

