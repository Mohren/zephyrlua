/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>

#include <stdio.h>

#include "lua.h"
#include "lauxlib.h"

#include "lualib.h"


int main(void)
{
printk("Hello Home");
 lua_State *L=lua_open();
printk("lua_open");
luaL_openlibs(L); 
printk("luaL_openlibs");
 lua_close(L);
printk("Bye");
 return 0;
}
