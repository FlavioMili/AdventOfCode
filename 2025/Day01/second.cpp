#include <bits/stdc++.h>
#include <iostream>

int main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  std::fstream input("input01.txt");
  std::string line;

  int count_zeros = 0;
  int current_key = 50;

  while (std::getline(input, line)) {
    int sign = (line[0] == 'R') ? 1 : -1;
    int distance = std::stoi(line.substr(1));

    int old = current_key;
    int first_hit = (old == 0) ? 100 : (sign == 1 ? 100 - old : old);

    if (distance >= first_hit)
      count_zeros += 1 + (distance - first_hit) / 100;

    int new_position = old + sign * distance;
    current_key = ((new_position % 100) + 100) % 100;
  }

  std::cout << count_zeros << "\n";
  return 0;
}
