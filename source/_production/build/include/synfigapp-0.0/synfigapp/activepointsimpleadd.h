/* === S Y N F I G ========================================================= */
/*!	\file activepointsimpleadd.h
**	\brief A simple add a activepoint function Header
**
**	\legal
**	Copyright (c) 2004 Adrian Bentley
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

#ifndef __SYNFIG_ACTIVEPOINTSIMPLEADD_H
#define __SYNFIG_ACTIVEPOINTSIMPLEADD_H

/* === H E A D E R S ======================================================= */

#include <synfigapp/action.h>
#include <synfig/activepoint.h>
#include <synfig/valuenodes/valuenode_dynamiclist.h>

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace synfigapp {

class Instance;

namespace Action {

class ActivepointSimpleAdd :
	public Undoable,
	public CanvasSpecific
{
private:

	synfig::ValueNode_DynamicList::Handle value_node;
	int	index;

	synfig::Activepoint activepoint;

	bool time_overwrite;
	synfig::Activepoint overwritten_ap;

public:

	ActivepointSimpleAdd();

	static ParamVocab get_param_vocab();
	static bool is_candidate(const ParamList &x);

	virtual bool set_param(const synfig::String& name, const Param &);
	virtual bool is_ready()const;

	virtual void perform();
	virtual void undo();

	ACTION_MODULE_EXT
};

}; // END of namespace action
}; // END of namespace studio

/* === E N D =============================================================== */

#endif
