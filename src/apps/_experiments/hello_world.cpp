
#include "./apps/_experiments/hello_world.h"

#include <gfx_util.h>
#include <osw_app.h>
#include <osw_hal.h>
// define global scope variables
bool red = false;
bool blue=false;
void OswAppHelloWorld::setup(OswHal* hal) {
  // this is where you initialise code, gets called when this app is shown
}

void OswAppHelloWorld::loop(OswHal* hal) {
  // This section of the code is where you can write code that will loop.

  // Here you can execute code on a button press. For this example I am changing the value of a variable.

  if (hal->btn3Down()) {
    red = true;
  }
  if(hal->btn1Down())
  {
    blue=true;
  }

  if (hal->btn2Down()) {
    red = false;
    blue=false;
  }

  // As the variable 'red' is changed, this if loop adjusts the colour of the 'hello world' text

  if (red) {
    hal->gfx()->fill(0);
    hal->gfx()->setTextSize(2);
    hal->gfx()->setTextColor(rgb565(255, 0, 0), rgb565(0, 0, 0));  // colour changes: foreground, background
    hal->gfx()->setTextCursor(50, 120);                            // set (X,Y) coordinates for the 240x204px display
    hal->gfx()->print("Hello World");

    // set a new piece of text with different properties

    hal->gfx()->setTextCursor(160, 180);
    hal->gfx()->setTextColor(rgb565(255, 255, 255), rgb565(0, 0, 0));
    hal->gfx()->print("Off");

    hal ->gfx()->setTextCursor(40,180);
    hal->gfx()->setTextColor(rgb565(255, 255, 255), rgb565(0, 0, 0));
    hal ->gfx() -> print("Blue");

    hal->gfx()->setTextColor(rgb565(255, 255, 255), rgb565(0, 0, 0));
    hal->gfx()->setTextCursor(160, 60);
    hal->gfx()->print("Red");


  }
  else if(blue){
    hal->gfx()->fill(0);
    hal->gfx()->setTextSize(2);
    hal->gfx()->setTextColor(rgb565(0, 0, 255), rgb565(0, 0, 0));  // colour changes: foreground, background
    hal->gfx()->setTextCursor(50, 120);                            // set (X,Y) coordinates for the 240x204px display
    hal->gfx()->print("Hello World");

    // set a new piece of text with different properties

    hal->gfx()->setTextCursor(160, 180);
    hal->gfx()->setTextColor(rgb565(255, 255, 255), rgb565(0, 0, 0));
    hal->gfx()->print("Off");

    hal ->gfx()->setTextCursor(40,180);
    hal->gfx()->setTextColor(rgb565(255, 255, 255), rgb565(0, 0, 0));
    hal ->gfx() -> print("Blue");

    hal->gfx()->setTextColor(rgb565(255, 255, 255), rgb565(0, 0, 0));
    hal->gfx()->setTextCursor(160, 60);
    hal->gfx()->print("Red");


  }
   else {
    hal->gfx()->fill(0);
    hal->gfx()->setTextSize(2);
    hal->gfx()->setTextColor(rgb565(255, 255, 255), rgb565(0, 0, 0));
    hal->gfx()->setTextCursor(50, 120);

    hal->gfx()->print("Hello World ");
    hal->gfx()->setTextCursor(160, 180);
    hal->gfx()->print("Off");

    hal->gfx()->setTextCursor(160, 60);
    hal->gfx()->print("Red");
  }
  hal->requestFlush();  // request the screen to be updated. refreshrate is handled by main loop
}

void OswAppHelloWorld::stop(OswHal* hal) {
  // this is where you de-initialize stuff, gets called when another app is shown
}
