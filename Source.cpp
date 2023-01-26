#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int answer = 0;
    for (int i = 0;i < s.length();i++) {
        switch (s[i]) {
        case 'I':
        {
            if (s[i + 1] == 'V'){
                answer += 4;
                i++;}
            else  if (s[i + 1] == 'X') {
                answer += 9;
                i++;}
            else answer += 1;
            break;
        }
        case 'L':
            answer += 50;
            break;
        case 'D':
            answer += 500;
            break;
        case 'V':
            answer += 5;
            break;
        case 'M':
            answer += 1000;
            break;
        case 'C':
        {
            if (s[i + 1] == 'D') {
                answer += 400;
                i++;}
            else  if (s[i + 1] == 'M') {
                answer += 900;
                i++;}
            else answer += 100;
            break;
        }
        case 'X':
        {
            if (s[i + 1] == 'L') {
                answer += 40;
                i++;}
            else  if (s[i + 1] == 'C') {
                answer += 90;
                i++;}
            else answer += 10;
            break;
        }
        default:
            break;}
    }
    return answer;
}
int main() {
    string s;
    cin >> s;
    int result = romanToInt(s);
    cout << result;
    return 0;
}
