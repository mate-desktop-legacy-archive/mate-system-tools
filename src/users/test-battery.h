/* -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/* 
 * Copyright (C) 2006 Carlos Garnacho
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Authors: Carlos Garnacho Parro <carlosg@gnome.org>.
 */

#ifndef __TEST_BATTERY_H
#define __TEST_BATTERY_H

#include "gst.h"

typedef void (*TestBattery) (gchar **primary_text, gchar **secondary_text, gpointer data);

gboolean  test_battery_run  (TestBattery *battery,
			     GtkWindow   *parent,
			     gpointer     data);

#endif /* __TEST_BATTERY_H */
