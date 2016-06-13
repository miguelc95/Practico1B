//
//  main.cpp
//  Practico1B
//
//  Created by Miguel Cuellar on 2/14/16.
//  Copyright © 2016 Miguel Cuellar. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n, b, h, m;
    string palabra;
    cin>>n;
    cin>>palabra;
    for (int ix=0; ix<n; ix++) {
        switch (palabra[ix]) {
            case 'B':
                b++;
                break;
                case 'H':
                h++;
                break;
                case 'M':
                m++;
                break;
            default:
                break;
        }
    }
    cout<<"B - "<<b<<"\n \n"<<"H - "<<h<<"\n \n"<<"M - "<<m<<endl;
    return 0;
}
