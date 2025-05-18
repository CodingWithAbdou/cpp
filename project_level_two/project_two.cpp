#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to simplify usage of standard functions.


enum EOpType
{
    Add = 1,
    Sub = 2,
    Mul = 3,
    Dev =4 , 
    Mix = 5

};


enum ELevel
{
    Easy = 1,
    Med = 2,
    Hard = 3,
    Miz = 4
};

enum EStatus {
    Mid = 0,
    Won = 1,
    Los = 2,
 };


int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
    return randNum;
}

void askUserHowMany(short& number , short min , short max , string msg) {
    do
    {
        cout << msg << endl;
        cin >> number;
    } while (number <= min && number > max);
}



short getLevelRandom() {
    return  RandomNumber(ELevel::Easy, ELevel::Hard);
}

void getRandomNumberRealtedLevel(short& numberOne, short& numberTwo, short level) {
    if (level == ELevel::Easy) {
        numberOne = RandomNumber(1, 10);
        numberTwo = RandomNumber(1, 10);
    }
    else if (level == ELevel::Med) {
        numberOne = RandomNumber(10, 50);
        numberTwo = RandomNumber(10, 50);

    }
    else if (level == ELevel::Hard) {
        numberOne = RandomNumber(50, 100);
        numberTwo = RandomNumber(50, 100);
    }
    else {
        // when choise mix
        getRandomNumberRealtedLevel(numberOne , numberTwo, getLevelRandom());
    }
}


string getOp(short op) {
    if (op == EOpType::Add) {
        return "+";
    }
    else if (op == EOpType::Sub) {
        return "-";
    }
    else if (op == EOpType::Dev) {
        return "/";
    }else if (op == EOpType::Mul) {
        return "*";
    }
    else {
       return getOp(RandomNumber(EOpType::Add, EOpType::Dev));
    }
}

void validateUserAnswer( int userAnswer, int realAnswer, int& rightAnswer, int& wrongAnswer) {

    if (userAnswer == realAnswer) {
        cout << endl << "Right Answer ;)" << endl;
        system("color 20");
        rightAnswer++;
    }
    else {
        system("color c2");
        cout << endl << "False Answer :(" << endl;
        cout << "The Right Answer is:  " << realAnswer << endl;
        wrongAnswer++;
    }
    
}


int getRealAnswer(short firstNumber, short SecondNumber, short op) {
    if (op == EOpType::Add) {

        return firstNumber + SecondNumber;
    }else if(op == EOpType::Sub) {
        return firstNumber - SecondNumber;
    }
    else if (op == EOpType::Mul ) {
        return firstNumber * SecondNumber;
    }
    return firstNumber / SecondNumber;
}

void showMethodResult(short firstNumber, short SecondNumber, short op, int userAnswer, int &rightAnswer, int &wrongAnswer) {
    int realAnswer = getRealAnswer(firstNumber, SecondNumber, op);

    validateUserAnswer( userAnswer, realAnswer, rightAnswer, wrongAnswer);
}


void printMethod(short level, short op , int &rightAnswer , int &wrongAnswer) {

    short firstNumber = 0;
    short SecondNumber = 0;
    int userAnswer = 0;

    getRandomNumberRealtedLevel(firstNumber, SecondNumber, level);

    cout << endl << endl << "   " << firstNumber << endl;
    cout << getOp(op) << endl;
    cout << "   " << SecondNumber << endl;
    cout << "___________________" << endl << "=  ";
    cin >> userAnswer;
    
    showMethodResult(firstNumber, SecondNumber, op, userAnswer , rightAnswer , wrongAnswer);

}

string getFinalResult(int rightAnswer, int wrongAnswer) {
    if (rightAnswer >= wrongAnswer) {
    system("color 20");
        return "Pass";
    }
        system("color c2");
    return "Fail";
}

void showFinalResult(int numberOfRound , string level , string typeOp , int rightAnswer, int wrongAnswer) {
    cout << endl << "********************************************************************************" << endl;
    cout << endl << "________________________________________________________________________________" << endl;
    cout << "The Finale Result IS :" << getFinalResult(rightAnswer, wrongAnswer) << endl;
    cout << endl << "________________________________________________________________________________" << endl;
    cout << "Number Quastion Is : " << numberOfRound << endl;
    cout << "Quastion Level IS : " << level << endl;
    cout << "Oprtion Type Is : " << typeOp << endl;
    cout << "Number oF Right Quastion Is :" << rightAnswer << endl;
    cout << "Number oF Wrong Quastion Is :" << wrongAnswer << endl;
}

string getLevelName(int level) {
    if (level == ELevel::Easy) {
        return "Easy";
    }
    else if (level == ELevel::Med) {
        return "Med";
    }
    else if (level == ELevel::Hard) {
        return "Hard";
    }
    return "Mix";
}

string getTypeOpName(int operation) {
    if (operation == EOpType::Add) {
        return "Add";
    }
    else if (operation == EOpType::Sub) {
        return "Sub";
    }
    else if (operation == EOpType::Mul) {
        return "Mul";
    }
    else if (operation == EOpType::Dev) {
        return "Dev";
    }
    return "Mix";

}

bool handleContinueGame() {
    char status;
    do {
        cout << "Do you want to continue playing? Press (Y)es or (N)o: ";
        cin >> status;
        status = toupper(status); // Convert to uppercase for easier comparison
    } while (status != 'Y' && status != 'N'); // Loop until valid input

    if (status == 'Y') {
        return true;
    }
    return false;
}

void  startGame(int numberOfRound, int level, int operation)
{
    int rightAnswer = 0;
    int wrongAnswer = 0;
    for (int i = 1; i <= numberOfRound; i++) {
        cout << endl << "************************************" << endl;
        cout << "Quastion [" << i << "/" <<  numberOfRound << "] " << endl;
        
        printMethod(level, operation , rightAnswer , wrongAnswer);
    }

    showFinalResult(numberOfRound , getLevelName(level), getTypeOpName(operation), rightAnswer, wrongAnswer);

}




void initGame() {
    short numberOfRound = 0, level = 0 , operation = 0;

    askUserHowMany(numberOfRound , 0,10 , "We Will Ask You Quastion How Many Quastion want: ");
    askUserHowMany(level, 1, 4 ,"Choise Quastion Level [1] easy , [2] med , [3] hard , [4] mix : ");
    askUserHowMany(operation,1 ,5,"Choise Opiration Type [1] Add , [2] Sub , [3] Mul , [4] Dev , [5] Mix : ");
    startGame(numberOfRound , level , operation);

    if (handleContinueGame()) {
        initGame();
    }
    else {
        cout << "Goodbye! See you later :)" << endl;
    }
}

int main()
{//Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    initGame();
    return 0;  
}
