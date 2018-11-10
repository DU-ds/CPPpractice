/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kenneth Collins
 *
 * Created on November 9, 2018, 4:55 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


double add(double num1, double num2, double sum){
    cout << "Enter the first number: ";
    cin  >> num1;
    cout << "Enter the second number: ";
    cin  >> num2;
    sum = num1 + num2;
    cout << num1 << " + " << num2 << " = " << sum << endl;
    return sum;
}
double mult(double num1, double num2, double product){
    cout << "Enter the first number: ";
    cin  >> num1;
    cout << "Enter the second number: ";
    cin  >> num2;
    product = num1 * num2;
    cout << num1 << " * " << num2 << " = " << product << endl;
    return product;
}
double subtract(double num1, double num2, double difference){
    cout << "Enter the first number: ";
    cin  >> num1;
    cout << "Enter the first number: ";
    cin  >> num2;
    difference = num1 - num2;
    cout << num1 << " - " << num2 << " = " << difference << endl;
}
double divide(double numerator, double denominator, double quotient){
    cout << "Enter the numerator: ";
    cin  >> numerator;
    cout << "Enter the denominator: ";
    cin  >> denominator;
    quotient = numerator / denominator;
    cout << numerator << "/" << denominator << " = " << quotient << endl;
}

bool exit(string yes_no)
{ //Note to self: consider rewriting using a switch case statement instead of if else

    string const YES = "Yes";
    string const yes = "yes";
    string const NO = "No";
    string const no = "no";
    string const emptyString = "";
    
    cout << "Ready to exit?: ";

    while(true){
        cin >> yes_no;
        if ((yes_no.compare(YES) == 0 ) || (yes_no.compare(yes) == 0 ) )
        {
            cout << "Okay, bye!";
            return true;
            break;
        
        }
        else if((yes_no.compare(NO) == 0) || (yes_no.compare(no) == 0) )
        {
            cout  << "Okay, Let's restart then :)" << endl;
            return false;
            break;
        }
        else if(yes_no.compare(emptyString) == 0)
        {
            cout << "Don't just hit enter! Type something :b" << endl;
        }
        else
        {
            cout  << "Unknown input. Please retype your answer.";
        }
    }
}

/*
 * 
 */
int main(int argc, char** argv) {
    
    double a,b,c;
    string uinput;
    bool Exit;
    while(Exit == false)
    {
        add(a,b,c);
    
        subtract(a,b,c);
    
        mult(a,b,c);
    
        divide(a,b,c);

        Exit = exit(uinput);
        
    }
    
    
    return 0;
}

