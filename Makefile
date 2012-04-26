#############################################################################
# Makefile for building: hw45.app/Contents/MacOS/hw45
# Generated by qmake (2.01a) (Qt 4.8.1) on: Mon Apr 23 20:42:44 2012
# Project:  hw45.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile hw45.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -g -gdwarf-2 -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5 -Wall -W $(DEFINES)
INCPATH       = -I/usr/local/Qt4.8/mkspecs/macx-g++ -I. -I/Library/Frameworks/QtCore.framework/Versions/4/Headers -I/usr/include/QtCore -I/Library/Frameworks/QtGui.framework/Versions/4/Headers -I/usr/include/QtGui -I/usr/include -I. -I. -F/Library/Frameworks
LINK          = g++
LFLAGS        = -headerpad_max_install_names -arch x86_64 -Xarch_x86_64 -mmacosx-version-min=10.5
LIBS          = $(SUBLIBS) -F/Library/Frameworks -L/Library/Frameworks -framework QtGui -framework QtCore 
AR            = ar cq
RANLIB        = ranlib -s
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
STRIP         = 
INSTALL_FILE  = $(COPY_FILE)
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = $(COPY_FILE)
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
export MACOSX_DEPLOYMENT_TARGET = 10.4

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = bullet.cpp \
		cannon.cpp \
		exit.cpp \
		fireice.cpp \
		gun.cpp \
		helper.cpp \
		icicle.cpp \
		key.cpp \
		launcher.cpp \
		life.cpp \
		main.cpp \
		player.cpp \
		star.cpp \
		water.cpp \
		wave.cpp moc_cannon.cpp \
		moc_fireice.cpp
OBJECTS       = bullet.o \
		cannon.o \
		exit.o \
		fireice.o \
		gun.o \
		helper.o \
		icicle.o \
		key.o \
		launcher.o \
		life.o \
		main.o \
		player.o \
		star.o \
		water.o \
		wave.o \
		moc_cannon.o \
		moc_fireice.o
DIST          = /usr/local/Qt4.8/mkspecs/common/unix.conf \
		/usr/local/Qt4.8/mkspecs/common/mac.conf \
		/usr/local/Qt4.8/mkspecs/common/gcc-base.conf \
		/usr/local/Qt4.8/mkspecs/common/gcc-base-macx.conf \
		/usr/local/Qt4.8/mkspecs/common/g++-base.conf \
		/usr/local/Qt4.8/mkspecs/common/g++-macx.conf \
		/usr/local/Qt4.8/mkspecs/qconfig.pri \
		/usr/local/Qt4.8/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Qt4.8/mkspecs/features/qt_functions.prf \
		/usr/local/Qt4.8/mkspecs/features/qt_config.prf \
		/usr/local/Qt4.8/mkspecs/features/exclusive_builds.prf \
		/usr/local/Qt4.8/mkspecs/features/default_pre.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/default_pre.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/dwarf2.prf \
		/usr/local/Qt4.8/mkspecs/features/debug.prf \
		/usr/local/Qt4.8/mkspecs/features/default_post.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/default_post.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/x86_64.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/objective_c.prf \
		/usr/local/Qt4.8/mkspecs/features/warn_on.prf \
		/usr/local/Qt4.8/mkspecs/features/qt.prf \
		/usr/local/Qt4.8/mkspecs/features/unix/thread.prf \
		/usr/local/Qt4.8/mkspecs/features/moc.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/rez.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/sdk.prf \
		/usr/local/Qt4.8/mkspecs/features/resources.prf \
		/usr/local/Qt4.8/mkspecs/features/uic.prf \
		/usr/local/Qt4.8/mkspecs/features/yacc.prf \
		/usr/local/Qt4.8/mkspecs/features/lex.prf \
		/usr/local/Qt4.8/mkspecs/features/include_source_dir.prf \
		hw45.pro
QMAKE_TARGET  = hw45
DESTDIR       = 
TARGET        = hw45.app/Contents/MacOS/hw45

####### Custom Compiler Variables
QMAKE_COMP_QMAKE_OBJECTIVE_CFLAGS = -pipe \
		-g \
		-arch \
		x86_64 \
		-Xarch_x86_64 \
		-mmacosx-version-min=10.5 \
		-Wall \
		-W


first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile hw45.app/Contents/PkgInfo hw45.app/Contents/Resources/empty.lproj hw45.app/Contents/Info.plist $(TARGET)

$(TARGET):  $(OBJECTS)  
	@$(CHK_DIR_EXISTS) hw45.app/Contents/MacOS/ || $(MKDIR) hw45.app/Contents/MacOS/ 
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: hw45.pro  /usr/local/Qt4.8/mkspecs/macx-g++/qmake.conf /usr/local/Qt4.8/mkspecs/common/unix.conf \
		/usr/local/Qt4.8/mkspecs/common/mac.conf \
		/usr/local/Qt4.8/mkspecs/common/gcc-base.conf \
		/usr/local/Qt4.8/mkspecs/common/gcc-base-macx.conf \
		/usr/local/Qt4.8/mkspecs/common/g++-base.conf \
		/usr/local/Qt4.8/mkspecs/common/g++-macx.conf \
		/usr/local/Qt4.8/mkspecs/qconfig.pri \
		/usr/local/Qt4.8/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Qt4.8/mkspecs/features/qt_functions.prf \
		/usr/local/Qt4.8/mkspecs/features/qt_config.prf \
		/usr/local/Qt4.8/mkspecs/features/exclusive_builds.prf \
		/usr/local/Qt4.8/mkspecs/features/default_pre.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/default_pre.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/dwarf2.prf \
		/usr/local/Qt4.8/mkspecs/features/debug.prf \
		/usr/local/Qt4.8/mkspecs/features/default_post.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/default_post.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/x86_64.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/objective_c.prf \
		/usr/local/Qt4.8/mkspecs/features/warn_on.prf \
		/usr/local/Qt4.8/mkspecs/features/qt.prf \
		/usr/local/Qt4.8/mkspecs/features/unix/thread.prf \
		/usr/local/Qt4.8/mkspecs/features/moc.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/rez.prf \
		/usr/local/Qt4.8/mkspecs/features/mac/sdk.prf \
		/usr/local/Qt4.8/mkspecs/features/resources.prf \
		/usr/local/Qt4.8/mkspecs/features/uic.prf \
		/usr/local/Qt4.8/mkspecs/features/yacc.prf \
		/usr/local/Qt4.8/mkspecs/features/lex.prf \
		/usr/local/Qt4.8/mkspecs/features/include_source_dir.prf \
		/Library/Frameworks/QtGui.framework/QtGui.prl \
		/Library/Frameworks/QtCore.framework/QtCore.prl
	$(QMAKE) -o Makefile hw45.pro
/usr/local/Qt4.8/mkspecs/common/unix.conf:
/usr/local/Qt4.8/mkspecs/common/mac.conf:
/usr/local/Qt4.8/mkspecs/common/gcc-base.conf:
/usr/local/Qt4.8/mkspecs/common/gcc-base-macx.conf:
/usr/local/Qt4.8/mkspecs/common/g++-base.conf:
/usr/local/Qt4.8/mkspecs/common/g++-macx.conf:
/usr/local/Qt4.8/mkspecs/qconfig.pri:
/usr/local/Qt4.8/mkspecs/modules/qt_webkit_version.pri:
/usr/local/Qt4.8/mkspecs/features/qt_functions.prf:
/usr/local/Qt4.8/mkspecs/features/qt_config.prf:
/usr/local/Qt4.8/mkspecs/features/exclusive_builds.prf:
/usr/local/Qt4.8/mkspecs/features/default_pre.prf:
/usr/local/Qt4.8/mkspecs/features/mac/default_pre.prf:
/usr/local/Qt4.8/mkspecs/features/mac/dwarf2.prf:
/usr/local/Qt4.8/mkspecs/features/debug.prf:
/usr/local/Qt4.8/mkspecs/features/default_post.prf:
/usr/local/Qt4.8/mkspecs/features/mac/default_post.prf:
/usr/local/Qt4.8/mkspecs/features/mac/x86_64.prf:
/usr/local/Qt4.8/mkspecs/features/mac/objective_c.prf:
/usr/local/Qt4.8/mkspecs/features/warn_on.prf:
/usr/local/Qt4.8/mkspecs/features/qt.prf:
/usr/local/Qt4.8/mkspecs/features/unix/thread.prf:
/usr/local/Qt4.8/mkspecs/features/moc.prf:
/usr/local/Qt4.8/mkspecs/features/mac/rez.prf:
/usr/local/Qt4.8/mkspecs/features/mac/sdk.prf:
/usr/local/Qt4.8/mkspecs/features/resources.prf:
/usr/local/Qt4.8/mkspecs/features/uic.prf:
/usr/local/Qt4.8/mkspecs/features/yacc.prf:
/usr/local/Qt4.8/mkspecs/features/lex.prf:
/usr/local/Qt4.8/mkspecs/features/include_source_dir.prf:
/Library/Frameworks/QtGui.framework/QtGui.prl:
/Library/Frameworks/QtCore.framework/QtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile hw45.pro

hw45.app/Contents/PkgInfo: 
	@$(CHK_DIR_EXISTS) hw45.app/Contents || $(MKDIR) hw45.app/Contents 
	@$(DEL_FILE) hw45.app/Contents/PkgInfo
	@echo "APPL????" >hw45.app/Contents/PkgInfo
hw45.app/Contents/Resources/empty.lproj: 
	@$(CHK_DIR_EXISTS) hw45.app/Contents/Resources || $(MKDIR) hw45.app/Contents/Resources 
	@touch hw45.app/Contents/Resources/empty.lproj
	
hw45.app/Contents/Info.plist: 
	@$(CHK_DIR_EXISTS) hw45.app/Contents || $(MKDIR) hw45.app/Contents 
	@$(DEL_FILE) hw45.app/Contents/Info.plist
	@sed -e "s,@SHORT_VERSION@,1.0,g" -e "s,@TYPEINFO@,????,g" -e "s,@ICON@,,g" -e "s,@EXECUTABLE@,hw45,g" -e "s,@TYPEINFO@,????,g" /usr/local/Qt4.8/mkspecs/macx-g++/Info.plist.app >hw45.app/Contents/Info.plist
dist: 
	@$(CHK_DIR_EXISTS) .tmp/hw451.0.0 || $(MKDIR) .tmp/hw451.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/hw451.0.0/ && $(COPY_FILE) --parents bullet.h cannon.h exit.h fireice.h gun.h helper.h icicle.h key.h launcher.h life.h player.h star.h water.h wave.h .tmp/hw451.0.0/ && $(COPY_FILE) --parents bullet.cpp cannon.cpp exit.cpp fireice.cpp gun.cpp helper.cpp icicle.cpp key.cpp launcher.cpp life.cpp main.cpp player.cpp star.cpp water.cpp wave.cpp .tmp/hw451.0.0/ && (cd `dirname .tmp/hw451.0.0` && $(TAR) hw451.0.0.tar hw451.0.0 && $(COMPRESS) hw451.0.0.tar) && $(MOVE) `dirname .tmp/hw451.0.0`/hw451.0.0.tar.gz . && $(DEL_FILE) -r .tmp/hw451.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) -r hw45.app
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_objective_c_make_all:
compiler_objective_c_clean:
compiler_moc_header_make_all: moc_cannon.cpp moc_fireice.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_cannon.cpp moc_fireice.cpp
moc_cannon.cpp: cannon.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ cannon.h -o moc_cannon.cpp

moc_fireice.cpp: player.h \
		exit.h \
		gun.h \
		cannon.h \
		bullet.h \
		water.h \
		key.h \
		wave.h \
		launcher.h \
		icicle.h \
		fireice.h
	/Developer/Tools/Qt/moc $(DEFINES) $(INCPATH) -D__APPLE__ -D__GNUC__ fireice.h -o moc_fireice.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_rez_source_make_all:
compiler_rez_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

bullet.o: bullet.cpp bullet.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o bullet.o bullet.cpp

cannon.o: cannon.cpp cannon.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cannon.o cannon.cpp

exit.o: exit.cpp exit.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o exit.o exit.cpp

fireice.o: fireice.cpp fireice.h \
		player.h \
		exit.h \
		gun.h \
		cannon.h \
		bullet.h \
		water.h \
		key.h \
		wave.h \
		launcher.h \
		icicle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o fireice.o fireice.cpp

gun.o: gun.cpp gun.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o gun.o gun.cpp

helper.o: helper.cpp helper.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o helper.o helper.cpp

icicle.o: icicle.cpp icicle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o icicle.o icicle.cpp

key.o: key.cpp key.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o key.o key.cpp

launcher.o: launcher.cpp launcher.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o launcher.o launcher.cpp

life.o: life.cpp life.h \
		helper.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o life.o life.cpp

main.o: main.cpp fireice.h \
		player.h \
		exit.h \
		gun.h \
		cannon.h \
		bullet.h \
		water.h \
		key.h \
		wave.h \
		launcher.h \
		icicle.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

player.o: player.cpp player.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o player.o player.cpp

star.o: star.cpp star.h \
		helper.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o star.o star.cpp

water.o: water.cpp water.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o water.o water.cpp

wave.o: wave.cpp wave.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wave.o wave.cpp

moc_cannon.o: moc_cannon.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_cannon.o moc_cannon.cpp

moc_fireice.o: moc_fireice.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_fireice.o moc_fireice.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:
