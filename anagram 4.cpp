#include <iostream>
#include <string>
using namespace std;

void permute(string* arr, int& ind, string& wrd) {
    int it=0;
	if (it == wrd.length()) {
        arr[ind++] = wrd;
    } else {
        for (it; int i < wrd.length(); ++i) {
            swap(wrd[i], wrd[it]);
            permute(arr, ind, wrd, it + 1);
            swap(wrd[i], wrd[it]);
        }
    }
}

int main() {
    string a = "ABCD";
    string arr[100]; // enough size to store all permutations
    int ind = 0;
    permute(arr,ind, a,);
    for (int i = 0; i < ind; ++i) {
        cout << arr[i] << endl;
    }
    return 0;
}
