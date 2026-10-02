
#include <iostream>
using namespace std;

int main()
{

        // #------------Conditional Statements.
        // ---------if-else.
        // EG.1.
        //   int n = 45;//if n=-45 , nothing will print in Terminal.
        //   if(n>=0){
        //     cout <<"n is positive\n";
        //   }

        // EG.2.
        //      int n = -45;
        //      if(n>=0){
        //         cout << "n is positive\n";
        //     } else { // We use it for reverse of it.
        // cout<<"n is negative\n";
        //     }

        // EG.3.
        // int age;
        // cout<<"enter age:";
        // cin >> age;
        //     if(age>=18){
        // cout<<"You can vote\n";
        //     } else{
        // cout <<"You can't vote\n";
        //  }

        // EG.4.
        // int n=8;
        // cout<<"Enter the number:";
        // cin>>n;
        //     if(n%2==0){
        // cout<<"It is even\n";
        //     } else{
        // cout<<"It is not even\n";
        //     }

        // ------if-else if-else.
        // int marks;
        // cout<<"Enter marks:";
        // cin>>marks;
        //      if(marks>=90){
        //         cout<<"Grade:A\n";
        //      }
        //      else if(marks>=80 && marks<90){
        //         cout<<"Grade:B\n";
        //      }
        //         else{
        //         cout<<"Grade:C\n";
        //         }

        // Question.
        // char ch;
        // cout<<"Enter chartacter:";
        // cin>>ch;
        //     if(ch>='a' && ch<='z'){
        //         cout<<"Lower Case\n";}
        //         else{
        //             cout<<"Upper Case\n";
        //         }
        //    OR
        // It can be compared with number.[a=97,b=98... & A=65,b=66....(65-90)]
        // We can't compare one data type to another but we compare character with interger because it can store in memory in the form of interger(ASCII value).
        // char ch;
        // cout << "Enter Character:";
        // cin >> ch;
        //     if(ch>=65 && ch<=90){ // (IMPLICIT CONVERSION EG.)
        //         cout<<"Uppercase\n";
        //     } else{
        //         cout<<"Lowercase\n";
        // }

        // #---------------Ternary Statement.
        // int n;
        // cout <<"Enter number:";
        // cin>>n;
        // cout << (n>=0 ?"positive" : "negative") <<endl;

        // #--------------------Loops.
        //  -------While loop.
        //  Questions. Print numbers 1 to 5.
        // int count = 1; // STATEMENT OF INITIALIZATION.
        //     while(count <=5){ // STATEMENT PF CONDITION.
        //     cout << count << "  ";
        //      count++;} // STAMENT OF UPDATION.
        //      cout << endl;

        //  EG.1.
        // int n = 20;
        // int count = 1;
        //     while(count <=n){
        //     cout << count << "  ";
        //      count++;} // If we cannot give the condition, then it will be infinite condition.
        //      cout << endl;

        // --------for loop.
        // int n = 10;
        //        for(int i=1; i<=n; i = i+2){ //i=i+2---add two values at there.
        // cout << i << "   ";
        //        }
        // cout <<endl;

        // EG.1
        // int n= 10;
        // int sum = 0;
        // for(int i = 1;i<=n;i=i+2){
        //    sum += i;
        // }
        // cout << "sum = " << sum <<endl;
        //.      or
        // int n = 20;
        // int sum = 0;
        // int i = 1;
        // while(i<=n){
        //     sum +=i;
        //     i++;
        // }
        //     cout<<sum<<endl;

        // -----Using Break.
        // int n=40;
        // int sum = 0;
        // for( int i=1;i<=n;i++){
        // sum += i;
        // if(i==5){
        //     break;
        // }
        // }
        // cout<<"Sum = " <<sum<<endl;

        // int n = 4;
        // int i = 1;
        // int sum =0;
        // while(i<=n){
        //     sum +=1;
        //     i++;
        // }
        // cout << sum <<endl;

        // Sum of all odd number from 1 to n.
        // int n = 50;
        // int sum = 0;
        // for(int i = 1;i<=n;i=i+2){
        // sum +=i;
        // }
        // cout<<"Sum:"<<sum<<endl;

        // OR
        //         int n = 50;
        //         int oddSum = 0;
        //     for(int i=1;i<=n;i++){
        //         if(i%2!=0){
        //             oddSum +=i;
        //         }
        //     }
        // cout << "odd sum = "<<oddSum<<endl;

        // -------for even number.
        // int n = 50;
        // int evenSum = 0;
        // for(int i=1;i<=n;i++){
        //     if(i%2==0){
        //         evenSum +=i;

        //     }
        // }
        // cout <<"evenSum = "<<evenSum<<endl;

        // ----by using while loop.
        // int n = 50;
        // int oddSum = 0;
        // int i = 1;
        // while(i<=n){
        //             oddSum +=i;
        //     i=i+2;
        // }
        // cout<<oddSum<<endl;

        // ---------do whiel loop.
        // EG.
        // int n = 20;
        // int i = 1;
        // do{
        //         cout<<i<<" ";
        //         i++;
        // }while(i<=n);
        // cout<<endl;

        // -----Question.
        // int n = 71;
        // bool isPrime = true;

        // for (int i=2;i<=n-2;i++){
        //         if(n%i==0){
        //                 isPrime = false;
        //                 break;
        //         }
        // }
        // if(isPrime == true){
        //         cout <<"prime no.\n";}
        //         else{
        //                 cout <<"non-prime no.\n";
        //         }
        //            OR
        //  int n = 41;
        //  bool isPrime = true;

        //  for(int i=2;i*i<=n;i++){
        //         if(n%i==0){
        //                 isPrime=false;
        //                 break;
        //         }
        //  }
        // if(isPrime == true){
        //         cout<<"Prime"<<endl;
        // } else{
        //         cout<<"Not Prime"<<endl;
        // }

        // -----------------Nested Loop.
        //   *,covers the row and n, covers the column.
        // for(int i =1;i<=4;i++){
        //         cout<<"*****"<<endl;
        // }

        // for 10 stars print in single line.
        // int x = 10;
        // for(int i = 1;i<=x;i++){
        //         cout<<"*";
        // }
        // cout << endl;

        //
        // int m = 4; //Shows lines.
        // for(int i =1;i<=m;i++){
        // int n =10; //Shows stars.
        // for(int j = 1;j<=n;j++)
        // {
        //         cout<<"*";
        // }
        // cout <<endl;}

        // ------------HW.
        // Question. Sum of all numbers from 1 to N which are divisible by 3.

        // int n = 10;
        // int sum = 0;
        // for (int i = 1; i <= n; i++)
        // {
        //         if (i % 3 == 0)
        //         {

        //                 sum += i;
        //         }
        // }
        // cout << sum;
        //                OR
        // int n = 10;
        // int i = 1;
        // int sum = 0;  // It should be at outer not inside.
        // while (i <= n)
        // {
        //         if (i % 3 == 0)
        //         {

        //                 sum += i;
        //         }
        //         i++;
        // }

        // cout << sum;

        // Question. Print the factorial of a number N.

        // int n = 5;
        // int factorial = 1;
        // for (int i = 1; i <= n; i++)
        // {
        //         factorial = factorial * i;
        // }

        // cout << factorial << endl;

        // int n = 5;
        // int factorial = 1;
        // int i = 1;
        // while (i <= n)
        // {
        //         factorial = factorial * i;
        //         i++;
        // }

        // cout << factorial << endl;

        return 0;
}
