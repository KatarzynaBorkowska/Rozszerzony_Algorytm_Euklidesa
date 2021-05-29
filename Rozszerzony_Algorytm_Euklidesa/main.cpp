//
//  main.cpp
//  Rozszerzony_Algorytm_Euklidesa
//
//  Created by Kasia on 29/05/2021.
// 1359 495

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int a,b;
    cout << "Podaj a i b: ";
    cin >> a >> b;
    int q,s = 1, u = 0,t = 0,v = 1,pom;
    cout << "| a\t| b\t| q\t| s\t| u\t| t\t| v\t|\n";
    cout << "---------------------------------------------------------\n";
    while(a != 0)
    {
        q =floor(b/a);
        cout << "| " << a << "\t| " << b << "\t| " << q;
        pom = a;
        a = b - a * q;
        b = pom;
        
        pom = s;
        s = u - q * s;
        
        u = pom;
        cout << "\t| " << s << "\t| " << u;
        pom = t;
        t = v - q * t;
        
        v = pom;
        cout << "\t| " << t << "\t| " << v << "\t|\n";
    }
    cout << "d = " << b << endl;
    cout << "u = " << u << "\nv = " << v << endl;
    return 0;
}
