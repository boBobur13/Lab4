#include <iostream>
using namespace std;

int main() {
    int num;
    int count=0;
    cin>>num;
    for(int i=1; i<=num; i++){
    if (num%i==0){
      count ++;
    }
    }
    if (count==2){
      cout<<" Prime\n";
    }else{
      cout<<" Not prime\n";
    }

    return 0;
}
