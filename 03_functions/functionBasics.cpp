#include <iostream>
using namespace std;

// function to add 2 numbers
int sum(int num1, int num2)
{
    return num1 + num2;
}

// call by value example
int examplePassByValue(int num1)
{
    num1 = num1 + 1;

    return num1;
}

// finding maximum of three numbers
int maxOfThree(int a, int b, int c)
{

    // int max = a;
 
    // if (b > max)
    // {
    //     return b;
    // }

    // if (c > max)
    // {
    //     return c;
    // }

    if (a > b && a > c)
    {
        return a;
    }

    if (b > a && b > c)
    {
        return b;
    }

    else
    {
        return c;
    }
}

// printing 1 to n 
void printCount(int n) {
    for (int i = 1; i <= n; i++)
    {
        cout << i  << " ";
    }
    
}

// functon to grade 
char getGrade(int marks) {

    if (marks < 33)
    {
        return 'F';
    }
    

    if (marks >=  90)
    {
        return 'A';
    }
    else if (marks >= 80)
    {
        return 'B';
    }

    else if (marks >= 70)
    {
        return 'C';
    }

    else if (marks >= 70)
    {
        return 'C';
    }
    else if (marks >=  60) 
    {
        return 'D';
    }
    
    else {
        return 'E';
    }   

}


// sum of n numbers
int getSum(int n) {
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
    
}

// sum of n even numbers
int getEvenSum(int n) {

    int sum = 0;

    //  for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum += i;
    //     }
        
    // }

    for (int i = 2; i <= n; i = i + 2)
    {
        sum = sum + i;
        
    }

    return sum;
}

int main()
{
    int num1 = 2;
    int num2 = 3;

    /*
    ----------------------------     pass by value ----------------------------
    whenever we call a function and give the parameters the parametes in the functiona are assigned with the copy of the values which are passed during the function call from main function . these values are again stored in different memory locations with the name which is assgned the function parameter and thus any change to those value made in the function body will change those parameters only which are passed to the fundtion and will have no change in the main functions space . this concept is known as pass by value. The examplePassbyValue function describes this concept.
    */

    // cout << "examplePassByValue() called" << examplePassByValue(num1) << endl;
    // cout << "main function num1 value :" << num1 << endl; // here we can see that the change made in the function did not had any change in the value of num1 in the main function because when it was passed a copy of num1 was stored at different memory location in the function.

    // cout << sum(num1, num2) << endl;

    // cout << maxOfThree(5, 1, 8) << endl;
    // printCount(5);

    // int marks;
    // cout << "Enter the Marks obtained to get the grade: " << endl;
    // cin >> marks;

    // char c = getGrade(marks);
    // cout << "The grade for marks " << marks << " is " << c <<endl;

    // cout << getSum(10) << endl;

    cout << getEvenSum(5) << endl;

    return 0;
}