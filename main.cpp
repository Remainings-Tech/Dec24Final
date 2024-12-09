#include<iostream>
#include<string>
using namespace std;
int main() {
	

	string inventory[7];
	int room = 1;
	string input = "potato";
	int PlayerHealth = 100;
	srand(time(NULL));
	
	void Battlesystem();

	while (input != "quit") {

		for (int i = 0; i < 7; i++)
			cout << inventory[i] << " ";
		cout << endl << endl;
		cout << "your health: " << PlayerHealth << endl << endl;

		switch (room) {
		case 1:
			cout << "Hey you, you're finally awake. Don't panick, but you're in a forest in the middle of nowhere. That means there're trees everywhere, no humans or animals but there's some nice looking mountains. In the distance, you see a plain of grass with flowers up in the south where there's only 1 pathway that is covered with dirt and that's it. Should we follow the dirt path? Press 'Yes' to follow the path? It's the only choice'" << endl;
			getline(cin, input);
			if (input == "Yes")
				room = 2;

			else
				cout << "Try again" << endl;
			break;

		case 2:
			cout << "------------------------Nice, it seems like you decided to follow the dirt pathway, and now you're in a field with a bunch of flowers and plants with butterflies and insects. Beautiful isn't it? Now you may be wondering. How did you end up in a forest and somehow 'survive'? Well, here's what happened. You and your friends went up to the mountains and had one of the best days ever. The situation is that the mountains you are climbing are very risky and there's a chance you will fall off. Apparently, while you made it atop the mountain and planned to go down. You accidentally trip on a rock and suddenly..... You fell........ You were panicking, and your friends saw your body falling and felt shocked horror and screams. You now hit the ground, which causes you to be knocked out and, luckily, you somehow survive, but it's pretty hard to walk since you have a broken leg. Now that I explain the backstory, it's time to move on. You start wandering the plains, and you notice there's a river that is flowing west and there's some supplies. Press 'Go forward' to continue, but you can 'Go Back' to the forest, since there's nothing you can do there----------------------------" << endl;
			
			getline(cin, input);
			if (input == "Foward" || input.compare("Go Foward") == 0)
				room = 3;

			else if (input == "Back" || input.compare("Go Back") == 0)
				room = 1;

			break;

		case 3:
			cout << "You notice a sign showing where the road leads. To the left is a road that seems to be a route, but you start feeling uneasy due to the lack of cars and the sensation of being watched. And to the right, it leads more trees which is assuming you will go to another forest that leads a waterfall mountain. Which path should you go? left or right?" << endl;
			if (inventory[0, 1, 2, 3, 4, 5] != "Bandages, a stick, a rock, a knife, apples, raw steak")
				cout << "Meanwhile, Hey Look, theres some Bandages, a stick, a rock, a knife, apples and a raw steak on the ground, Type 'Pick up all the items' that seems pretty important" << endl;

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
			cout << "Interesting choice. You decided to go the right way, where you enter a new forest, but something isn’t quite right. It’s dark, gloomy, foggy, and eerie. Suddenly, you trip and realize your leg doesn’t hurt anymore. It seems like you've ended up in a forest full of unnatural things. Suddenly, your nervous system detects signs of being watched, and you start to feel uncomfortable. As you continue, you notice a deer in the distance, but something isn’t quite right. The deer’s eyes begin to glow, and then, suddenly, it stands up on two legs, its hands turning into claw-like fingers, before it runs away. Now this is pretty crazy, should you continue the pathway to end up at a mountain along? Type 'Continue On'. or  Type 'Go Back' to get rid of your nervous" << endl;
			getline(cin, input);

			if (input == "Continue" || input.compare("Continue On") == 0)
				room = 5;

			else if (input == "Back" || input.compare("Go Back") == 0)
				room = 3;
			
			break;

		case 5:
			cout << "Since you decided to continue on. The forest gets darker every time you keep going forward without turning back......... Wait, you are now lost.... The pathway is nowhere to be found........ You have now somehow gone too far to explore the unnatural forest. You suddenly feel about to panick panicked, but right, panicked you're panicking. The nerves suddenly come back and warn you again if something is near you. You look everywhere, and you see the same dear, with its glowing eyes see-You stare at it and then suddenly..................... The deer begins to stand with it's 2 legs and......... his mouth is wide open and there's blood on it......... and begins to charge at you. There's no going back because you're stuck.  You must run immediately, but the only way to outrun it is to 'Go Right' and that's all." << endl;
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
			if (input == "South")
				room = 11;
		
			break;

		case 11:
		
			
			for (int i = 0; i < 7; i++)

				BattleSystem();
			system("pause");

		
		
		case 8://Good ending :) "Working today" idk about battle sim as of tommorow or maybe i have time.//WIP
			cout << "Huh... Great choice... You know you go where there's a highway road, but if you look around, the mile stretches are very straight, and you have nowhere to go, but it ends at where you're at. There are construction signs that the road is unfinished. Type 'Keep Going' forward or 'Go Back'" << endl;
			cout << "Your legs is hurting painful and blood is coming out, Which supplies do you think it will help you to stop the wound so you dont loose your blood? Bandages, a stick, a rock, a knife, apples or a raw steak" << endl;
			getline(cin, input);
	
			if (inventory[0] != "Bandages") {
				inventory[0] = "Bandages";
				cout << "You have bandages" << endl;

			}
			
			if (input == "Continue" || input.compare("Keep going") == 0)
				room = 9;
			
			else if (input == "Back" || input.compare("Go Back") == 0)
				room = 3;
		    
			if (input == "Bandages") {
				if (inventory[0] == "Bandages") {
					cout << "You used Bandages to stop the wound" << endl;
					inventory[0] = " ";
					PlayerHealth += 20;
				}
				else cout << "You don't have any bandages!" << endl;
				PlayerHealth -= 20;
			}
			
			break;

		case 9://WIP TODAY AND TOMORROW
			cout << "You in room 9, you can go North or East" << endl;
			cin >> input;
			if (input == "North")
				room = 10;
			else if (input == "East")
				room = 8;
			break;

		case 10://WIP TODAY AND TOMORROW
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
		cout << "Congrats, you got the good ending :). It's unknown why you were feeling nervous about fearing you're being watched, but who knows the mystery will never be solved." << endl;
}//end main

void BattleSystem() {//friday and monday
	int Monsterhealth = 200;
	int hit;
	int choice;

	cout << endl << "--------BATTLE!!!-------------" << endl;
	
	while (PlayerHealth > 0 && Monsterhealth > 0) {
		cout << "press 1 to eat the apple to heal, 2 to use bandages for mega heal!" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			if (inventory[7] == "Axe") {
				hit = rand() % 11 + 10; //swing
				cout << "You slash the monster with your axe for" << hit << " dmg" << endl;
				Monsterhealth -= hit;
			}
			else {
				hit = rand() % 5 + 2; //swing
				cout << "You slash the monster with your axe for" << hit << " dmg" << endl;
				Monsterhealth -= hit;

				cout << "the monster attacks you 20 dmg" << endl;
				PlayerHealth -= 20;
			}
			break;
		case 2:
			if (inventory[1] == "apples") {
				cout << "Eating noises" << endl;
				inventory[1] = " ";
				PlayerHealth += 50;
			}

			break;
		case 3:
			hit = rand() % 100;
			if (hit > 50) {
				cout << "You did it! But you're still stuck and theres no freedom :(" << endl;
				Monsterhealth = 0;
			}
			break;
			cout << "Playerhealth is now " << PlayerHealth << endl;
			cout << "Monsterhealth is now " << Monsterhealth << endl;

		}//end switch
	}	
		cout << "--------------------------------------------" << endl;
}
