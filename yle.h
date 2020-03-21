#include <stdio.h>
#define ROWS 28
#define COLS 97
#define FOREGROUND_YELLOW  "\x1b[33m"
char mat[ROWS][COLS] = 
{
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,39,32,46,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,39,32,32,46,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,32,46,58,58,44,32,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,46,32,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,64,64,64,64,64,64,64,64,58,58,58,58,58,58,58,58,58,58,58,64,64,64,64,64,64,64,64,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,46,32,58,58,58,39,32,58,58,58,58,64,64,64,64,64,32,46,32,32,32,32,32,64,64,64,64,64,58,58,58,58,58,64,64,64,64,64,32,32,32,46,32,32,32,64,64,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,44,32,39,46,58,58,58,58,58,64,64,64,46,32,32,32,32,32,32,32,46,32,32,32,32,32,64,64,64,58,64,64,64,32,32,32,46,32,32,32,32,32,32,32,46,32,32,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,39,32,46,58,58,58,58,58,58,58,64,64,64,32,32,32,46,32,32,32,46,32,32,32,46,32,32,32,46,32,32,64,46,32,32,32,46,32,32,32,46,32,32,32,46,32,32,32,46,32,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,32,46,32,46,32,46,32,32,32,46,32,46,32,46,32,32,32,46,32,46,32,46,32,32,32,46,32,46,32,46,32,32,32,46,32,46,32,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,32,46,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,32,46,32,46,32,58,32,46,32,46,32,58,32,42,42,42,42,58,32,46,42,42,42,42,32,46,32,46,32,58,32,46,32,46,32,58,32,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,32,58,32,46,46,46,32,58,32,46,46,42,42,32,32,32,32,42,32,32,32,32,42,42,32,58,32,46,46,46,32,58,32,46,46,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,46,32,46,58,46,32,46,58,46,32,42,42,32,32,32,32,32,32,32,32,32,42,42,58,46,32,46,58,46,32,46,58,46,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,58,46,46,46,58,46,46,46,58,46,42,42,32,32,32,32,32,32,32,42,42,46,46,46,58,46,46,46,58,46,46,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,64,58,46,58,46,58,46,58,46,58,42,42,32,32,32,42,42,58,46,58,46,58,46,58,46,58,64,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,32,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,64,58,58,58,46,58,58,58,46,58,42,58,46,58,58,58,46,58,58,58,64,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,46,32,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,64,124,58,46,58,124,58,46,58,124,58,46,58,124,64,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,32,58,58,58,58,46,32,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,64,124,58,124,58,124,58,124,64,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,32,58,58,58,58,46,32,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,64,33,124,33,64,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,32,58,58,58,58,58,32,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,64,33,64,64,58,58,58,58,58,58,58,58,58,58,58,58,58,58,39,32,96,58,58,58,58,32,58,58,58,58,58,32,58,58,58,58,58,32,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,64,58,58,58,58,58,58,58,58,58,58,58,58,32,58,58,58,32,46,58,46,96,58,58,58,32,58,58,58,58,58,32,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,46,32,96,58,58,32,58,58,58,32,58,58,58,46,32,58,58,58,32,58,58,58,32,32,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,46,32,96,32,58,58,58,32,58,58,58,58,58,32,58,58,58,46,32,32,46,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,32,58,58,58,46,32,58,58,58,58,32,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,32,58,58,58,58,58,46,96,39,39,46,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,32,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,32,32,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58},
    {58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58}
};