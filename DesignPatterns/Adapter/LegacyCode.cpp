#include <iostream>
#include "LegacyCode.h"
using namespace std;

LegacyRectangle :: LegacyRectangle(int len, int wid) : l(len), w(wid) {
    cout << "Legacy Constructor" << endl;
}

void LegacyRectangle :: LegDraw(){
    cout << "Legacy Draw" << endl;
}