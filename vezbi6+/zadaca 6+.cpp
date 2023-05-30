#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <random>

// Funkcija za pechatenje na kartite
void printCard(const std::string& card)
{
    std::cout << card << " ";
}

int main()
{
    // Kreiran shpil na karti so 2 jokeri
    std::vector<std::string> deck = {"1_Srce", "1_List", "1_Detelina", "1_Baklava", "2_Srce", "2_List", "2_Detelina", "2_Baklava", "3_Srce", "3_List", "3_Detelina", "3_Baklava", "4_Srce", "4_List", "4_Detelina", "4_Baklava",
                                     "5_Srce", "5_List", "5_Detelina", "5_Baklava", "6_Srce", "6_List", "6_Detelina", "6_Baklava", "7_Srce", "7_List", "7_Detelina", "7_Baklava", "8_Srce", "8_List", "8_Detelina", "8_Baklava",
                                     "9_Srce", "9_List", "9_Detelina", "9_Baklava", "10_Srce", "10_List", "10_Detelina", "10_Baklava", "J_Srce", "J_List", "J_Detelina", "J_Baklava", "Q_Srce", "Q_List", "Q_Detelina", "Q_Baklava",
                                     "K_Srce", "K_List", "K_Detelina", "K_Baklava", "BLACK-JOKER", "RED-JOKER"};

    // Pechatenje na podredeni karti
    std::cout << "Podredeni karti: ";
    std::for_each(deck.begin(), deck.end(), printCard);
    std::cout << "\n\n";

    // Meshanje na shpilot
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(deck.begin(), deck.end(), g);

    // Pechatenje na vekje izmeshanite
    std::cout << "Izmeshani karti: ";
    std::for_each(deck.begin(), deck.end(), printCard);
    std::cout << "\n\n";

    // Delenje na kartite na 4 igrachi
    const int numPlayers = 4;
    const int numCardsPerPlayer = deck.size() / numPlayers;
    for (int i = 0; i < numPlayers; i++)
    {
        std::cout << "Igrach " << i+1 << " karti: ";
        for (int j = 0; j < numCardsPerPlayer; j++)
        {
            std::cout << deck[i*numCardsPerPlayer + j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}