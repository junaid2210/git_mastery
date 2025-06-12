#include <iostream>
using namespace std;

class abc{
    public:
    int sum(int x){
        if(x == 1){
            return 1;
        }
        return x + sum(x-1);
    }
};

int main(){
    int n;
    int add;
    abc ob;

    cout<<"The sum of all number from 1 to n numbers :" << endl;
    cout<<"Enter the value of n :" << endl;

    cin >> n;
    add = ob.sum(n);

    cout<<"The sum of all the numbers from 1 to " << n << " is : " << add << endl;
}