//Task 2. Develop a calculator program that performs basic arithmetic
// operations such as addition, subtraction, multiplication, and
// division. Allow the user to input two numbers and choose an
// operation to perform.
#include<iostream>
using namespace std;
int main(){
    float first_number, second_number;
    int choice;
    cout << "1. Addition " << endl;
    cout << "2. Subtraction " << endl;
    cout << "3. Multiplication " << endl;
    cout << "4. Division " << endl;
    cout << "Enter the choice(1-4) :- ";
    cin >> choice;
    cout << "Enter the first number :- ";
    cin >> first_number;
    cout << "Enter the second number :- ";
    cin >> second_number;
    if(choice == 1){
        cout << "Result :- " << first_number + second_number << endl;
    }else if(choice == 2){
        cout << "Result :- " << first_number - second_number << endl;
    }else if(choice == 3){
        cout << "Result :- " << first_number * second_number << endl;
    }else if(choice == 4){
        if(second_number!=0){
            cout << "Result :- " << first_number / second_number << endl;
        }else{
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }else{
        cout << 'Error: Invalid operation.' << endl;
    }
    return 0;
}