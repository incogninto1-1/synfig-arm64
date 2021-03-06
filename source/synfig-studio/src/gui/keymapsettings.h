/* === S Y N F I G ========================================================= */
/*!	\file keymapsettings.h
**	\brief Defines the structures for managing key map settings
**
**	\legal
**	Copyright (c) 2002-2005 Robert B. Quattlebaum Jr., Adrian Bentley
**
**	This file is part of Synfig.
**
**	Synfig is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 2 of the License, or
**	(at your option) any later version.
**
**	Synfig is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with Synfig.  If not, see <https://www.gnu.org/licenses/>.
**	\endlegal
*/
/* ========================================================================= */

/* === S T A R T =========================================================== */

#ifndef __SYNFIG_KEYMAPSETTINGS_H
#define __SYNFIG_KEYMAPSETTINGS_H

/* === H E A D E R S ======================================================= */

#include <gtkmm/accelkey.h>
#include <gtkmm/dialog.h>

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace studio {

//a dialog for viewing and setting options, though it can also be used just as is
class KeyMapSettings : public Gtk::Dialog
{
	struct AcKeyInfo
	{
		guint				key;
		Gdk::ModifierType 	mod;

		bool				on;

		AcKeyInfo(guint k = 0, Gdk::ModifierType m = Gdk::ModifierType()):
			key(k), mod(m), on() { }
	};

	//std::map<const char *,AcKeyInfo>	pathmap; //uses string info from paths set
	//std::set<std::string>				accelpaths;

	//bool unsaved; //Assume as such...

public:

	KeyMapSettings();
	~KeyMapSettings();

	//void add_path(const char *path);

	bool set_key(const char *path, guint key, Gdk::ModifierType mod, bool replace = true);
	bool get_key(const char *path, Gtk::AccelKey *key);

	// These files must be sent a filename without extension (so the key map can be obtained)
	bool load(const char *filename);
	bool save(const char *filename);
};

}; // END of namespace studio

/* === E N D =============================================================== */

#endif
