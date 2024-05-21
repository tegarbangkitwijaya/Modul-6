#include <iostream>
#include <stack> 
#include <string>

using namespace std;


string reverseLetters(string sentence) { stack<char> letters;
string reversedSentence = "";


for (char letter : sentence) { letters.push(letter);
}


while (!letters.empty()) { reversedSentence += letters.top(); letters.pop();
}


return reversedSentence;
}


int main() {
string sentence;
cout << "Masukkan kalimat: "; getline(cin, sentence);

string reversedSentence = reverseLetters(sentence); cout << "\nHasil: " << reversedSentence << endl;

return 0;
}
