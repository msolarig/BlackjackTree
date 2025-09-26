#pragma once
#include <string>

namespace blackjack {

    enum class Suit {
        Hearts,
        Diamonds,
        Clubs,
        Spades
    };

    enum class Rank {
        Ace = 1,
        Two, Three, Four,
        Five, Six, Seven,
        Eight, Nine, Ten,
        Jack, Queen, King
    };

    class Card {
    private:
        int id;         // unique identifier (0-51)
        Rank rank;
        Suit suit;

    public:
        Card(int id, Rank rank, Suit suit);

        [[nodiscard]] Rank getRank() const;
        [[nodiscard]] Suit getSuit() const;
        [[nodiscard]] int getID() const;

        std::string toString() const;
    };
}