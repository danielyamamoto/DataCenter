#include <iostream>
#include "DataCenter.h"

using namespace std;

int main() {
    DataCenter* dc = new DataCenter(5, 5);
    cout << dc->toString() << endl;
    cout << "TOTAL RAM: " << dc->computeTotalRam() << "GB" << endl;
    return 0;
}
