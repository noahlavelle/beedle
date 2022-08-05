#include <stdio.h>
#include <stdbool.h>

#include "config.h"

/**
 * Container for function used to update the value of a bar block
 * @return the new block value
**/
typedef const char* (*GetModuleValue)();
/**
 * Container for function used to update tray icon
**/
typedef const char* (*GetTrayIcon)();
/**
 * Container for function run when a tray clickable block is clicked
**/
typedef void (*ClickAction)();
/**
 * Container for function run when a tray icon is clicked
 * e.g muting audio, connecting to vpn, running program
 * @return new tray icon (used to update the icon after performing an action such as muting)
**/
typedef char (*TrayClickAction)();

/** @struct Block
 *  @breif hold all information for a single bar block
 *  @var Block::signal stores the signal number assigned to the block,
 *  used to update it (e.g called from hook)
 *  @var Block::value pointer to the update function, returning the new block value
 *  @var Block::alt backup text if the value cannot be loaded (e.g script faliure)
 *
**/
typedef struct {
    char icon;
    int interval;
    int signal;
    char* color[6];
    GetModuleValue value;
    char* alt[16];
} Block;

/** @struct ClickableBlock
 *  @breif bar block with a click action
 *  @var ClickableBlock::block bar block object that is displayed
 *  @var ClickableBlock::action pointer to the action function, called when the
 *  block is clicked
**/
typedef struct {
    Block block;
    ClickAction action;
} ClickableBlock;

/** @struct Tray
 *  @breif single icon with a click action
 *  @var Tray::signal stores the signal number assigned to the block,
 *  used to update it (e.g called from hook)
 *  @var Tray::action pointer to the action function, called when the tray is
 *  clicked and updates the tray icon immediately
**/
typedef struct {
    char icon;
    int interval;
    int signal;
    TrayClickAction action;
} Tray;

int main(int argc, char *argv[]) {
    /** TODO:
     *  Add logic for drawing bar modules
     *  Allow users to create their own bars from config.h
     *  Add logic for update functions
     *  Add logic for updating on interval
     *  Add logic for updating by signal
     *  Add logic for click actions (special handling for creating windows (e.g should they float or tile))
     *  Add logic for tray icons
    **/
}
