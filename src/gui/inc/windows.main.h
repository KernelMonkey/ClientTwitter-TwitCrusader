/*
 *	TwitCrusader - Twitter Client For Linux Desktop
 *		Copyright (C) 2011  TwitCrusader Team
 *
 *		This program is free software: you can redistribute it and/or modify
 *		it under the terms of the GNU General Public License as published by
 *		the Free Software Foundation, either version 3 of the License, or
 *		(at your option) any later version.
 *
 *		This program is distributed in the hope that it will be useful,
 *		but WITHOUT ANY WARRANTY; without even the implied warranty of
 *		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *		GNU General Public License for more details.
 *
 *		You should have received a copy of the GNU General Public License
 *		along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *
 *		WebSite: http://www.twitcrusader.org/
 * 		Development Guidelines: http://dev.twitcrusader.org/
 * 
 *		Follow on Twitter: @teamtwc
 * 		IRC: chat.freenode.net at #teamtwc
 * 		E-mail: teamtwc@twitcrusader.org
 * 
 */
 
/* Define */
#ifndef WINDOWMAIN_H

/* Default Define */ 
#define WINDOWMAIN_H
/* CharSet */ 
#define MY_ENCODING "ISO-8859-1"

/* Fix: GCC Linux Compiler */ 
#define _GNU_SOURCE	

/* Headers */
#include <gtk/gtk.h>
#include <glib.h>
#include <pthread.h>
#include <gdk/gdkkeysyms.h>

/* Define Function */
int GtkWindowMain();
GtkWidget* GtkWindowMainCreate();
GtkWidget* GtkMenuItemCreate(GtkWidget* menu, const gchar const* title, const gchar const* imagePath);
GtkWidget* GtkMenuCreate(GtkWidget* menuBar, const gchar const* name);
GtkWidget* GtkMenuBarCreate();
GtkWidget* GtkStatusBarCreate();
GtkWidget* GtkScrollingCreate();
GtkWidget* GtkCountTweetCreate();
GtkWidget* GtkTextAreaCreate();
GtkWidget* GtkTimeLineToolBarCreate();

/* Default End of WINDOWMAIN_H */ 
#endif
