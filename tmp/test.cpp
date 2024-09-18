#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

class ListVector {
public:
    ListVector(std::initializer_list<int> lists) {
        for (auto vt : lists) {
            vec.push_back(vt);
        }
    }
    void printVector() {
        for (auto vt : vec) {
            std::cout<<vt<<std::endl;
        }
    }
private:
    std::vector<int> vec;
};
template<typename T1, typename T2>
auto add(T1 x, T2 y) {
    auto ret = x + y;
    return ret;
}
int main() {
    double a = 1.1;
    int c = 1, d = 2;
    cout<<add(a,c)<<endl;
    cout<<add(c,d)<<endl;
}
