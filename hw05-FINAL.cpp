// Matthew Kurtz
// CS-120 Section 3
// 4-25-21
// Assignment #5
//
// The menu() function I created is a little different than what the instructions stated because for my game, you can travel from anywhere to anywhere (like a travel game). I do understand the concept of what the instructions ask, however. We talked about it during lab on Tuesday and you said it was ok.


/* This game took me a long time to make! I hope it's not too much information! */


#include <iostream>
#include <cstdlib>
using namespace std;

//----------------------- Function Declarations ------------------
int gold = 0;
void intro();
void get_value();
double na1();
double sa1();
double eu1();
double af1();
double as1();
double au1();
double an1();
double menu();
double nim();
double add_function();

int main() {
	int choice, valid_choice;
	intro();
	get_value();
	cin >> choice;
	do {
		
		
		switch(choice) {
		case 0:
			break;
		
		case 1:
			choice = na1();
			cout << "You have " << gold << " gold" << endl;
			break;
			
		case 2:
			choice = sa1();
			cout << "You have " << gold << " gold" << endl;
			break;
		case 3:
			choice = eu1();
			cout << "You have " << gold << " gold" << endl;
			break;
		case 4:
			choice = af1();
			cout << "You have " << gold << " gold" << endl;
			break;
		case 5:
			choice = as1();
			cout << "You have " << gold << " gold" << endl;
			break;
		case 6:
			choice = au1();
			cout << "You have " << gold << " gold" << endl;
			break;
		case 7:
			choice = an1();
			cout << "You have " << gold << " gold" << endl;
			break;
			
		default:
			valid_choice = 0;
			cout << "You can't travel outside of Earth! (Well, at least not yet). Please choose a valid choice." << endl;
			cin >> choice;
			break;
		}
	}while (choice != 0);		
	cout << "Thanks for playing!" << endl;	
	 return 0;
}

//------------------- Intro -------------------------------
void intro() {

	cout << "Welcome to World Discovery Travel Game!" << endl;
	cout << "During this adventurous game, you'll be traveling to each of the seven continents!" << endl;
	cout << "Not only will it be adventurous, but it will educational and persevering!" << endl;
	cout << "Which continent would you like to go to first?" << endl;
	cout << "For North America, press 1" << endl;
	cout << "For South America, press 2" << endl;
	cout << "For Europe, press 3" << endl;
	cout << "For Africa, press 4" << endl;
	cout << "For Asia, press 5" << endl;
	cout << "For Australia, press 6" << endl;
	cout << "For Antarctica, press 7" << endl;
	cout << "To exit the game, press 0" << endl;
	cout << endl << endl << "Along with learning, you'll also have gold you earn from answer the questions correctly!" << endl;
}

//-------------------- Getting Value for Intro ---------------
void get_value(){
	
	double temp_value;
	cout << "Where you'd you like to go? Type the key type here:" << endl;
}


//--------------------- North America --------------------
double na1() {

	int ans;
	static int visited_na1 = 0; // Has this room been visited?
	int choice;

	
	if (visited_na1 == 1){
		cout << "You've already been here! Type in the number corresponding with another continent:";
		cin >> choice;
		return choice;
        } else {
		visited_na1 += 1;
		
   } do{
	   cout << "Welocme to North America!" << endl;
	   cout << "For this continent, you get to play the game of NIM." << endl;
	   cout << "In order to advance, you must beat the computer!" << endl;
	   cout << "Good luck!" << endl;
	   
	   if ( nim() == 1)
	   {
		   choice = menu();
		   return choice;
	   }
	/*cout << "Welcome to North America!" << endl;
	cout << "This is the land of a multitude of countries with tons of geographical differences!" << endl;
	cout << "Here's the first challenge: " << endl;
	cout << "A citizen of the United States asks you 'How many national parks are there in the U.S.?' " << endl;
	cout << endl << "Is it: " << endl;
	cout << "1) 423" << endl;
	cout << "2) 516" << endl;
	cout << "3) 178" << endl;
	cout << "4) 257" << endl;
	cout << "Type your answer here: ";
	cin >> ans;
	
	if (ans == 1) {
		cout << "Congrats! You passed the test!";
		gold = gold + 10;
	} else if (ans == 2 || ans == 3 || ans == 4) {
		cout << "Oh no! You didn't pass the test! Better luck next time!" << endl;
		gold = gold + 0;
	} else {
		cout << "Please enter valid input!";
		cin >> ans;
	} 
	choice = menu();
	return choice; */
    } while (visited_na1 < 1);


}
//--------------------- South America --------------------
double sa1(){
	
	int ans;
	int ans1;
	int rand1;
	int rand2;
	static int visited_sa = 0;
	int choice;
	srand(time(0));
	if (visited_sa == 1) {
		cout << "You've already been here! Type in the number corresponding with another continent:";
		cin >> choice;
		return choice;
	} else {
		visited_sa = visited_sa + 1;	
   } do {
	cout << "Welcome to South America!" << endl;
	cout << "One of the biggest sports on this continent is soccer (or futbol/futebol as they say in South America)";
	cout << "For which country in South America does the player Gabriel Martinelli play for?";
	cout << endl << "1) Argentina" << endl;
	cout << "2) Peru" << endl;
	cout << "3) Brazil" << endl;
	cout << "4) Colombia" << endl;
	cout << "Type your answer here:";
	cin >> ans;
	if (ans == 3) {
		cout << "Parabens! You selected the right country!" << endl;
		gold = gold + 10;
	} else if (ans == 2 || ans == 1 || ans == 4) {
		cout << "Unlucky! You didn't get it correct!" << endl;
	} else {
		cout << "Please enter valid input!";
		cin >> ans;  
	}
	cout << "Another thing you must do is pass a simple addition equation!" << endl;
	rand1 = rand() % 7;
	rand2 = rand() % 9;
	cout << "What is " << rand1 << " + " << rand2 << "? " << endl;
	cout << "Type your answer here: ";
	cin >> ans1;
	if (ans1 == rand1 + rand2) {
		cout << "Congrats! You correctly solved the problem!" << endl;
		gold = gold + 10;
	} else if (ans1 != rand1 + rand2) {
		cout << "Sorry! You didn't get it right!" << endl;
	} else {
		cout << "Please enter valid input!";
		cin >> ans1;
	}
	choice = menu();
	return choice;
    } while (visited_sa < 1);	
}
//--------------------- Europe -------------------------
double eu1(){
	int ans;
	static int visited_eu1 = 0;
	int choice;


	if (visited_eu1 == 1) {
		cout << "You've already been here! Type in the number corresponding with another continent:";
		cin >> choice;
		return choice;
	} else {
		visited_eu1 = visited_eu1 + 1;
   } do {
	cout << "Welcome to Europe!" << endl;
	cout << "Travel is a big part of this continent! A lot of Europeans know their geography very well. Here's your next test: ";
	cout << "What is the capital of Italy?";
	cout << endl << "1) Torino" << endl;
	cout << "2) Roma" << endl;
	cout << "3) Milano" << endl;
	cout << "4) Venezia" << endl;
	cout << "Type your answer here:";
	cin >> ans;
	if (ans == 2) {
		cout << "Auguri! You selected the right capital!" << endl;
		gold = gold + 10;
	} else if (ans == 3 || ans == 1 || ans == 4) {
		cout << "Unlucky! You didn't get it correct!" << endl;
	} else {
		cout << "Please enter valid input!";
		cin >> ans;  
	}
	choice = menu();
	return choice;
    } while (visited_eu1 < 1);
}
//--------------------- Africa -------------------------
double af1(){
	int ans;
	static int visited_af1 = 0;
	int choice;
	
	if (visited_af1 == 1) {
		cout << "You've already been here! Type in the number corresponding with another continent:";
		cin >> choice;
		return choice;
	} else {
		visited_af1 = visited_af1 + 1;
   } do {
	cout << "Welcome to Africa!" << endl;
	cout << "Africa has an immense amount of languages and different cultures!";
	cout << "Here's your question: How many different languages are spoken in Africa?" << endl;
	cout << endl << "1) 3000" << endl;
	cout << "2) 5000" << endl;
	cout << "3) 2000" << endl;
	cout << "4) 1000" << endl;
	cout << "Type your answer here:";
	cin >> ans;
	if (ans == 3) {
		cout << "Congrats! You selected the right answer!" << endl;
		gold = gold + 10;
	} else if (ans == 2 || ans == 1 || ans == 4) {
		cout << "Unlucky! You didn't get it correct!" << endl;
	} else {
		cout << "Please enter valid input!";
		cin >> ans;  
	}
	choice = menu();
	return choice;
    } while (visited_af1 < 1);
}
//--------------------- Asia --------------------------
double as1(){
	int ans;
	static int visited_as1 = 0;
	int choice;
	
	if (visited_as1 == 1) {
		cout << "You've already been here! Type in the number corresponding with another continent:";
		cin >> choice;
		return choice;
	} else {
		visited_as1 = visited_as1 + 1;
   } do {
	cout << "Welcome to Asia!" << endl;
	cout << "Asia is known for it's beautiful geography and multitudes of people!";
	cout << "What is Asia's biggest city?";
	cout << endl << "1) Shanghai" << endl;
	cout << "2) Pyongyang" << endl;
	cout << "3) Beijing" << endl;
	cout << "4) Tokyo" << endl;
	cout << "Type your answer here:";
	cin >> ans;
	if (ans == 4) {
		cout << "Congrats! You selected the right city!" << endl;
		gold = gold + 10;
	} else if (ans == 3 || ans == 1 || ans == 2) {
		cout << "Unlucky! You didn't get it correct!" << endl;
	} else {
		cout << "Please enter valid input!";
		cin >> ans;  
	}
	choice = menu();
	return choice;
    } while (visited_as1 < 1);
}
//-------------------- Australia ----------------------
double au1(){
	int ans;
	static int visited_au1 = 0;
	int choice;
	
	if (visited_au1 == 1) {
		cout << "You've already been here! Type in the number corresponding with another continent:";
		cin >> choice;
		return choice;
	} else {
		visited_au1 = visited_au1 + 1;
   } do {
	cout << "Welcome to Australia!" << endl;
	cout << "Australia is known as a country/continent! The country of Australia gained independence from its successors, the U.K.";
	cout << "What year did Australia gain independence from the United Kingdom?";
	cout << endl << "1) 1902" << endl;
	cout << "2) 1901" << endl;
	cout << "3) 1899" << endl;
	cout << "4) 1900" << endl;
	cout << "Type your answer here:";
	cin >> ans;
	if (ans == 2) {
		cout << "Yes! You selected the right year!" << endl;
		gold = gold + 10;
	} else if (ans == 3 || ans == 1 || ans == 4) {
		cout << "Unlucky! You didn't get it correct!" << endl;
	} else {
		cout << "Please enter valid input!";
		cin >> ans;  
	}
	choice = menu();
	return choice;
    } while (visited_au1 < 1);
}

//--------------------- Antarctica --------------------
double an1(){
	int ans;
	static int visited_an1 = 0;
	int choice;

	if (visited_an1 == 1) {
		cout << "You've already been here! Type in the number corresponding with another continent:";
		cin >> choice;
		return choice;
	} else {
		visited_an1 = visited_an1 + 1;
   } do {
	cout << "Welcome to Antarctica!" << endl;
	cout << "This continent is not owned by anybody! Lots of research happens here, but not much socially. However, has anyone ever been born here? Maybe...";
	cout << "How many people have been born on Antarctica?";
	cout << endl << "1) 0" << endl;
	cout << "2) 2" << endl;
	cout << "3) 20" << endl;
	cout << "4) 11" << endl;
	cout << "Type your answer here:";
	cin >> ans;
	if (ans == 4) {
		cout << "Congrats! You selected the right amount!" << endl;
		gold = gold + 10;
	} else if (ans == 3 || ans == 1 || ans == 2) {
		cout << "Unlucky! You didn't get it correct!" << endl;
	} else {
		cout << "Please enter valid input!";
		cin >> ans;  
	}
	choice = menu();
	return choice;
    } while (visited_an1 < 1);
} 


// -------------------------Menu Function ----------------
double menu(){

	int choice;
	cout << "Now, we get to choose where to go next." << endl;
	cout << "If you want to go any of the following options, type in the number that's in the parantheses:" << endl;
	cout << "North America (1), South America (2), Europe (3), Africa (4), Asia (5), Australia (6), Antarctica (7), Exit Game (0)" << endl;
	cin >> choice;
	if (choice == 1){
		return choice;
	} else if (choice == 2) {
		return choice;
	} else if (choice == 3) {
		return choice;
	} else if (choice == 4) {
		return choice;	
	} else if (choice == 5) {
		return choice;
	} else if (choice == 6) {
		return choice;
	} else if (choice == 7) {
		return choice;
	} else {
		cout << "Invalid input. Please enter a valid choice: ";
		cin >> choice;
	}
}
double nim () {
             // main() starts the actual program 
 {
    // ---------------- Variable declarations ---------------------
    int num_objects = 30; 
    int current_player = 1; 
    int move;
    string playagain;  
    int min_move = 1;
    int max_move = 5;
    // ----------------- Rules for NIM ------------
    cout << endl << "NIM is a strategical game where either player can remove 1-3 stones. \n";
    cout << "Essentially, the player that picks up the last stone loses the game. \n";
    cout << "Also, the computer is referred to as 'Player 0' " << endl << endl;
    // ----------- Beginning of the main game loop ----------------
    do {
	num_objects = 30;
	
	
        do {                                      
           if (current_player == 1)  {    // conditional: if
                cout << endl << "Player 1, it is now your turn! Please enter your move (1-5): ";  // output
                cin >> move;                 // input
                while (move < min_move  || move > max_move || move > num_objects){
                    cout << "You can't do that. It's an illegal move. \nEnter a new move (1-5): ";
                    cin >> move;
            }
           } else {                          // else part of conditional
                do {
	                if (num_objects == 1){
		            move = 1;               // make sure move is legal
		            }else if (num_objects == 2) {
		            move = 1;
		            }else if (num_objects == 3){
			        move = 2;
		            }else if (num_objects == 4) {
		            move = 3;
             	    }else if (num_objects == 5){
		            move = 4;
		            }else if (num_objects == 6) {
			        move = 5; 
		            }else { 
                        move =  1+ rand() % max_move;    // random computer move
                    }
                } while (move > 6);
                if (move >= 0) {
                cout << "Computer removed " << move << ". How will Player 1 respond?" << endl;
                }
       }
           num_objects = num_objects - move;  // implement the move
           cout << num_objects << " objects remaining.\n";


           for (int i = 1; i <= num_objects; i++){
	        cout << "#"; 
           }
	 


           if (num_objects >= 21) {
                cout << endl << "We're still battling at the beginning. Will Player 1 continue to play well?" << endl << endl;
           } else if (num_objects >= 18) {
	        cout << endl << "The game seems quiet, let's see what the players will do..." << endl << endl;
           } else if (num_objects >= 15) {
	        cout << endl << "Player 1 and the computer are making some interesting moves. Let's keep on watching." << endl << endl;
           } else if (num_objects >= 12) {
	        cout << endl << "We're about halfway! Will Player 1 obtain the victory or will the computer outsmart another victim?" << endl << endl;
           } else if (num_objects >= 9) {
	        cout << endl << "We're reaching the final stretch!" << endl << endl;
           } else if (num_objects >= 6) {
	        cout << endl << "This is it! These moves will determine the game!" << endl << endl;
           } else if (num_objects == 4) {
                cout << endl << "The current player wins the game since there's only one 'reasonable' move they should do." << endl << endl;
           } else if (num_objects == 3) {
                cout << endl << "The current player wins the game since there's only one 'reasonable' move they should do." << endl << endl;

           } else {
	        cout << endl << "The final stage is here! Who will end up winning? Will Player 1 defeat the computer?" << endl << endl;
           }
           current_player = (current_player + 1) % 2;  // switch players
       } while (num_objects > 0);                    
   // ------------  end of the game loop --------------------------
        cout << "Player " << current_player << " has successfully defeated their opponent!\n";
        cin.ignore();
	if (current_player == 0)
	{ 
            playagain = "y";
            cout << "You can't leave the room until you win! Play smart!" << endl;
    
        }
    else {
        playagain = "n";
        cout << "Congrats! You've won! Now choose another place to go to.";
		gold = gold + 10;
        return 1;
    }
    }  while (playagain == "y");
       
	 cout << "\nPress enter to quit.\n";
        cin.ignore();
        return 0;
}
}
