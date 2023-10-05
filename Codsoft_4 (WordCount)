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

    return 0;
  }

  file.close();
  return 0;
}
