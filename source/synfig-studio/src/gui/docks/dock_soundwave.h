/* === S Y N F I G ========================================================= */
/*!	\file docks/dock_soundwave.h
**	\brief Dock for display a user-configurable Widget_SoundWave
**
**	\legal
**	Copyright (c) 2002-2005 Robert B. Quattlebaum Jr., Adrian Bentley
**	......... ... 2019 Rodolfo Ribeiro Gomes
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

#ifndef SYNFIG_STUDIO_DOCK_SOUNDWAVE_H
#define SYNFIG_STUDIO_DOCK_SOUNDWAVE_H

#include <gtkmm/grid.h>
#include <gtkmm/scrollbar.h>

#include <gui/docks/dock_canvasspecific.h>
#include <gui/widgets/widget_canvastimeslider.h>
#include <gui/widgets/widget_keyframe_list.h>

namespace studio {

class Grid_SoundWave;

class Dock_SoundWave : public Dock_CanvasSpecific
{
public:
	Dock_SoundWave();

protected:
	virtual void init_canvas_view_vfunc(etl::loose_handle<CanvasView> canvas_view);
	virtual void changed_canvas_view_vfunc(etl::loose_handle<CanvasView> canvas_view);

	void on_drop_drag_data_received(
			const Glib::RefPtr<Gdk::DragContext>& context, int, int,
			const Gtk::SelectionData& selection_data, guint, guint time);

private:
	std::mutex mutex;

	Gtk::Grid grid;

	Widget_Keyframe_List widget_kf_list;
	Widget_CanvasTimeslider widget_timeslider;
	Grid_SoundWave *current_grid_sound;
	Gtk::Scrollbar vscrollbar;
	Gtk::Scrollbar hscrollbar;
};

}

#endif // SYNFIG_STUDIO_DOCK_SOUNDWAVE_H
