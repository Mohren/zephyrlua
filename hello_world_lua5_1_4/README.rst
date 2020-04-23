.. _hello_world:

Adapted "Hello World" from Zephyr samples:
Approach to run a Lua Interpreter under Zephyr.

Whole Lua src got included in CMakeLists.txt as one big library.

++++++++++++++++++++++++
Changes to original Lua 5.1.4 source:

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

