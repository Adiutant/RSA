#include <iostream>
#include "RSA.h"
using namespace std;
int main() {
    RSA rsa(3557,2579);
    string msg = "Porrige";
    string cypherText = rsa.createCyphertext(msg);
    string plainText = rsa.createPlaintext(cypherText);
    cout <<cypherText<<endl;
    cout<< plainText<<endl;
    return 0;
}
