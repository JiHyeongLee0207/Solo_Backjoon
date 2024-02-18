#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    double output = pow(0.5, n);
    printf("%.*f", n, output);
}