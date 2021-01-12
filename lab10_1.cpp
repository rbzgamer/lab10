// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    string enter1,enter2,enter3;
    int grade = rand()%9;
    cout << "Press Enter 3 times to reveal your future.";
    getline(cin,enter1);
    getline(cin,enter2);
    getline(cin,enter3);
    cout << "You will get ";
    if(grade == 0) cout << "A";
    else if(grade == 1) cout << "B+";
    else if(grade == 2) cout << "B";
    else if(grade == 3) cout << "C+"; 
    else if(grade == 4) cout << "C";
    else if(grade == 5) cout << "D+";
    else if(grade == 6) cout << "D";
    else if(grade == 7) cout << "F";
    else cout << "W";
    cout << " in this 261102.";
}