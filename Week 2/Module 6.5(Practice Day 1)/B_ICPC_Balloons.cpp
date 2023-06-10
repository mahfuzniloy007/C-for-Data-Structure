#include <iostream>
#include <vector>
using namespace std;

class RandomGenerator {
public:
    RandomGenerator(int seed) : state(seed) {}

    void setBit(int p) {
        state[p] = 1;
    }

    void clearBit(int p) {
        state[p] = 0;
    }

    int getBit(int p) {
        return state[p];
    }

private:
    vector<int> state;
};

int main() {
    int s;
    cin >> s;

    RandomGenerator generator(s);

    int q;
    cin >> q;

    while (q--) {
        int t;
        cin >> t;

        if (t == 1) {
            int p;
            cin >> p;
            generator.setBit(p);
        } else if (t == 2) {
            int p;
            cin >> p;
            generator.clearBit(p);
        } else if (t == 3) {
            int p;
            cin >> p;
            cout << generator.getBit(p) << endl;
        }
    }

    return 0;
}
