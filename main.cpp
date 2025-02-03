#include<bits/stdc++.h>
using namespace std;


// We have to count the number of digits in a number
int countDigit(int num){
    int count = 0;
    int ld = 0;
    while(num > 0){
        ld = num % 10;
        num = num / 10;
        count ++;
    }
    return count;
}

int cntDigit(int number){
    int counter = (int) (log10(number) + 1);
    return counter;
}


// We have to reverse a number
int reverse(int num){
    int rev = 0;
    int ld = 0;
    while(num > 0){
        ld = num % 10;
        num = num / 10;
        rev = (rev*10) + ld;
    }
    return rev;
}

// check whethe the number is armstrong or not
void armstrong(int num){
    int dup = num;
    int counter = (int) (log10(num) + 1);
    int rev = 0, ld = 0, sum = 0;
    while(num > 0){
        ld = num % 10;
        num = num / 10;
        sum = sum + pow(ld, counter);
    }
    
    (dup == sum) ? (cout << "This is armstrong number\n") : \
          (cout << "This is not armstrong number\n"); 
}

int main(int argc, char *argv[]){
    int number;
    
    cout << "Enter the value of number: ";
    cin >> number;
    
    // int rev = reverse(number);
    //int counter = countDigit(number);

    //cout << "The number of digits in the number: " << counter << endl;
    // cout << "The reverse number will be: " << rev << endl;
    armstrong(number);
    return 0;
}
