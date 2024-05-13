# include <iostream>
# include <string>

using namespace std;

string player1, player2, word, secretWord;
char guess;
int wrong = 0;

int main(){
	cout << "-------WELCOME TO THE HANGMAN GAME--------" << endl;
	cout << "enter the player1 name: " << endl;
	cin >> player1;
	cout << "enter the player2 name: " << endl;
	cin >> player2;

	cout << player1 << "please enter a word for" << player2 << "to the guess" << endl;
	cin >> word;

	while (secretWord.size() != word.size()) {
		secretWord.push_back('?');
	}

	for (int i = 0; i < 30; i++) {
		cout << endl; // kelime görünmesin diye boşluk eklendi
	}   

	do {
		cout << "letters found";
		cout << secretWord;
		cout << "enter guess" << endl;
		cin >> guess;

		int x = word.length();

		for (int i = 0; i < x; i++) {
			if (guess == word[i]) {
				secretWord[i] = guess;
				wrong--;
			}
   		}
		wrong++;

		if (secretWord==word){
			cout << "YOU WİN THE GAME BRO..." << endl;
			break;
		}

		if (wrong == 1) {
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong == 2) {
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong == 3) {
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong == 4) {
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong == 5) {
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
		}

		else if (wrong == 6) {
			cout << "I===" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong == 7) {
			cout << "I===" << endl;
			cout << "I  O" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong == 8) {
			cout << "I===" << endl;
			cout << "I  O" << endl;
			cout << "I  |" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong ==9) {
			cout << "I===" << endl;
			cout << "I  O" << endl;
			cout << "I -|" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}
		else if (wrong == 10) {
			cout << "I===" << endl;
			cout << "I  O" << endl;
			cout << "I -|-" << endl;
			cout << "I" << endl;
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong == 11) {
			cout << "I===" << endl;
			cout << "I  O" << endl;
			cout << "I -|-" << endl;
			cout << "I /" << endl;
			cout << "I" << endl;
			cout << endl;
		}

		else if (wrong == 1) {
			cout << "I===" << endl;
			cout << "I  O" << endl;
			cout << "I -|-" << endl;
			cout << "I / /" << endl;
			cout << "I" << endl;
			cout << endl;

			cout << "GAME OVER.WORD" << word << endl;
		}
	} while (wrong < 12);

	
}