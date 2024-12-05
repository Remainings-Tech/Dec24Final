#include<iostream>
#include<string>
using namespace std;
int main() {
	
	string inventory[6];
	int room = 1;
	string input = "potato";
	int PlayerHealth = 100;

	while (input != "quit") {

		for (int i = 0; i < 6; i++)
			cout << endl << endl;
		cout << "your health: " << PlayerHealth << endl << endl;

		switch (room) {
		case 1:
			cout << "Hey you, You're finally awake. Don't panik but you're in a forest in the middle of no where, that means they're trees everywhere, no humans or animals but theres some nice looking mountains. At the distance you see a plain of grass with flowers up in the south wheres there's only 1 pathway that is full with dirt and that's it. Should you follow the path? it's the only choice'" << endl;
			cin >> input;
			if (input == "Yes")
				room = 2;

			else
				cout << "Try again" << endl;
			break;

		case 2:
			cout << "------------------------Nice, it seems like you decided to follow the dirt pathway and now you're in a field with a bunch of flowers and plants with butterflies and insects. Beautiful isn't it. Now You may be wondering.How did you end up in a forest and somehow 'survive'? Well here's what happened. You and your friends went up to the mountains and had one of the best days ever. The situation is that the mountains you are climbing are very risky and there's a chance you will fall off. apparently while you made it atop the mountain and planned to go down. You accidentally trip a rock and suddenly..... You fell........ You were panicking and your friends saw your body falling and felt shocked horror and screams. You now hit the ground which causes you to be knocked out and luckily you somehow survive but it's pretty hard to walk since you have a broken leg. Now that i explain the backstory. its time to move on. You started wander the plains and you notice theres a river that is flowing west and theres some supplies. you must 'Go foward' but you cant go back to the forest since there's nothing to do there----------------------------" << endl;
			getline(cin, input);
			if (input == "Foward" || input.compare("Go Foward") == 0)
				room = 3;

			break;

		case 3:
			cout << "You notice a sign showing where the road leads. To the left is a road that seems to be a route, but you start feeling uneasy due to the lack of cars and the sensation of being watched. And to the right, it leads more trees which is assuming you will go to another forest that leads a waterfall mountain. Which path should you go? left or right?" << endl;
			if (inventory[0, 1, 2, 3, 4, 5] != "Bandages, a stick, a rock, a knife, apples, raw steak")
				cout << "Meanwhile, Hey Look, theres some Bandages, a stick, a rock, a knife, apples and a raw steak on the ground, pick them up" << endl;

			getline(cin, input);

			if (input == "Left" || input.compare("Go Left") == 0)
				room = 8;

			else if (input == "Right" || input.compare("Go Right") == 0)
				room = 4;

			else if (input == "Bandages, a stick, a rock, a knife, apples, raw steak" || input.compare("Pick up all the items") == 0)
				cout << "You got 6 items in your inventory!!!!!!!!!!!!!!" << endl;
			inventory[0, 1, 2, 3, 4, 5] = "Bandages, a stick, a rock, a knife, apples, raw steak";

			break;

		case 4://bad ending :(
			cout << "Interesting choice. You decided to go the right way, where you enter a new forest, but something isn’t quite right. It’s dark, gloomy, foggy, and eerie. Suddenly, you trip and realize your leg doesn’t hurt anymore. It seems like you've ended up in a forest full of unnatural things. Suddenly, your nervous system detects signs of being watched, and you start to feel uncomfortable. As you continue, you notice a deer in the distance, but something isn’t quite right. The deer’s eyes begin to glow, and then, suddenly, it stands up on two legs, its hands turning into claw-like fingers, before it runs away. Now this is pretty crazy, should you continue the pathway to end up at a mountain along. waterfall or go back" << endl;
			getline(cin, input);

			if (input == "Continue" || input.compare("Continue On") == 0)
				room = 5;

			else if (input == "Back" || input.compare("Go Back") == 0)
				room = 3;

			break;

		case 5:
			cout << "Since you decided to continue on. The forest gets darker every time you keep going forward without turning back......... Wait, you are now lost.... The pathway is nowhere to be found........ You have now somehow gone too far to explore the Unnatural forest. You suddenly feel about to panick but right panicked you're panicking. The nerves suddenly come back and warned you again if something is near you. You look everywhere and you saw the same dear, with its glowing eyes see- You stare at it and then suddenly..................... The deer begins to stand with it's 2 legs and......... his mouth is wide open and there's blood on it......... and begins to charge at you there's no going back because you're stuck.  You must run immediately, but the only way to outrun it is to go right and that's all." << endl;
			cin >> input;
			if (input == "Right" || input.compare("Go Right") == 0)
				room = 6;

			break;

		case 6:
			cout << "The deer's claws are now ready to charge...... it seems like you're running away from a Wendigo, an urban legend that is a humanoid. The deer that is said to roam in a forest. You keep running and suddenly you keep getting tired. You have no choice but to eat the apple or save it. Right about when you are running in a straight line, luckily there's another way to go up to south, And you notice that it's a dead end with no way." << endl;
			cin >> input;
			if (input == "Follow" || input.compare("Follow the path") == 0)
				room = 7;

			break;

		case 7://boss battle........ tomorrow SPOILER ALERT!!!!!!!!!! YOU'RE KIDNAPPED BUT NO DEATH :) but its the bad ending for choosing right to go wrong way (Right = go to the forest) :(
			cout << "Uh oh, you're trapped. You have nowhere to go. Meanwhile Wendigo has stopped chasing you, but  he is in front of you. Now as of--" << endl;
			cout << "Wendigo: *GROWLS UPSETELY*" << endl;
			cout << "Uhhhhhhh . It seems like Wendigo doesn't want you to kill you wants to fight you and trap you forever,"  << endl;
			cin >> input;
			if (input == "North")
				room = 6;
		
			break;

		case 8://Good ending :) "Working today" idk about battle sim as of tommorow or maybe i have time.
			cout << "Huh... Great choice... You know went where theres a highway road but as of you look around. the mile strech it very straight and you have no where to go but it ends at where yiu're at since theres construction signs that the road is unfinished." << endl;
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
	}//end of game loop
	if (PlayerHealth <= 0)
		cout << "You got the Bad ending Due to being kidnapped from wendigo or you're now stuck in this gloomy forest" << endl;
	else
		cout << "Congrats, You got the Good ending :), Its unknown why you were feeling nervous of fearing youre being watch but who knows the mysterys will never be solved" << endl;
}//end main

void Battlesim() {//Tomorrow or friday











}
