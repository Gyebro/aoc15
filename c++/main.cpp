#include <iostream>
#include "md5.h"

using namespace std;

/*** DAY 4 ***/

const string day04_input = "ckczppom";

void day04(const string secret) {
    size_t i = 1;
    while(true) {
        string hash = md5(secret+to_string(i));
        if (hash.substr(0,5) == "00000") {
            cout << i << ", hash of " << secret+to_string(i) << " -> " << hash << endl;
            break;
        }
        i++;
    }
    i=1;
    while(true) {
        string hash = md5(secret+to_string(i));
        if (hash.substr(0,6) == "000000") {
            cout << i << ", hash of " << secret+to_string(i) << " -> " << hash << endl;
            break;
        }
        i++;
    }
}

int main() {

    day04(day04_input);
    return 0;
}