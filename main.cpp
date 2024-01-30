#include <iostream>
using namespace std;
class Door {
private:
    bool isopen;
    bool islocked;
public:
    Door() : isopen(false), islocked(false) {}
 
    bool isdooropen() const {
        return isopen;
    }
};
int main() {
    cout << "Hello World" << endl;
    // You can create an instance of the Door class and use its methods here.
    return 0;
}
Change isdooropenand isdoorlocked function
