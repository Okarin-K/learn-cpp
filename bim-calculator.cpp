#include <iostream>
using namespace std;

double bimCalculator(int weight, int height) {
    double transformHeight = height / 100.0;
        
    return weight / (transformHeight*transformHeight);    
}

int diagnoseBim(int age, double bim) {
    if(age < 50) {
        if(bim < 18.5) {
            cout << "やせ型です" << endl;
        } else if(bim < 25) {
            cout << "標準です" << endl;
        } else if(bim < 30) {
            cout << "肥満です" << endl;
        } else {
            cout << "高度の肥満です" << endl;
        }
    } else if(age < 65) {
        if(bim < 20) {
            cout << "やせ型です" << endl;
        } else if(bim < 25) {
            cout << "標準です" << endl;
        } else if(bim < 30) {
            cout << "肥満です" << endl;
        } else {
            cout << "高度の肥満です" << endl;
        }
    } else {
        if(bim < 21.5) {
            cout << "やせ型です" << endl;
        } else if(bim < 25) {
            cout << "標準です" << endl;
        } else if(bim < 30) {
            cout << "肥満です" << endl;
        } else {
            cout << "高度の肥満です" << endl;
        }
    }

    cout << "あなたのBIMは " << bim << " です！" << endl;

    return 0;
}

int main() {
    int age, weight, height;
                
    cout << "あなたの年齢は? ";
    cin >> age;

    cout << "体重は? ";
    cin >> weight;

    cout << "身長は? ";
    cin >> height;

    cout << endl;

    double bim = bimCalculator(weight, height);

    diagnoseBim(age, bim);
}

