#include<iostream>
using namespace std;
class widget {
    int id;
    static int count;
    public:
    widget() {
        id = ++count; cout << "created w" << id << endl;
    }
    ~widget() {
        --count; cout << "destroyed w" << id << endl;
    }
    static int alive() { return count; }
};
int widget::count = 0;
int main() {
    cout << "alive: " << widget::alive() << endl;
    widget w1;
    cout << "alive: " << widget::alive() << endl;
    {
        widget w2, w3;
        cout << "alive: " << widget::alive() << endl;
    }
    cout << "alive: " << widget::alive() << endl;
    return 0;
}
