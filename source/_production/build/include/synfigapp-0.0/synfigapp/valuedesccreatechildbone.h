/* === S Y N F I G ========================================================= */
/*!	\file valuedesccreatechildbone.h
**	\brief Template File
**
**	\legal
**  Copyright (c) 2013 Ivan Mahonin
**  Copyright (c) 2020 Aditya Abhiram J
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

#ifndef __SYNFIG_APP_ACTION_VALUEDESCCREATECHILDBONE_H
#define __SYNFIG_APP_ACTION_VALUEDESCCREATECHILDBONE_H

/* === H E A D E R S ======================================================= */

#include <synfigapp/action.h>
#include <synfigapp/value_desc.h>
#include <synfig/valuenode.h>
#include <synfig/valuenodes/valuenode_dynamiclist.h>
#include <synfig/layers/layer_skeleton.h>
#include <synfig/canvas.h>
#include <list>

/* === M A C R O S ========================================================= */

/* === T Y P E D E F S ===================================================== */

/* === C L A S S E S & S T R U C T S ======================================= */

namespace synfigapp {

namespace Action {

class ValueDescCreateChildBone :
	public Super
{
private:
	ValueDesc value_desc;
	synfig::ValueNode::Handle prev_active_bone;
	synfig::Time time;
	synfig::ValueBase origin,angle,scalelx,width,tipwidth;
	bool c_parent;
	bool c_active_bone;


public:

	ValueDescCreateChildBone();

	static ParamVocab get_param_vocab();
	static bool is_candidate(const ParamList &x);

	virtual bool set_param(const synfig::String& name, const Param &);
	virtual bool is_ready()const;

	virtual void prepare();

	ACTION_MODULE_EXT
};

}; // END of namespace action
}; // END of namespace studio

/* === E N D =============================================================== */

#endif
