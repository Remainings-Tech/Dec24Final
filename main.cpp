#include<Windows.h>
#include<iostream>
#include<string>
using namespace std;

//global variables (can be seen and used by ALL functions)mo says: move inventory and player health here!
int PlayerHealth = 100;
string inventory[7];

//mo says: move inventory and player health here!
int main() {

	int room = 1;
	string input = "potato";
	void Battlesystem();
	bool hasWon = false;

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
			cout << "\|/   \|/" << endl;
			cout << " \    / " << endl;
			cout << "  \_ / ___   ___" << endl;
			cout << "   o o - ' '''   '" << endl;
			cout << "    O -.        | " << endl;
			cout << "       | |'''| |" << endl;
			cout << "        ||   | |" << endl;
			cout << "        ||    ||" << endl;
			cout << "        '     '" << endl;
		
			getline(cin, input);

			if (input == "Continue" || input.compare("Continue On") == 0)
				room = 5;

			else if (input == "Back" || input.compare("Go Back") == 0)
				room = 3;
			
			break;

		case 5:
			cout << "Since you decided to continue on. The forest gets darker every time you keep going forward without turning back......... Wait, you are now lost.... The pathway is nowhere to be found........ You have now somehow gone too far to explore the unnatural forest. You suddenly feel about to panick panicked, but right, panicked you're panicking. The nerves suddenly come back and warn you again if something is near you. You look everywhere, and you see the same dear, with its glowing eyes see-You stare at it and then suddenly..................... The deer begins to stand with it's 2 legs and......... his mouth is wide open and there's blood on it......... and begins to charge at you. There's no going back because you're stuck.  You must run immediately, but the only way to outrun it is to 'Go Right' and that's all." << endl;
			getline(cin, input);
			
			if (input == "Right" || input.compare("Go Right") == 0)
				room = 6;

			break;

		case 6:
			cout << "The deer's claws are now ready to charge...... it seems like you're running away from a Wendigo, an urban legend that is a humanoid. The deer is said to roam in a forest. You keep running and suddenly you keep getting tired. You have no choice but to eat the apple or save it. Right about when you are running in a straight line, luckily there's another way to go and south, and you notice that it's a dead end with no way. You're only option is to type 'Follow the path' to continue the story" << endl;
			getline(cin, input);
		
			if (input == "Follow" || input.compare("Follow the path") == 0)
				room = 7;

			break;

		case 7:
			cout << "Uh oh, you're trapped. You have nowhere to go. Meanwhile Wendigo has stopped chasing you, but  he is in front of you. Now as of--" << endl;
			cout << "Wendigo: *GROWLS UPSETELY*" << endl;
			cout << "Uhhhhhhh. It seems like Wendigo doesn't want you to kill you and wants to fight you and trap you forever. I really don't know how to say this but, you're trapped now. But wait. You have all the supplies. Maybe you can make a weapon to combine some of your items. How about you make an axe? Type 'Craft a stick, a rock and a knife' to create an axe and if you're finished, Type 'Ready' to begin the fight"  << endl;
			getline(cin, input);
			
			if (input == "Ready")
				room = 11;
		    
			else if (input == "a stick, a rock, a knife" || input.compare("Craft a stick, a rock and a knife") == 0)
				cout << "You Crafted an axe!!!!!!!!!!!!!!" << endl;
			    cout << "_, -," << endl;
			    cout << "T_  |" << endl;
			    cout << "||`-'" << endl;
			    cout << "||" << endl;
			    cout << "||" << endl;
			    
			
				inventory[0, 4, 5, 6] = "Bandages, apples, raw steak, Axe";
			
			break;

		case 11://boss battle but its the bad ending for choosing right to go wrong way (Right = go to the forest) :(
			cout << "You now have an AXE, It's time for a BOSS BATTLE" << endl;
			
			for (int i = 0; i < 7; i++)

		    BattleSystem();
			system("pause");
		
		case 8://Good ending :)
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
				else cout << "You don't have any bandages! or Wrong item" << endl;
				PlayerHealth -= 20;
			}
			
			break;

		case 9:
			cout << "The road is pretty isolated and calm, the peaceful winds blowing through the trees, the beautiful sun hitting your body, and water. You still continued on until you notice that in the distance, you see some lights but it isn't the sun, the sun location is somehwere around 90 degrees, but you also hear some voices too. But as of now hearing it, you're still left spechless, should you Continue on? Type 'Keep going' or if you want to go back, type 'Go Back'!" << endl;
			cout << "I hate to bring you up, there's a lion that is fully awake and its slowly coming up to you, its growling, and it's ready to eat. Wait, you have supplies on the other hand, which supplies do you think that can stop the lion growing and feel happy? Bandages, a stick, a rock, a knife, apples or a raw steak? Type 'Bandages' or 'a stick' or, 'a rock' or, 'a knife' or, 'raw steak'?" << endl;
			getline(cin, input);
		
			if (input == "Continue" || input.compare("Keep going") == 0)
				room = 10;
		
			else if (input == "Back" || input.compare("Go Back") == 0)
				room = 8;
			
			if (input == "steak" || input.compare("raw steak") == 0){
				if (inventory[5] == "raw steak") {
					cout << "You feed the lion with a steak and he seems happy." << endl;
					inventory[5] = " ";
				}
				else cout << "The lion charges at you and attacks you. Likely because you gave him the wrong item!!!" << endl;
				PlayerHealth -= 60;
			}
		
			break;

		case 10://The good ending for choosing the right pathway.
			cout << "Since you handle the lion, you're ready to run. While you're still running, the lion is no longer seen and then, in the distance, you see a town with civilians and they're doing their normal routine. You have finally reached your destination with some help. The people are very friendly, but you don't see your friends. Type 'Go back' to go back but, however, you have finally reached your journey :)" << endl;
			cout << "the end" << endl;
		
			getline(cin, input);
			hasWon = true;
			
			if (input == "Back" || input.compare("Go Back") == 0)
				room = 9;
			
			break;

		}
	}//end of game loop
	if (PlayerHealth <= 0)
		cout << "You got a bad ending because to losing the battle against Wendigo, or you're now stuck in this gloomy forest. " << endl;
	
	else
		cout << "Congrats, you got the good ending :). It's unknown why you were feeling nervous about fearing you're being watched, but who knows the mystery will never be solved." << endl;
}//end main

void BattleSystem() {//friday and monday
	
	//Battlesystem LOCAL variables (can only be seen and used by THIS function)
	int Wendigohealth = 220;
	int hit;
	int choice;

	cout << endl << "--------BATTLE!!!-------------" << endl;
	
	while (PlayerHealth > 0 && Wendigohealth > 0) {
		cout << "press 1 to eat the apple to heal, 2 to use bandages for mega heal!" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			if (inventory[7] == "Axe") {
				hit = rand() % 11 + 10; //swing
				cout << "You slash the monster with your axe for" << hit << " dmg" << endl;
				Wendigohealth -= hit;
			}
			else {
				hit = rand() % 5 + 2; //swing
				cout << "You slash the monster with your axe for" << hit << " dmg" << endl;
				Wendigohealth -= hit;

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
			if (inventory[0] == "Bandages") {
				cout << "uses bandages" << endl;
				inventory[0] = " ";
				PlayerHealth += 50;

			}
            
			break;
		case 4:
			hit = rand() % 100;
			if (hit > 50) {
				cout << "You did it! But you're still stuck and theres no freedom :(" << endl;
				Wendigohealth = 0;
			}
			break;
			
			cout << "Playerhealth is now " << PlayerHealth << endl;
			cout << "Wendigohealth is now " << Wendigohealth << endl;

		}//end switch
	}	
		cout << "--------------------------------------------" << endl;
}
