
// ✨ stdio.h is a C library that provides input and output functions.
#include <stdio.h>
// ✨ nds.h is a library that provides functions for the Nintendo DS.
// currently we are using blocksds instead of libnds, you can also
// use libnds if you want, just do make -f Makefile.libnds
// but it is not tested.
#include <nds.h>
// ✨ console.h console functions of blocksds
#include <nds/arm9/console.h>
// ✨ nf_lib.h NightFox library, it is a library that provides functions
// for the Nintendo DS, it is used for the graphics of the game.
#include <nf_lib.h>
#include "renderable.hpp"

int main(int argc, char **argv)
{
    // Initialize the console on the bottom screen
    consoleDemoInit();

    printf("\nStarting game...!");

    while (1)
    {
        // Wait for the screen refresh
        swiWaitForVBlank();
    }

    // If this is reached, the program will return to the loader if the loader
    // supports it.
    return 0;
}
