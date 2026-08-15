#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

bool isOperator(const string &tok) {
    return (tok == "+" || tok == "-" || tok == "*" || tok == "/");
}

int applyOp(int a, int b, const string &op, bool &ok) {
    ok = true;
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") {
        if (b == 0) { ok = false; return 0; }
        return a / b;
    }
    ok = false;
    return 0;
}

// Evaluate postfix
bool evaluatePostfixTokens(const vector<string> &tokens, int &out) {
    stack<int> st;
    for (const auto &tok : tokens) {
        if (tok.empty()) continue;

        if (isOperator(tok)) {
            // need two operands
            if (st.size() < 2) {
                cerr << "Error: not enough operands for operator '" << tok << "'\n";
                return false;
            }
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            bool ok;
            int res = applyOp(a, b, tok, ok);
            if (!ok) {
                cerr << "Error: invalid operation (maybe division by zero or unknown op)\n";
                return false;
            }
            st.push(res);
        } else {
            // parse integer
            try {
                int val = stoi(tok);
                st.push(val);
            } catch (...) {
                cerr << "Error: invalid token '" << tok << "'. Use integers and operators + - * /.\n";
                return false;
            }
        }
    }

    if (st.size() != 1) {
        cerr << "Error: expression invalid; leftover items in stack.\n";
        return false;
    }

    out = st.top();
    return true;
}

// Evaluate prefix 
bool evaluatePrefixTokens(const vector<string> &tokens, int &out) {
    stack<int> st;
    // traverse tokens right-to-left
    for (int i = (int)tokens.size() - 1; i >= 0; --i) {
        const string &tok = tokens[i];
        if (tok.empty()) continue;

        if (isOperator(tok)) {
            if (st.size() < 2) {
                cerr << "Error: not enough operands for operator '" << tok << "'\n";
                return false;
            }
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();
            bool ok;
            int res = applyOp(a, b, tok, ok);
            if (!ok) {
                cerr << "Error: invalid operation (maybe division by zero or unknown op)\n";
                return false;
            }
            st.push(res);
        } else {
            try {
                int val = stoi(tok);
                st.push(val);
            } catch (...) {
                cerr << "Error: invalid token '" << tok << "'. Use integers and operators + - * /.\n";
                return false;
            }
        }
    }

    if (st.size() != 1) {
        cerr << "Error: expression invalid; leftover items in stack.\n";
        return false;
    }

    out = st.top();
    return true;
}

vector<string> splitTokens(const string &line) {
    vector<string> toks;
    istringstream iss(line);
    string token;
    while (iss >> token) toks.push_back(token);
    return toks;
}

int main() {
    cout << "POSTFIX EVALUATION (space-separated tokens). Example: 2 3 * 5 4 * +\n";
    cout << "Enter postfix expression:\n";
    string line;
    if (!std::getline(cin, line)) return 0;
    auto tokens = splitTokens(line);
    int result;
    if (evaluatePostfixTokens(tokens, result)) {
        cout << "Postfix Result = " << result << "\n";
    } else {
        cout << "Postfix evaluation failed.\n";
    }

    cout << "\nPREFIX EVALUATION (space-separated tokens). Example: + * 2 3 * 5 4\n";
    cout << "Enter prefix expression:\n";
    if (!std::getline(cin, line)) return 0;
    tokens = splitTokens(line);
    if (evaluatePrefixTokens(tokens, result)) {
        cout << "Prefix Result = " << result << "\n";
    } else {
        cout << "Prefix evaluation failed.\n";
    }

    return 0;
}
