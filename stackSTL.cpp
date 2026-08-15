#include <iostream>
#include <stack> 
using namespace std;

int main() {
    stack <int> s;

    // Push elements onto stack
    s.push(10);
    s.push(20);

    // pop element from stack
    s.pop();

    // Get top element
    cout << s.top() << endl;

    // Check if stack is empty
    cout << s.empty() << endl;

    // Get size of stack
    cout << s.size();
    return 0;
}