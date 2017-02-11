#include <iostream>
using namespace std;
enum GameResult {win,lose,tie,cancel};
int main() {
	GameResult result;
	enum GameResult omit = cancel;
	for (int count = win; count <= cancel; count++) {
		result = GameResult(count);
		if (result == omit)
			cout << "the game was cancelled" << endl;
		else {
			cout << "the game was played";
			if (result == win) cout << "and we won!";
			if (result == lose) cout << "and we lost";
			cout << endl;
		}
	}
	return 0;
}
