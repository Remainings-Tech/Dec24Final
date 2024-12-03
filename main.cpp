#include<iostream>
using namespace std;
int main() {
	int room = 1;
	string input;

	while (input != "quit") {
		switch (room) {
		case 1:
			cout << "------------------------You suddenly wake up, and you realize you are in a forest in the middle of no where .At the distance you see a plain of grass with flowers up in the south wheres theres only 1 pathway that is full with dirt and that's it. Should we follow the path?------------------------" << endl;
			cin >> input;
			if (input == "yes")
				room = 2;
			break;

		case 2:
			cout << "------------------------Nice, it seems like you decided to follow the dirt pathway and now you're in a field with a bunch of flowers and plants with butterflies and insects. Beautiful isn't it. Now You may be wondering.How did you end up in a forest and somehow 'survive'? Well here's what happened. You and your friends went up to the mountains and had one of the best days ever. The situation is that the mountains you are climbing are very risky and there's a chance you will fall off. apparently while you made it atop the mountain and planned to go down. You accidentally trip a rock and suddenly..... You fell........ You were panicking and your friends saw your body falling and felt shocked horror and screams. You now hit the ground which causes you to be knocked out and luckily you somehow survive but it's pretty hard to walk since you have a broken leg. Now that i explain the backstory. its time to move on. You started wander the plains and you notice theres a river that is going West or East and theres some supplies. You must go South again to observed but you cant go back to the forest----------------------------" << endl;
			cin >> input;
			if (input == "South")
				room = 3;
			break;

		case 3:
			cout << "You in room 3, you can go East or West" << endl;
			cin >> input;
			if (input == "West")
				room = 8;
			else if (input == "East")
				room = 4;
			break;

		case 4:
			cout << "You in room 4, you can go South or West" << endl;
			cin >> input;
			if (input == "South")
				room = 5;
			else if (input == "West")
				room = 3;
			break;

		case 5:
			cout << "You in room 5, you can go North or East" << endl;
			cin >> input;
			if (input == "North")
				room = 4;
			else if (input == "East")
				room = 6;
			break;

		case 6:
			cout << "You in room 6, you can go South or West" << endl;
			cin >> input;
			if (input == "South")
				room = 7;
			else if (input == "West")
				room = 5;
			break;

		case 7:
			cout << "You in room 7, you can go North" << endl;
			cin >> input;
			if (input == "North")
				room = 6;
			break;

		case 8:
			cout << "You in room 8, you can go West or East" << endl;
			cin >> input;
			if (input == "East")
				room = 3;
			else if (input == "West")
				room = 9;
			break;

		case 9:
			cout << "You in room 9, you can go North or East" << endl;
			cin >> input;
			if (input == "North")
				room = 10;
			else if (input == "East")
				room = 8;
			break;

		case 10:
			cout << "You in room 10, You can go only South" << endl;
			cin >> input;
			if (input == "South")
				room = 9;
			break;

		}
	}
}// only if the om kids who sits there will oblitirate my code for playing tf2
