# 42_Piscine_Shell00
  
This project contains solutions for Rush00 from the C Piscine @ 42. The main goal is to work together in a team to create a program that draws rectangles on the terminal. Different characters are used to make the rectangle's borders, and spaces fill the inside.  
  
Project Overview  
  
The Rush00 project is a timed group exercise aimed at   improving collaboration and reinforcing essential programming skills in C, including  working with loops, functions, and conditional statements. The project also emphasizes handling inputs and organizing code structure in a  clean and modular way.  
     
Exercises  
  
- Exercise 00: rush00  
  
In this exercise, the task is to create a program that generates a rectangle using the characters o, |, and - for the borders and corners. The  function rush(int x, int y) is used, where x represents the width and y represents the height of the rectangle.  
  
Learnings:  
  
Handling 2D shapes and characters in C.    
Basic use of loops and conditions to control the structure  of output.  
  
- Exercise 01: rush01    
Similar to rush00, but the corners are marked with  characters /, \, and * instead of o, |, and -. The logic for generating the rectangle   remains mostly the same, but the visual design changes.    
   
Learnings:    
   
Modifying existing code to achieve a different result.  
Practice with loops and conditionals.    
  
- Exercise 02: rush02  
In this task, we generate a rectangle with borders consisting of the characters A, B, and C. The rectangle's top and bottom rows start with 'A' and end with 'C', while the side walls are made of 'B'.  
  
Learnings:  
  
More complex string manipulation.  
Understanding edge cases for small input dimensions.    
  
- Exercise 03: rush03  
  
Here, we create another variation of the rectangle, using similar characters as rush02 but with a slight difference in the design of borders and corners.  
  
Learnings:  
  
Adapting code to a variety of different specifications.  
    
- Exercise 04: rush04  
  
This final exercise follows the same basic structure as the previous ones but introduces a new set of characters and requires handling more intricate conditions to differentiate the various parts of the rectangle.
  
Learnings:  
  
Advanced pattern generation using loops.  
Improved modular design and code reusability.  
   
# File Structure  
   
This project consists of the following files:  
  
main.c  
Contains test cases for the rush function. It calls rush with various x (width) and y (height) values to display rectangles of different sizes.  
  
rush00.c  
Implements the rush function, which draws a rectangle using the characters 'o', '-', and '|' for the edges and spaces for the interior. 
  
rush03.c  
Another version of the rush function, which draws rectangles using the characters 'A', 'B', and 'C' for the edges.  
  
ft_putchar.c  
A helper function to print individual characters to the output, used in both rush00 and rush03.  
  
Each rush version creates different rectangle designs based on the given dimensions.  
  
Key Concepts Learned   
  
Team Collaboration:   
  
Working efficiently as part of a group, dividing tasks, and ensuring everyone understands the project.
Function Design: Structuring programs with clear, reusable functions.  
  
Terminal Output:  
  
Managing formatted outputs in the terminal using loops and  conditionals.  
Edge Case Handling: Accounting for special cases such as very small or very large rectangle dimensions.  
The Rush00 project provides an excellent foundation for tackling more complex challenges in C, especially in the context of teamwork and adhering to strict deadlines.  
