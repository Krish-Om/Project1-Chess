#ifndef MOVEVALID_HPP
#define MOVEVALID_HPP

#include "Piece.hpp"
#include <vector>
#include "Board.hpp"
#include <tuple>
#include "button.hpp"

class MoveValidator {
private:
    static bool Vector2Equals(const Vector2 &a, const Vector2 &b, float tolerance = 0.01f);
    static bool IsPawnMoveValid(const Piece &piece, const Vector2 &newPosition, const std::vector<Piece> &pieces, const Vector2 &originalPosition);
    static bool IsRookMoveValid(const Piece &piece, const Vector2 &newPosition, const std::vector<Piece> &pieces,const Vector2 &originalPosition);
    static bool IsBishopMoveValid(const Piece &piece, const Vector2 &newPosition, const std::vector<Piece> &pieces, const Vector2 &originalPosition);
    static bool IsQueenMoveValid(const Piece &piece, const Vector2 &newPosition, const std::vector<Piece> &pieces, const Vector2 &originalPosition);
    static bool IsKnightMoveValid(const Piece &piece, const Vector2 &newPosition, const std::vector<Piece> &pieces, const Vector2 &originalPosition);
    static bool IsKingMoveValid(const Piece &piece, const Vector2 &newPosition, const std::vector<Piece> &pieces, const Vector2 &originalPosition);
    static bool IsCastlingValid(const Piece &king, const Vector2 &newPosition, const std::vector<Piece> &pieces, const Vector2 &originalPosition);
    static bool IsEnPassantValid(const Piece &piece,const Vector2 &newPosition,const std::vector<Piece> &pieces, const Vector2 &originalPostion); 
    static std::tuple<Piece, Vector2, Vector2> lastMove; //Tuple to store the last move (piece, original position, new position)

public:
    static bool IsMoveValid(const Piece &piece, const Vector2 &newPosition, const std::vector<Piece> &pieces, const Vector2 &originalPosition, Board &board); 
   
};

#endif // MOVEVALID_HPP
