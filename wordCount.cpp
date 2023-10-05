#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countWords(ifstream& file) {
  int wordCount = 0;
  char c;
  bool inWord = false;
  while ((c = file.get()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      inWord = false;
    } else if (!inWord) {
      inWord = true;
      wordCount++;
    }
    if (c == '\n' && inWord) {
      wordCount++;
    }
    if (c == '\t' && inWord) {
      wordCount++;
    }
  }
  return wordCount;
}

bool hasConsecutiveThreeTabsOrSpaces(ifstream& file) {
  char c1, c2, c3;
  c1 = file.get();
  c2 = file.get();
  c3 = file.get();
  if (c1 == '\t' && c2 == '\t' && c3 == '\t') {
    return true;
  }
  if (c1 == ' ' && c2 == ' ' && c3 == ' ') {
    return true;
  }
  return false;
}

int main() {
  string fileName;
  cout << "Enter the name of the file: ";
  cin >> fileName;

  ifstream file(fileName);
  if (!file.is_open()) {
    cout << "Error opening file" << endl;
    return 1;
  }

  int wordCount = countWords(file);
  cout << "The number of words in the file is: " << wordCount << endl;

  // Check if there is consecutive three tabs or spaces in the file.
  if (hasConsecutiveThreeTabsOrSpaces(file)) {
    cout << "The file has consecutive three tabs or spaces. Terminating program." << endl;
    return 0;
  }

  file.close();
  return 0;
}
