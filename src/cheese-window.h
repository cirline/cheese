/*
 * Copyright © 2007,2008 daniel g. siegel <dgsiegel@gmail.com>
 *
 * Licensed under the GNU General Public License Version 2
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __CHEESE_WINDOW_H__
#define __CHEESE_WINDOW_H__

#include <gtk/gtk.h>
#include "cheese-dbus.h"


void cheese_window_init (char *hal_dev_udi, CheeseDbus *dbus_server);
void cheese_window_bring_to_front (gpointer data);

#endif /* __CHEESE_WINDOW_H__ */