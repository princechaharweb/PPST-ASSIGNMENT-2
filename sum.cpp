// sum of series 1/1 + 1/2 + 1/3 + .... + 1/n
#include <iostream>
using namespace std ;   
int main (){
    int n, i ;
    float sum = 0.0 ;
    cout << "Enter a number: " ;
    cin >> n ;
    for(i = 1; i <= n; i++){
        sum = sum + (float)1/i ;
    }
    cout << "Sum of series is " << sum ;
    return 0 ;

}