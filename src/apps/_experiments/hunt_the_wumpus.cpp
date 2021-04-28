
#include "./apps/_experiments/hunt_the_wumpus.h"

#include <gfx_util.h>
#include <osw_app.h>
#include <osw_hal.h>
// define global scope variables


void OswAppWumpusHunt::setup(OswHal* hal) {
  // this is where you initialise code, gets called when this app is shown
}

void OswAppWumpusHunt::loop(OswHal* hal) {
  // This section of the code is where you can write code that will loop.


  // Here you can execute code on a button press. For this example I am changing the value of a variable.


  hal->requestFlush();  // request the screen to be updated. refreshrate is handled by main loop
}

void OswAppWumpusHunt::stop(OswHal* hal) {
  // this is where you de-initialize stuff, gets called when another app is shown
}


class Room{
    public:
    int room_num;
    bool has_bat;
    bool has_pit;
    bool has_monster;

};