#include <string>
#include <iostream>
#include <vector>
#include <math.h>


using namespace std;


class Solution {
    public:
        vector<int> grayCode(int n) {
            vector<int> a;
            vector<int> b;
            if( n <= 0 ){
                a.push_back(0);
                return a;
            }
            if( n == 1 ){
                a.push_back(0);
                a.push_back(1);
                return a;
            }
            
            vector<int>::iterator iter;
            b = grayCode(n-1);
            a = b;

            for(int i=b.size(); i!=0; i--){
                a.push_back(b[i-1]+pow(2,n-1));
            }

            return a;
               
        }
};


int main(){

    Solution s;
    vector<int> result = s.grayCode(5);
    for( vector<int>::iterator iter = result.begin(); iter!= result.end(); iter++ ){
        cout << *iter << endl;
    }

    return 0;
}
