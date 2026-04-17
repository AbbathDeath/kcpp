#include <iostream>
#include <string>
using namespace std;



int main() {
    string test1 = "Zadeklarowany string testowy";
    string test2 = "";
    string test3 = "!?.,!!";

    string:: size_type substring;
    string:: size_type substring2;


    //empty()
    cout << "empty():" << endl;
    cout << "Test 1: " << test1.empty() << endl;
    cout << "Test 2: " << test2.empty() << endl;

    cout << "=======" << endl;
    cout << "size(), length(): " << endl;
    cout << "Test1: " << "size: " << test1.size() << ", length: " << test1.length()<< endl;
    cout << "Test1: " << "size: " << test2.size() << ", length: " << test2.length()<< endl;

    cout << "=======" << endl;
    cout << "at(): " << endl;
    cout << "Test1: " << test1.at(2) << endl;

    try {
        cout << "Test2: " << test2.at(1) << endl;
    } catch (out_of_range& e) {
        cout << "Test2: Wyjscie za po zakres stringa " << e.what() << endl;
    }

    cout << "=======" << endl;
    cout << "Przed clear():" << endl;
    cout<< "Test1: " << test1 << endl;
    cout << "Po clear():" << endl;
    test1.clear();
    cout << "Test1: " << test1 << endl;
    test1 = "Zadeklarowany string testowy";


    cout << "=======" << endl;
    cout << "erase(): " << endl;
    cout << "Test1: " << test1.erase(1,5) << endl;

    cout << "=======" << endl;
    cout << "find():" << endl;
    substring = test1.find("string");
    substring2 = test2.find("string");
    cout << "Test1: " << substring << endl;

    if (substring2 != string::npos) {
        cout << "Test2: Znaleziono" << endl;
    } else {
        cout << "Test2: Nie znaleziono" << endl;
    }


    cout << "=======" << endl;
    cout << "swap(): " << endl;
    cout << "Przed swap()" << endl;
    cout << "Test1: " << test1 << endl;
    cout << "Test2: " << test2 << endl;
    cout << "Po swap()" << endl;
    test1.swap(test2);
    cout << "Test1: " << test1 << endl;
    cout << "Test2: " << test2 << endl;

    cout << "=======" << endl;
    cout << "substr():" << endl;
    string substr = test2.substr(9,6);
    cout << "Test2: " << substr << endl;

    cout << "=======" << endl;
    cout << "append()" << endl;
    test2.append(test3, 0, 3);
    cout << "Test2: " << test2 << endl;
    cout << "=======" << endl;


}
