.. _hello_world:

Adapted "Hello World" from Zephyr samples:
Approach to run a Lua Interpreter under Zephyr.

Whole Lua src got included in CMakeLists.txt as one big library.

++++++++++++++++++++++++
Changes to original Lua source:

++++++++++++++++++++++++

#
main.c instead of lua.c is the target source

#
linit.c:
To use "luaL_openlibs" in main.c:
os and io libs don't get loaded.
Reason:
If io lib gets loaded: linker error "undefined reference to `_unlink'"
If os lib gets loaded: linker error "undefined reference to `_times'" and "undefined reference to `_link'"

#
ltablib.c:
The function "static unsigned int l_randomizePivot (void)"
got changed to 
  clock_t c = 0;//clock();
  time_t t = 0;//time(NULL);
and <time.h> doesn't get included because otherwise the linker error "undefined reference to `_times'" also appears.

#
Functions from lstate.c (whole file) and lauxlib.c got copied to main.c (these functions /sections got marked there)
