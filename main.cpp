#include <iostream>
using namespace std;

int kthFactor(int n, int k) {
       for( int i =1, j = 0; i<=n; ++i){
           if(n % i == 0)
               ++j;
           if(j == k)
               return i;
       }
       return -1;
   }

int main(int argc, const char * argv[]) {
    cout<<kthFactor(12, 3)<<endl;
    return 0;
}
