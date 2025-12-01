#include <bits/stdc++.h>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::fstream input;
  input.open("input01.txt");
  std::string line;

  int count_zeros = 0;
  int current_key = 50;

  while (std::getline(input, line)) {
    int sign = (line[0] == 'R') ? 1 : -1;

    current_key = (current_key + 100 + sign * std::stoi(line.substr(1))) % 100;

    count_zeros += (!current_key);
  }

  std::cout << count_zeros << "\n";
  input.close();
  return 0;
}
