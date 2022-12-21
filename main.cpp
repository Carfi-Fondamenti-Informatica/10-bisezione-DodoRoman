#include <iostream>
#include <cmath>
using namespace std;

double funzione(double y){
    float risultato=pow(y,2)*cos(y)+1;
    return risultato ;
}

int main() {
    double a=0,b=0,err=0,x=0;
    do {
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
    }while ((funzione(a) * funzione(b)) >= 0);
    if (funzione(a) < funzione(b)){
        b=a+b;
        a=b-a;
        b=b-a;
    }
    do {
        x=(a+b)/2;

        if (funzione(x)==0){
            break;
        }

        if ((funzione(x))<0){
            b=x;
        }else {
            a=x;
        }


        err = abs(((b-a)/2));
    }while(err >= exp(-6));

    int c=x*10000;
    double d=(float)c/10000;
    cout << d << endl;
    return 0;
}
