#include <iostream>
using namespace std;

int main()
{

    // Given a number n, check whether it is even or odd. Return true for even and false for odd.

    // Way--------------------------1.
    // int n;
    // cin>>n;
    // if(n%2!=0){
    //     cout<<"Odd"<<endl;
    // }
    // else cout<<"even"<<endl;




    // Way---------------------------2.
    //  int n;
    // cin>>n;
    // if(n%2==0){
    //     cout<<"Even"<<endl;
    // }
    // else cout<<"Odd"<<endl;

    //  The snippet is incomplete and vulnerable to crashing or incorrect behavior if a user types something other than a number.
    //  No Input Validation: If a user enters non-numeric data (like a letter or symbol), cin >> n will fail. From C++11 onwards, a failed extraction sets n to 0, which would incorrectly print "Even" instead of handling the error.





// Way--------------------------------3.
    int n;
    cout << "Enter an integer: ";
    // Check if the input is a valid integer
    if (cin >> n) {
        if (n % 2 == 0) {
            cout << "Even" << endl;
        } else {
            cout << "Odd" << endl;
        }
    } else {
        cout << "Invalid input! Please enter a valid integer." << endl;
    }

    // The statement if (cin >> n) serves a dual purpose:
    // 1.It attempts to read data from the terminal and store it into the variable n.
    // 2.It evaluates whether the stream extraction was successful.
    // But, It cannnot handle the large values.


    return 0;
}

    // Way-------------------------4.
    //To handle extremely large numbers that exceed standard integer limits, store the input as a std::string and inspect only the very last digit.
// 🛠️ C++ Code for Large Numbers (Using Strings).