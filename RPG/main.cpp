#include <iostream>

using namespace std;

int main() {
    cout << "Welcome to this RPG game!" << endl;
    cout << "You start with 5 skill points to assign." << endl;
    cout << "You gain a skill point every time you defeat an enemy." << endl;
    cout << "There are 5 different skills: Defence, attack, magic, endurance and vitality." << endl;
    cout << "Defence lowers the incoming damage by the level." << endl;
    cout << "Attack increases the amount of damage dealt by 1 per level." << endl;
    cout << "Magic increases your capacity of MP (Magic Points)." << endl;
    cout << "Endurance increases your energy (which you use to use non-magic specials) and grants you 1 extra ability slot." << endl;
    int skillpoints{5};
    cout << "How many skill points do you want to put into defence?: ";
    int requestedskillpoints;
    cin >> requestedskillpoints;
    int defence{0};
    int attack{0};
    int magic{0};
    int endurance{0};
    int vitality{10};
    if(requestedskillpoints > skillpoints) {
        cout << "Sorry, you don't have that many skill points, enter 0 or type a number below or the same as your current skill point number: " << skillpoints << endl;
        cout << "This game will skip your defence skill points, if this was a mistake, enter it at the next chance." << endl; 
    }else{
        cout << "Skill points assigned!" << endl;
        defence = requestedskillpoints + defence;
        cout << "New defence skill is now: " << defence << "." << endl;
        skillpoints = skillpoints - requestedskillpoints;
        cout << "You now have " << skillpoints << " skill points left." << endl;
    }
    cout << endl;
    cout << "How many skill points do you want to put into attack?: ";
    cin >> requestedskillpoints;
    if(requestedskillpoints > skillpoints) {
    cout << "Sorry, you don't have that many skill points, enter 0 or type a number below or the same as your current skill point number: " << skillpoints << endl;
    cout << "This game will skip your attack skill points, if this was a mistake, enter it at the next chance." << endl; 
    }else{
        cout << "Skill points assigned!" << endl;
        attack = requestedskillpoints + attack;
        skillpoints = skillpoints - requestedskillpoints;
        cout << "Attack skill is now: " << attack << "." << endl;
        cout << "You now have " << skillpoints << " skill points left." << endl;
    }
        cout << endl;
    cout << "How many skill points do you want to put into magic?: ";
    cin >> requestedskillpoints;
    if(requestedskillpoints > skillpoints) {
    cout << "Sorry, you don't have that many skill points, enter 0 or type a number below or the same as your current skill point number: " << skillpoints << endl;
    cout << "This game will skip your magic skill points, if this was a mistake, enter it at the next chance." << endl; 
    }else{
        cout << "Skill points assigned!" << endl;
        magic = requestedskillpoints + magic;
        skillpoints = skillpoints - requestedskillpoints;
        cout << "Magic skill is now: " << magic << "." << endl;
        cout << "You now have " << skillpoints << " skill points left." << endl;
    }
            cout << endl;
    cout << "How many skill points do you want to put into endurance?: ";
    cin >> requestedskillpoints;
    if(requestedskillpoints > skillpoints) {
    cout << "Sorry, you don't have that many skill points, enter 0 or type a number below or the same as your current skill point number: " << skillpoints << endl;
    cout << "This game will skip your endurance skill points, if this was a mistake, enter it at the next chance." << endl; 
    }else{
        cout << "Skill points assigned!" << endl;
        endurance = requestedskillpoints + endurance;
        skillpoints = skillpoints - requestedskillpoints;
        cout << "Endurance skill is now: " << magic << "." << endl;
        cout << "You now have " << skillpoints << " skill points left." << endl;
    }
            cout << endl;
    cout << "How many skill points do you want to put into vitality?[You start with vitality points]: ";
    cin >> requestedskillpoints;
    if(requestedskillpoints > skillpoints) {
    cout << "Sorry, you don't have that many skill points, enter 0 or type a number below or the same as your current skill point number: " << skillpoints << endl;
    cout << "This game will skip your vitality skill points, if this was a mistake, enter it at the next chance." << endl; 
    }else{
        cout << "Skill points assigned!" << endl;
        vitality = requestedskillpoints + vitality;
        skillpoints = skillpoints - requestedskillpoints;
        cout << "Vitality skill is now: " << vitality << "." << endl;
        cout << "You now have " << skillpoints << " skill points left." << endl;
    }
    cout << "Would you like to do the fight tutorial (Y or N [must be capital letter]): ";
    char answerfighttutorial{};
    char fightmove{};
    cin >> answerfighttutorial;
    cout << endl;
    int healthpoints{vitality};
    int magicpoints{magic};
    int energypoints{endurance};
    int enemymaxhealth{1};
    int enemyhealth{1};
    bool inbattle{0};
    int damagedefence{defence};
    if(answerfighttutorial == 'Y'){
        cout << "You were challenged by tutorial dummy LVL 0!" << endl;
        enemymaxhealth = 10;
        enemyhealth = enemymaxhealth;
        cout << "(Tutorial): I recommend you use attack first, but you can go any way. The enemy will only attack with 1 damage." << endl;
        inbattle = 1;
        while(inbattle == 1) {
        cout << "HP: " << healthpoints << "/" << vitality << " <-- This is your health points, if it goes to 0 you die." << endl;
        cout << "MP: " << magicpoints << "/" << magic << " <-- This is your magic points, you can use it for magic moves." << endl;
        cout << "EP: " << energypoints << "/" << endurance << " <-- This is your energy points which you use for special non magic moves." << endl;
        cout << "Moves available: Defend(+1 HP +1 DEF), attack(1 Damage), magic attack(1MP 3 Damage +1 HP), special attack(1EP 4 Damage)." << endl;
        if(enemyhealth <= 0){
            inbattle = 0;
        }else{
          cout << "Input move (with capital letter at start): ";
          cin >> fightmove
            cout << endl;
            }
        }
        
    }else if(answerfighttutorial == 'N'){
        cout << "Ok." << endl;
    }
}