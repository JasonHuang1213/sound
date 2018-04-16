//This promgram aims to display vertical bars on the screen to sensor sound level
#define UNICODE
#define BAR "\u2590"
// constant definitions
#define ESC 0x1B
enum COLORS {BLACK=30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};

// functions prototype
void clearScreen(void);
void gotoxy(int row, int col);
void setColor(int color);
void dispBar(int col, double dB);
