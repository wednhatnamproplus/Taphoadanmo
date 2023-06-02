#include <bits/stdc++.h>


using namespace std;

double mu(double a, double b) {
    return pow(a, b);
}

int main() {
    double d, s;
    cout << "Nhap so can mu: " ; 
    cin >> d;
    cout << "Nhap mu cua " << d << " :";  
    cin >> s;
    
   
    cout << "Ket qua: " << mu(d, s) << endl;
    
    return 0;
}
