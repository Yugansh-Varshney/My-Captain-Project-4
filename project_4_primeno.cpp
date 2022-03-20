#include <iostream>
using namespace std;

bool checkPrime(int n);

int main()
{
    int n, i;
    bool flag = false;

    cout<<"Enter a positive integer : "<<endl;
    cin>>n;

    for(i=2;i<=2/n;i++)
    {
        if(checkPrime(i)){
                if(checkPrime(n-i)){
                    cout<<n<<"="<<i<<"+"<<n-i<<endl;
                    flag=true;

                }
        }
    }
    if(!flag){
        cout<<n<<"Can't be expressed as sum of two prime numbers."<<endl;
    }
}

// check prime number
bool chrekPrime(int n){
    int i;
    bool isPrime=true;

    if(n==0 || n==1){
        isPrime=false;
    }
    else{
        for(i=2;i<=n/2; i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
    }
    return isPrime;
}
