#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
int main() {
   
   int n;
   cin>>n;
   cpp_int fact = 1;
        for(int i = 1; i<=N; i++ ){
            fact *= i;
        }
   cout<<fact<<endl;

for(int row = 1; row<=n; row++) {
            int value = 65;
            for(int col = 1; col<=(2*n)-1; col++) {
                if(col >= 1 && col<=n-row) cout<<" ";
                else if(col >= n+1-row && col<=n+row-1){
                    cout<<to_string(value);
                    value++;
                } 
                else cout<<" ";
            }
            cout<<endl;
        }
}