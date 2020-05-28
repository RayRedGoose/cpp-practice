#include <iostream>

void PrintIntroduction()
{
    std::cout << "\n\nYou are a secret agent breaking into a secure server room\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";
}

bool PlayGame()
{
    PrintIntroduction();

    int CodeA = 4;
    int CodeB = 3;
    int CodeC = 2;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;

    std::cout << "There are 3 numbers of code" << std::endl;
    std::cout << "The code add-up to " << CodeSum << std::endl;
    std::cout << "The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "You entered: " << GuessA << GuessB << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!";
        return true;
    }
    else
    {
        std::cout << "You lose!";
        return false;
    }
}

int main () 
{
    while (true)
    {
        bool bLevelComplete = PlayGame();
        std::cin.clear();
        std::cin.ignore();
    }
    return 0;
}
