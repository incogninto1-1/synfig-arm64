# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2004-2008 Rodney Dawes <dobey.pwns@gmail.com>
#
# This file may be copied and used freely without restrictions.  It may
# be used in projects which are not available under a GNU Public License,
# but which still want to provide support for the GNU gettext functionality.
#
# - Modified by Owen Taylor <otaylor@redhat.com> to use GETTEXT_PACKAGE
#   instead of PACKAGE and to look for po2tbl in ./ not in intl/
#
# - Modified by jacob berkman <jacob@ximian.com> to install
#   Makefile.in.in and po2tbl.sed.in for use with glib-gettextize
#
# - Modified by Rodney Dawes <dobey.pwns@gmail.com> for use with intltool
#
# We have the following line for use by intltoolize:
# INTLTOOL_MAKEFILE

GETTEXT_PACKAGE = synfig
PACKAGE = synfig
VERSION = 1.5.1

SHELL = /bin/sh

srcdir = /home/incogninto1-1/synfig/synfig-core/po
top_srcdir = /home/incogninto1-1/synfig/synfig-core
top_builddir = ..
VPATH = /home/incogninto1-1/synfig/synfig-core/po

prefix = /home/incogninto1-1/synfig/_production/build
exec_prefix = ${prefix}
datadir = ${datarootdir}
datarootdir = ${prefix}/share
libdir = ${exec_prefix}/lib
localedir = ${datarootdir}/locale
subdir = po
install_sh = ${SHELL} /home/incogninto1-1/synfig/synfig-core/config/install-sh
# Automake >= 1.8 provides /usr/bin/mkdir -p.
# Until it can be supposed, use the safe fallback:
mkdir_p = $(install_sh) -d

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

GMSGFMT = /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = /usr/bin/xgettext
INTLTOOL_UPDATE = /usr/bin/intltool-update
INTLTOOL_EXTRACT = /usr/bin/intltool-extract
MSGMERGE = INTLTOOL_EXTRACT="$(INTLTOOL_EXTRACT)" XGETTEXT="$(XGETTEXT)" srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --dist
GENPOT   = INTLTOOL_EXTRACT="$(INTLTOOL_EXTRACT)" XGETTEXT="$(XGETTEXT)" srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --pot

ALL_LINGUAS = 

PO_LINGUAS=$(shell if test -r $(srcdir)/LINGUAS; then grep -v "^\#" $(srcdir)/LINGUAS; else echo "$(ALL_LINGUAS)"; fi)

USER_LINGUAS=$(shell if test -n "$(LINGUAS)"; then LLINGUAS="$(LINGUAS)"; ALINGUAS="$(ALL_LINGUAS)"; for lang in $$LLINGUAS; do if test -n "`grep \^$$lang$$ $(srcdir)/LINGUAS 2>/dev/null`" -o -n "`echo $$ALINGUAS|tr ' ' '\n'|grep \^$$lang$$`"; then printf "$$lang "; fi; done; fi)

USE_LINGUAS=$(shell if test -n "$(USER_LINGUAS)" -o -n "$(LINGUAS)"; then LLINGUAS="$(USER_LINGUAS)"; else if test -n "$(PO_LINGUAS)"; then LLINGUAS="$(PO_LINGUAS)"; else LLINGUAS="$(ALL_LINGUAS)"; fi; fi; for lang in $$LLINGUAS; do printf "$$lang "; done)

POFILES=$(shell LINGUAS="$(PO_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.po "; done)

DISTFILES = Makefile.in.in POTFILES.in $(POFILES)
EXTRA_DISTFILES = ChangeLog POTFILES.skip Makevars LINGUAS

POTFILES = \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_freetype/lyr_freetype.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_freetype/lyr_freetype.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_freetype/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/bevel.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/bevel.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/booleancurve.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/booleancurve.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/clamp.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/clamp.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/curvewarp.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/curvewarp.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/freetime.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/import.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/import.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/insideout.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/insideout.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/julia.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/julia.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/mandelbrot.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/mandelbrot.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/rotate.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/rotate.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/shade.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/shade.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/sphere_distort.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/sphere_distort.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/stretch.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/stretch.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/stroboscope.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/stroboscope.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/supersample.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/supersample.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/timeloop.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/timeloop.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/translate.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/translate.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/twirl.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/twirl.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/perspective.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/perspective.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/xorpattern.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/xorpattern.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/zoom.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/lyr_std/zoom.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_bmp/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_bmp/mptr_bmp.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_bmp/mptr_bmp.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_bmp/trgt_bmp.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_bmp/trgt_bmp.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_dv/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_dv/trgt_dv.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_dv/trgt_dv.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_example/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_example/metaballs.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_example/metaballs.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_example/simplecircle.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_example/simplecircle.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ffmpeg/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ffmpeg/mptr_ffmpeg.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ffmpeg/mptr_ffmpeg.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ffmpeg/trgt_ffmpeg.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ffmpeg/trgt_ffmpeg.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/blur.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/blur.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/colorcorrect.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/colorcorrect.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/halftone.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/halftone.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/halftone2.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/halftone2.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/halftone3.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/halftone3.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/lumakey.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/lumakey.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/radialblur.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_filter/radialblur.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/advanced_outline.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/advanced_outline.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/checkerboard.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/checkerboard.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/circle.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/circle.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/outline.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/outline.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/rectangle.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/rectangle.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/region.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/region.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/star.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_geometry/star.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gif/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gif/trgt_gif.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gif/trgt_gif.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/conicalgradient.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/conicalgradient.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/curvegradient.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/curvegradient.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/lineargradient.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/lineargradient.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/radialgradient.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/radialgradient.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/spiralgradient.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_gradient/spiralgradient.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_imagemagick/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_imagemagick/mptr_imagemagick.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_imagemagick/mptr_imagemagick.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_imagemagick/trgt_imagemagick.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_imagemagick/trgt_imagemagick.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_jpeg/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_jpeg/mptr_jpeg.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_jpeg/mptr_jpeg.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_jpeg/trgt_jpeg.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_jpeg/trgt_jpeg.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_libavcodec/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_libavcodec/mptr.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_libavcodec/mptr.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_libavcodec/trgt_av.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_libavcodec/trgt_av.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_magickpp/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_magickpp/trgt_magickpp.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_magickpp/trgt_magickpp.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_mng/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_mng/trgt_mng.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_mng/trgt_mng.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/distort.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/distort.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/noise.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/noise.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/random_noise.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/random_noise.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/valuenode_random.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_noise/valuenode_random.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_openexr/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_openexr/mptr_openexr.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_openexr/mptr_openexr.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_openexr/trgt_openexr.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_openexr/trgt_openexr.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_particle/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_particle/plant.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_particle/plant.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_particle/random.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_particle/random.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_png/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_png/mptr_png.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_png/mptr_png.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_png/trgt_png.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_png/trgt_png.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_png/trgt_png_spritesheet.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_png/trgt_png_spritesheet.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ppm/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ppm/mptr_ppm.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ppm/mptr_ppm.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ppm/trgt_ppm.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_ppm/trgt_ppm.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_svg/layer_svg.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_svg/layer_svg.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_svg/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_svg/svg_parser.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_svg/svg_parser.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_yuv420p/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_yuv420p/trgt_yuv.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mod_yuv420p/trgt_yuv.h \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mptr_mplayer/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mptr_mplayer/mptr_mplayer.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/modules/mptr_mplayer/mptr_mplayer.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/activepoint.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/activepoint.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/angle.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/base_types.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/base_types.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/blinepoint.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/blinepoint.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/blur.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/blur.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/bone.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/bone.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/boneweightpair.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/canvas.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/canvas.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/canvasbase.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/color.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/context.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/context.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/curve_helper.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/curve_helper.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/curveset.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/curveset.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/distance.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/distance.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/exception.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/exception.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filecontainer.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filecontainer.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filecontainerzip.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filecontainerzip.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filesystem.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filesystem.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filesystemgroup.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filesystemgroup.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filesystemnative.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/filesystemnative.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/general.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/gradient.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/gradient.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/guid.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/guid.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/guidset.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/importer.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/importer.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/interpolation.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/keyframe.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/keyframe.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layer.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layer.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_bitmap.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_bitmap.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_composite.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_composite.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_duplicate.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_duplicate.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_filtergroup.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_group.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_mime.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_mime.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_motionblur.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_motionblur.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_pastecanvas.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_pastecanvas.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_polygon.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_polygon.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_shape.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_shape.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_skeleton.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_skeleton.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_skeletondeformation.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_skeletondeformation.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_solidcolor.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_solidcolor.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_sound.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_sound.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_switch.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/layers/layer_switch.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/listimporter.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/listimporter.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/loadcanvas.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/loadcanvas.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/main.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/matrix.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/matrix.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/module.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/module.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/node.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/node.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/palette.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/palette.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/paramdesc.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/paramdesc.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/pch.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/polynomial_root.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/polynomial_root.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/protocol.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/quick_rng.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/real.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/rect.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/rect.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/renddesc.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/renddesc.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/render.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/render.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/rendering/opengl/renderergl.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/rendering/software/rendererdraftsw.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/rendering/software/rendererlowressw.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/rendering/software/renderersafe.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/rendering/software/renderersw.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/rendering/software/rendererpreviewsw.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/savecanvas.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/savecanvas.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/segment.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/smartfile.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/string.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/surface.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/surface.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/synfig.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/synfig_iterations.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/synfig_iterations.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_multi.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_multi.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_null.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_null.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_null_tile.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_null_tile.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_scanline.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_scanline.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_tile.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/target_tile.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/time.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/time.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/timepointcollect.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/timepointcollect.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/token.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/transform.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/transform.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/types.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/uniqueid.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/uniqueid.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/value.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/value.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenode.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenode.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenode_registry.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_add.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_add.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_and.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_and.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_anglestring.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_anglestring.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_animated.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_animated.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_animatedfile.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_animatedinterface.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_atan2.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_atan2.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_average.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_average.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_bline.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_bline.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_blinecalctangent.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_blinecalctangent.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_blinecalcvertex.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_blinecalcvertex.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_blinecalcwidth.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_blinecalcwidth.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_blinereversetangent.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_blinereversetangent.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_bone.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_bone.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_boneinfluence.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_boneinfluence.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_bonelink.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_bonelink.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_boneweightpair.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_boneweightpair.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_compare.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_compare.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_composite.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_composite.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_const.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_const.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_cos.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_cos.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_derivative.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_derivative.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_dilist.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_dilist.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_dotproduct.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_dotproduct.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_duplicate.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_duplicate.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_dynamic.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_dynamic.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_dynamiclist.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_dynamiclist.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_exp.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_exp.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_gradientcolor.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_gradientcolor.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_gradientrotate.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_gradientrotate.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_greyed.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_greyed.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_integer.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_integer.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_intstring.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_intstring.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_join.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_join.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_linear.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_linear.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_log.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_log.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_modulo.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_modulo.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_not.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_not.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_or.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_or.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_pow.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_pow.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_radialcomposite.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_radialcomposite.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_range.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_range.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_real.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_real.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_realstring.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_realstring.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_reciprocal.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_reciprocal.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_reference.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_reference.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_repeat_gradient.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_repeat_gradient.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_reverse.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_reverse.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_scale.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_scale.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_segcalctangent.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_segcalctangent.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_segcalcvertex.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_segcalcvertex.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_sine.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_sine.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_staticlist.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_staticlist.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_step.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_step.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_stripes.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_stripes.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_subtract.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_subtract.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_switch.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_switch.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_timedswap.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_timedswap.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_timeloop.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_timeloop.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_timestring.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_timestring.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_twotone.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_twotone.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_vectorangle.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_vectorangle.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_vectorlength.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_vectorlength.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_vectorx.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_vectorx.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_vectory.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_vectory.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_weightedaverage.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_weightedaverage.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_wplist.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuenodes/valuenode_wplist.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valueoperations.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valueoperations.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/valuetransformation.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/vector.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/version.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/waypoint.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/waypoint.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/weightedvalue.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/widthpoint.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/widthpoint.h \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/zstreambuf.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/synfig/zstreambuf.h \
	/home/incogninto1-1/synfig/synfig-core/src/tool/definitions.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/tool/main.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/tool/joblistprocessor.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/tool/optionsprocessor.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/tool/printing_functions.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/tool/progress.h \
	/home/incogninto1-1/synfig/synfig-core/src/tool/renderprogress.cpp \
	/home/incogninto1-1/synfig/synfig-core/src/tool/renderprogress.h

CATALOGS=$(shell LINGUAS="$(USE_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.gmo "; done)

.SUFFIXES:
.SUFFIXES: .po .pox .gmo .mo .msg .cat

AM_DEFAULT_VERBOSITY = 0
INTLTOOL_V_MSGFMT = $(INTLTOOL__v_MSGFMT_$(V))
INTLTOOL__v_MSGFMT_= $(INTLTOOL__v_MSGFMT_$(AM_DEFAULT_VERBOSITY))
INTLTOOL__v_MSGFMT_0 = @echo "  MSGFMT" $@;

.po.pox:
	$(MAKE) $(GETTEXT_PACKAGE).pot
	$(MSGMERGE) $* $(GETTEXT_PACKAGE).pot -o $*.pox

.po.mo:
	$(INTLTOOL_V_MSGFMT)$(MSGFMT) -o $@ $<

.po.gmo:
	$(INTLTOOL_V_MSGFMT)file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && gencat $@ $*.msg


all: all-yes

all-yes: $(CATALOGS)
all-no:

$(GETTEXT_PACKAGE).pot: $(POTFILES)
	$(GENPOT)

install: install-data
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  dir=$(DESTDIR)$(localedir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $$dir; \
	  if test -r $$lang.gmo; then \
	    $(INSTALL_DATA) $$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $$lang.gmo as $$dir/$(GETTEXT_PACKAGE).mo"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $(srcdir)/$$lang.gmo as" \
		 "$$dir/$(GETTEXT_PACKAGE).mo"; \
	  fi; \
	  if test -r $$lang.gmo.m; then \
	    $(INSTALL_DATA) $$lang.gmo.m $$dir/$(GETTEXT_PACKAGE).mo.m; \
	    echo "installing $$lang.gmo.m as $$dir/$(GETTEXT_PACKAGE).mo.m"; \
	  else \
	    if test -r $(srcdir)/$$lang.gmo.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$lang.gmo.m \
		$$dir/$(GETTEXT_PACKAGE).mo.m; \
	      echo "installing $(srcdir)/$$lang.gmo.m as" \
		   "$$dir/$(GETTEXT_PACKAGE).mo.m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done

# Empty stubs to satisfy archaic automake needs
dvi info ctags tags CTAGS TAGS ID:

# Define this as empty until I found a useful application.
install-exec installcheck:

uninstall:
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo.m; \
	done

check: all $(GETTEXT_PACKAGE).pot
	rm -f missing notexist
	srcdir=$(srcdir) $(INTLTOOL_UPDATE) -m
	if [ -r missing -o -r notexist ]; then \
	  exit 1; \
	fi

mostlyclean:
	rm -f *.pox $(GETTEXT_PACKAGE).pot *.old.po cat-id-tbl.tmp
	rm -f .intltool-merge-cache

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES stamp-it
	rm -f *.mo *.msg *.cat *.cat.m *.gmo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f Makefile.in.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: $(DISTFILES)
	dists="$(DISTFILES)"; \
	extra_dists="$(EXTRA_DISTFILES)"; \
	for file in $$extra_dists; do \
	  test -f $(srcdir)/$$file && dists="$$dists $(srcdir)/$$file"; \
	done; \
	for file in $$dists; do \
	  test -f $$file || file="$(srcdir)/$$file"; \
	  ln $$file $(distdir) 2> /dev/null \
	    || cp -p $$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(GETTEXT_PACKAGE).pot
	tmpdir=`pwd`; \
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  echo "$$lang:"; \
	  result="`$(MSGMERGE) -o $$tmpdir/$$lang.new.po $$lang`"; \
	  if $$result; then \
	    if cmp $(srcdir)/$$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	      rm -f $$tmpdir/$$lang.new.po; \
            else \
	      if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	        :; \
	      else \
	        echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	        rm -f $$tmpdir/$$lang.new.po; \
	        exit 1; \
	      fi; \
	    fi; \
	  else \
	    echo "msgmerge for $$lang.gmo failed!"; \
	    rm -f $$tmpdir/$$lang.new.po; \
	  fi; \
	done

Makefile POTFILES: stamp-it
	@if test ! -f $@; then \
	  rm -f stamp-it; \
	  $(MAKE) stamp-it; \
	fi

stamp-it: Makefile.in.in $(top_builddir)/config.status POTFILES.in
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/Makefile.in CONFIG_HEADERS= CONFIG_LINKS= \
	       $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
