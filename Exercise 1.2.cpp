#include <iostream>

using namespace std;

int main ()
{	//declaration
	int length, width, top, bottom, left, right, size, line, character, length_point, width_point;
	char space;
	
	cout << "QUESTION 1.2\n\nThe number of lines that can be printed on a paper depends on the paper size, the point size of each character in a line, whether lines are double - spaced or single - spaced, the top and bottom margin, and the left and right margins of the paper. Assume that all characters are of the same point size, and all lines are either single - spaced or double - spaced. Note that 1 inch = 72 points. Moreover, assume that the lines are printed along the width of the paper. For example, if the length of the paper is 11 inches and width is 8.5 inches, then the maximum length of a line is 8.5 inches. Write a program that calculates the number of characters in a line and the number of lines that can be printed on a paper based on the following input from the user: \n\n";
	
	//option
	cout << "a. The length and width, in inches, of the paper" << endl;
	cout << "b. The top, bottom, left, and right margins" << endl;
	cout << "c. The point size of a line" << endl;
	cout << "d. If the lines are double-spaced, then double the point size of each character" << endl;
	
	cout << endl;
	
	//input
	
	do //loop for repeating the prompt until user input +ve
	{
	cout << "Length of the paper: ";
	cin >> length;
		
		if (length <= 0) //avoid -ve input
			{
				cout << endl;  //gap between lines
				cout << "Error! Input must be more than 0" << endl; 
				cout << endl;
			}
	}
	while (length <= 0);
	
	do
	{
	cout << "Width of the paper: ";
	cin >> width;
		
		if (width <= 0)
			{
				cout << endl;
				cout << "Error! Input must be more than 0" << endl;
				cout << endl;
			}
	}
	while (width <= 0);
	
	do
	{
	cout << "Top margins: ";
	cin >> top;
	
		if (top <= 0)
			{
				cout << endl;
				cout << "Error! Input must be more than 0" << endl;
				cout << endl;
			}
	}
	while (top <= 0);
	
	do
	{
	cout << "Bottom margins: ";
	cin >> bottom;
	
		if (bottom < 0)
			{
				cout << endl;
				cout << "Error! Input must be more than 0" << endl;
				cout << endl;
			}
	}
	while (bottom < 0);
	
	do
	{
	cout << "Left margins: ";
	cin >> left;
	
		if (left < 0)
			{
				cout << endl;
				cout << "Error! Input must be 0 or more" << endl;
				cout << endl;
			}
	}
	while (left < 0);
	
	do
	{
	cout << "Right margins: ";
	cin >> right;
	
		if (right < 0)
			{
				cout << endl;
				cout << "Error! Input must be 0 or more" << endl;
				cout << endl;
			}
	}
	while (right < 0);
	
	do
	{
	cout << "Line point size: ";
	cin >> size;
	
		if (size <= 0)
			{
				cout << endl;
				cout << "Error! Input must be more than 0" << endl;
				cout << endl;
			}
	}
	while (size <= 0);
	
	cout << "Type of lines spaces (single-spaced 'S' / double-spaced 'D'): ";
	cin >> space;
	
	cout << endl;
	
	//case and process then output
	switch (space)
	{
	case 'S': case 's':
	
		length = length - top - bottom;
		width = width - left - right;
		length_point = length * 72;
		width_point = width * 72;
		line = length_point / (72 + size);
		character = width_point / 72;
		 
		cout << "Number of characters in a line: " << character << endl;
		cout << "Number of lines: " << line << endl;
		
		break; //terminate case
	
	case 'D': case 'd':
	
		length = length - top - bottom;	
		width = width - left - right;
		length_point = length * 72;
		width_point = width * 72;
		line = length_point / (144 + size);
		character = width_point / 144;
		 
		cout << "Number of characters in a line: " << character << endl;
		cout << "Number of lines: " << line << endl;
		
		break;
		
	default:
		//for invalid input on space input
		cout << endl << "Error! Invalid space. Type of space is case sensitive" << endl;
	}
	
	return 0;
}
