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

