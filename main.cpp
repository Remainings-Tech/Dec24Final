#include<iostream>
using namespace std;
int main() {
	
	
	int room = 1;
	string input;


	while (input != "quit") {
		switch (room) {
		case 1:
			cout << "Hey you, You're finally awake. 'You suddenly wake up, and you realize you are in a forest in the middle of no where. At the distance you see a plain of grass with flowers up in the south wheres there's only 1 pathway that is full with dirt and that's it. Should you follow the path? it's the only choice'" << endl;
			cin >> input;
			if (input == "Yes")
				room = 2;
			break;

		case 2:
			cout << "------------------------Nice, it seems like you decided to follow the dirt pathway and now you're in a field with a bunch of flowers and plants with butterflies and insects. Beautiful isn't it. Now You may be wondering.How did you end up in a forest and somehow 'survive'? Well here's what happened. You and your friends went up to the mountains and had one of the best days ever. The situation is that the mountains you are climbing are very risky and there's a chance you will fall off. apparently while you made it atop the mountain and planned to go down. You accidentally trip a rock and suddenly..... You fell........ You were panicking and your friends saw your body falling and felt shocked horror and screams. You now hit the ground which causes you to be knocked out and luckily you somehow survive but it's pretty hard to walk since you have a broken leg. Now that i explain the backstory. its time to move on. You started wander the plains and you notice theres a river that is flowing west and theres some supplies. you must 'Go foward' but you cant go back to the forest since there's nothing to do there----------------------------" << endl;
			cin >> input;
			if (input == "Gofoward")
				room = 3;
			break;

		case 3:
			cout << "You walk towards the river and find supplies: bandages, a stick, a rock, a knife, apples, and raw steak. With six items now in your inventory, you notice a sign showing where the road leads. To the left is a road that seems to be a route, but you start feeling uneasy due to the lack of cars and the sensation of being watched. And to the right, it leads more trees which is assuming you will go to another forest that leads a waterfall mountain. should you go left or right?" << endl;
			cin >> input;
			if (input == "Left")
				room = 8;
			else if (input == "Right")
				room = 4;
			break;

		case 4:
			cout << "Interesting choice. You decided to go the right way, where you enter a new forest, but something isn’t quite right. It’s dark, gloomy, foggy, and eerie. Suddenly, you trip and realize your leg doesn’t hurt anymore. It seems like you've ended up in a forest full of unnatural things, Suddenly, your nervous system detects signs of being watched, and you start to feel uncomfortable. As you continue, you notice a deer in the distance, but something isn’t quite right. The deer’s eyes begin to glow, and then, suddenly, it stands up on two legs, its hands turning into claw-like fingers, before it runs away. Now this is pretty crazy, should you continue the pathway to end up at a mountain along waterfall or go back in order you feel great" << endl;
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
}//ave if those stupid tf2 kids decided to ruin it all lol
