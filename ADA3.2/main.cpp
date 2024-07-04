#include <stdio.h>
#include <iostream>
using namespace std;

int cycleSize(int x) {
    int cycle = 0;

    while (x != 1) {
        if (x % 2 == 0) { //if even
            x = x / 2;
        } else { //if odd
            x = x * 3 + 1;
        }
        ++cycle;
    }
    return cycle;
}

int maxCycleSizeBetween(int a, int b) {
    if (a > b) { //if b > a, swap them
        int temp = a;
        a = b;
        b = temp;
    }
    int maxCycle = 0;
    
    for (; a <= b; a++) {
        int thisCycleSize = cycleSize(a);
        if (thisCycleSize > maxCycle) {
            maxCycle = thisCycleSize;
        }
    }
    return maxCycle;
}

int main() {
    int a, b; //input vars
    cout<<"ADA 3.2: El problema 3n + 1"<<endl;
	cout<<"Proporciona un par de enteros"<<endl;
    while (scanf("%d %d", &a, &b) != EOF) {
		if(a < 0 || b < 0){
			cout<<"Alguno de los valores ingresados no es un entero positivo"<<endl;
			return 0;
		}else{
			printf("%d %d %d\n", a, b, maxCycleSizeBetween(a, b));
		}
	}
    return 0;
}