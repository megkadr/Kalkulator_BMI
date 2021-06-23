#include <iostream>
#include <stack>
#include <vector>
using namespace std;
int main() {
    double w, bmi = 0;
    float m;
    unsigned short int t;
    string imie;
    cin >> t;
    vector < string > s1;
    vector < string > s2;
    vector < string > s3;
    while (t--) {
        cin >> imie >> m >> w;
        bmi = (m / (w * w)) * 10000;
        if (bmi < 18.5)
        {
            s1.push_back(imie);
        }
        else if (bmi > 18.5 && bmi < 25)
        {
            s2.push_back(imie);
        }
        else
        {
            s3.push_back(imie);
        }
    }
    cout << "niedowaga" << endl;
    for (int i = 0; i < s1.size(); i++) {
        cout << s1[i] << endl;
    }
    cout << endl << endl;
    cout << "wartosc prawidlowa" << endl;
    for (int i = 0; i < s2.size(); i++) {
        cout << s2[i] << endl;
    }
    cout << endl << endl;
    cout << "nadwaga" << endl;
    for (int i = 0; i < s3.size(); i++) {
        cout << s3[i] << endl;
    }
}