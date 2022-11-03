#define CHECKDEAD if(getDead()){return null;}
#define CHECKDEADV if(getDead()){return;}

class Creature
{
    private:
      
    protected:
        int ID; // Might be used to track the creatures
        int age; // How old they are now
        int lifeSpan; // How old they will be when they die
        int sex; // male / female for reproduction purposes
        int reproductionChance; // fertility? - out of 100 (its a percent thing)
        int hungerCurrent; // how hungery
        int hungerMax; // either full hunger value, or if you get here you die
        int thirstCurrent; // how thirsty
        int thirstMax; // either full thirst value, or if you get here you die
        int location[2]; // thier position in the world (when I get the 2d parts down it will be important to tack somewhere, might get moved)
        string name; // Incase I want to give them names more then creature1 and creature2
        bool dead = false; // are they dead? - true = dead/gone - false = alive - default alive

    public:
    //Setters and Getters just in case
        void    setID(int newID) {ID = newID;}
        int     getID() {return ID;}
        void    setAge(int newAge) {age = newAge;}
        int     getAge() {return age;}
        void    setLifeSpan(int newLifeSpan) {lifeSpan = newLifeSpan;}
        int     getLifeSpan() {return lifeSpan;}
        void    setSex(int newSex) {sex = newSex;}
        int     getSex() {return sex;}
        void    setReproductionChance(int newReproductionChance) {reproductionChance = newReproductionChance;}
        int     getReproductionChance() {return reproductionChance;}
        void    setHungerCurrent(int newHungerCurrent) {hungerCurrent = newHungerCurrent;}
        int     getHungerCurrent() {return hungerCurrent;}
        void    setHungerMax(int newHungerMax) {hungerMax = newHungerMax;}
        int     getHungerMax() {return hungerMax;}
        void    setThirstCurrent(int newThirstCurrent) {thirstCurrent = newThirstCurrent;}
        int     getThirstCurrent() {return thirstCurrent;}
        void    setThirstMax(int newThirstMax) {thirstMax = newThirstMax;}
        int     getThirstMax() {return thirstMax;}
        void    setName(string newname) {name = newName;}
        string  getName() {return name;}
        bool    getDead() {return dead;}

        // If age is as old as lifeSpan, then die
        void oldAge()
        {
            CHECKDEADV // check if dead, if dead do nothing
            // if too old
            die();
        }

        void amITooHungery()
        {
            // if too hungery
            die()
        }

        void amITooThirsty()
        {
            // if too thirsty
            die()
        }

        // kill this creature
        void die()
        {
            dead = true; // now and forever dead - no reserection possible
        }

        // Can the creature reproduce. Might need 2 creatures to do this, might need to check both fertility ratings to see if child
        // Might need to give the reproduction method a differnt creature object so it can get the fertility data and decide on if it worked.
        void reproduce()
        {

        }

        // Creating a new creature
        void createCreature()
        {

        }
};