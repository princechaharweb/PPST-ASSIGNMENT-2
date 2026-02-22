// check whether a number is palindrome or not
#include <iostream>
using namespace std ;
int main (){
    int n, temp, rev = 0, rem ;
    cout << "Enter a number: " ;
    cin >> n ;
    temp = n ;
    while(temp != 0){
        rem = temp % 10 ;
        rev = rev * 10 + rem ;
        temp = temp / 10 ;
    }
    if(rev == n)
        cout << n << " is a palindrome number" ;
    else
        cout << n << " is not a palindrome number" ;
    return 0 ;

}