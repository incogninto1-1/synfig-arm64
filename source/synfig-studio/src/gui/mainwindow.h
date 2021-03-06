/* === S Y N F I G ========================================================= */
/*!	\file mainwindow.h
**	\brief MainWindow
**
**	\legal
**	......... ... 2013 Ivan Mahonin
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

#ifndef __SYNFIG_STUDIO_MAINWINDOW_H
#define __SYNFIG_STUDIO_MAINWINDOW_H

/* === H E A D E R S ======================================================= */

#include <gtkmm/actiongroup.h>
#include <gtkmm/window.h>
#include <synfig/string.h>

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace studio {
	class Dockable;
	class DockBook;

	class MainWindow: public Gtk::Window
	{
	private:
		Gtk::Bin *bin_;
		DockBook *main_dock_book_;
		Glib::RefPtr<Gtk::ActionGroup> window_action_group;

		//! Constructor Helper - Initializes all of the menus
		void init_menus();

		//! Mandatory for constructing custom widgets from GTKBuilder files
		void register_custom_widget_types();

		static void show_dialog_input();
		void on_recent_files_changed();
		void on_custom_workspaces_changed();
		void on_dockable_registered(Dockable* dockable);
		void on_dockable_unregistered(Dockable* dockable);
		void toggle_show_menubar();
		void toggle_show_toolbar();

		guint save_workspace_merge_id;
		guint custom_workspaces_merge_id;

		void add_custom_workspace_menu_item_handlers();
		void remove_custom_workspace_menu_item_handlers();

	protected:
		virtual bool on_key_press_event(GdkEventKey *key_event);

	public:
		MainWindow();
		virtual ~MainWindow();

		Gtk::Bin& root() { return *bin_; }
		const Gtk::Bin& root() const { return *bin_; }

		DockBook& main_dock_book() { return *main_dock_book_; }
		const DockBook& main_dock_book() const { return *main_dock_book_; }

		static void make_short_filenames(
			const std::vector<synfig::String> &fullnames,
			std::vector<synfig::String> &shortnames );
	};
}; // END of namespace studio

/* === E N D =============================================================== */

#endif
