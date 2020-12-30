//Funkcja wczytuje domyślny stan planszy
void gameInit();
//Poniższe funkcje sprawdzają czy dany pionek może się poruszyć z pola A na pole B
//Jeśli może to funkcja zwraca true w przeciwnym przypadku zwracany jest false
bool emptyTileMove(int color, int xA, int yA, int xB, int yB);
bool checkPawnsMove(int color, int xA, int yA, int xB, int yB);
bool checkBishopMove(int color, int xA, int yA, int xB, int yB);
bool checkKnightMove(int color, int xA, int yA, int xB, int yB);
bool checkRookMove(int color, int xA, int yA, int xB, int yB);
bool checkQueenMove(int color, int xA, int yA, int xB, int yB);
bool checkKingMove(int color, int xA, int yA, int xB, int yB);

//performMove przyjmuje informacje o ruchy który trzeba wykonać.
//sprawdzi za pomocą powyższych funkcji ckeckXYZMove(...) czy ruch może zostać wykonany
//jeśli można go wykonać, to stan planszy zostanie zaktualizowany i zwrócony zostanie true
bool performMove(int xA, int yA, int xB, int yB);

//Funkcja sprawdza planszę i zwraca informacje o ewentualnym końcu gry
// 0 - Nikt nie wygrał
// 1 - Wygrał gracz który jest identyfikowany przez zmienną 'color'
// 2 - Pat aka remis
int checkWinCondition(int color);
