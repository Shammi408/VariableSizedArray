#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int num, query;

  cin >> num;
  cin >> query;

  vector<vector<int>> arr;
  string str;

  cin.ignore(100, '\n');
  for (int i = 0; i < num; i++) {
    int k, a;
    cin >> k;
    vector<int> temp;
    for (int j = 0; j < k; j++) {
      cin >> a;
      temp.push_back(a);
    }
    arr.push_back(temp);
  }

  int ques[query][2];
  for (int i = 0; i < query; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> ques[i][j];
    }
  }

  for (int i = 0; i < query; i++) {
    int a = ques[i][0];
    int b = ques[i][1];
    cout << arr[a][b] << endl;
  }
}
