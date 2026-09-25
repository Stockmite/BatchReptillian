typedef unsigned long long BitBoard;

typedef struct {
    BitBoard Kings;
    BitBoard Queens;
    BitBoard Knights;
    BitBoard Bishops;
    BitBoard Rooks;
    BitBoard Pawns;

    unsigned int Time_left;
    //May or may not be removed later
} Side;

typedef struct {
    Side White;
    Side Black;

} Position;

BitBoard GetAllPlayerPieces (Side PlayersSide) {

    return (PlayersSide.Bishops | PlayersSide.Pawns | PlayersSide.Kings | PlayersSide.Queens
         | PlayersSide.Rooks | PlayersSide.Knights);

}

BitBoard GetAllPiecesOnTheBoard (Position CurrentPosition) {

    Side White = CurrentPosition.White;
    Side Black = CurrentPosition.Black;

    return (GetAllPlayerPieces(White) | GetAllPlayerPieces(Black));

}