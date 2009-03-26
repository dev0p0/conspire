/* Conspire
 * Copyright (C) 2009 William Pitcock
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifndef __LIBCONSPIRE__COMMON__FORMAT__H__GUARD
#define __LIBCONSPIRE__COMMON__FORMAT__H__GUARD

typedef struct {
	char *key;
	char *format;
	int args;
} Formatter;

Formatter *formatter_register(char *key, char *format, int args);
char *formatter_process(char *key, ...);
void formatter_remove(char *key);

#endif
