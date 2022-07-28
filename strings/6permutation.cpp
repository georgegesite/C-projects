// next_permutation example
#include <iostream>     // std::cout
#include <algorithm>    // std::next_permutation, std::sort
#include <bits/stdc++.h>

using namepsace std;
int main () {
  int myints[] = {1,2,3};

  sort(myints,myints+3);

  cout << "The 3! possible permutations with 3 elements:\n";
  while (next_permutation(myints,myints+3) )
  {
    cout << myints << endl;
  } 

 

  return 0;
}
