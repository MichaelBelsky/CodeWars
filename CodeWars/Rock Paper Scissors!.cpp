#include <iostream>
#include <string>

using namespace std;

//rps('scissors', 'paper') // Player 1 won!
//rps('scissors', 'rock') // Player 2 won!
//rps('paper', 'paper') // Draw!

std::string rps(const std::string& p1, const std::string& p2)
{
    if (p1 == "rock")
    {
        if (p2 == "rock")
        {
            return "Draw!";
        }
        else if (p2 == "scissors")
        {
            return "Player 1 won!";
        }
        else
        {
            return "Player 2 won!";
        }
    }

    if (p1 == "scissors")
    {
        if (p2 == "scissors")
        {
            return "Draw!";
        }
        else if (p2 == "paper")
        {
            return "Player 1 won!";
        }
        else
        {
            return "Player 2 won!";
        }
    }
    if (p1 == "paper")
    {
        if (p2 == "paper")
        {
            return "Draw!";
        }
        else if (p2 == "rock")
        {
            return "Player 1 won!";
        }
        else
        {
            return "Player 2 won!";
        }
    }
}


    //  Good Code from Codewars user zloyrusskiy

//#include <string>
//#include <unordered_map>
//
//namespace {
//    std::unordered_map<std::string, std::string> win_map = { {"rock", "scissors"}, {"scissors", "paper"}, {"paper", "rock"} };
//}
//
//std::string rps(const std::string& p1, const std::string& p2)
//{
//    if (p1 == p2) {
//        return "Draw!";
//    }
//
//    if (win_map[p1] == p2) {
//        return "Player 1 won!";
//    }
//    else {
//        return "Player 2 won!";
//    }
//}