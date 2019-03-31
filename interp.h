/*
 * Copyright (C) 2019 Jan-Piet Mens <jp@mens.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _INTERP_H_
# define _INTERP_H_

#include <lua.h>
#include "json.h"


struct luadata {
	char *script;			/* Path to Lua script in --lua-script  */
	lua_State *L;			/* The Lua machine */
};

struct luadata *interp_init(char *luascript);
void interp_exit(struct luadata *, char *reason);
char *interp_print(struct luadata *luad, char *fmtfunc, char *topic, JsonNode *json);

#endif