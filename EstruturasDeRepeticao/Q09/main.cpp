#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    while(num <= 50){
        if(num % 2 != 0){
            cout << num <<" " << endl;
            num += 1;
        }else{
            num += 1;
        }
    }

    return 0;
}
