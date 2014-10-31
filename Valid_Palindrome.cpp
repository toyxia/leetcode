#include <string>
#include <iostream>

using namespace std;


class Solution {
public:
    bool isPalindrome(string s) {
        string::iterator head=s.begin();
        string::iterator tail=s.end();
        while( head < tail ){
            if (!valid_char(*head)){
                head++;
                continue;
            }
            if( !valid_char(*tail) ){
                tail--;
                continue;
            }
            cout << *head << '\t' << *tail << endl;
            if(!equal_char(*head, *tail)){
                return false;
            }
            head++;
            tail--;

        }
        return true;
    }
private:
    bool valid_char( char c ){
        if ( (c >= 'a' && c <= 'z') || ( c >='A' && c <= 'Z' ) || ( c>= '0' && c <= '9') ){
            return true;
        }
        return false;
    }

    bool equal_char( char a, char b ){
        if( a == b ) {
            return true;
        }
        if( a  > '9' && b >'9') {
            if( ((a-b) == ('A'-'a')) || ((a-b) == ('a' - 'A')) ) {
                return true;
            }
        }
        return false;
    }
};


int main(){
    Solution s;
    //cout << s.isPalindrome("A man, a plan, a canal: Panama") << endl;
    //cout << s.isPalindrome("A an, a plan, a canal: Panama") << endl;
    //cout << s.isPalindrome("1a2") << endl;
    cout << s.isPalindrome("ab2a") << endl;
    
    return 0;
}
