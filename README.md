Natural Selection LINUX Build
============================================

Just hacked up, you will notice a lot of odd behavior.

In order to compile: cd ../linux and type make hl_cdll &> out.log

Additional libraries
- zlib1g-dev:i386
- libpng12-dev:i386
- The particle engine(David McAllister)

If you get the this error when running the app: Fatal Error - could not load library (client.so)
With a high chance it is because of some UNDEFINED SYMBOLS in the shared library.
But you can check this with ldd -r -d client.so.

If you want to debug:
- LD_LIBRARY_PATH=".:$LD_LIBRARY_PATH" gdb ./hl_linux
- r -game ns -dev -steam


Due to the new engine and the nature of linux i had to make a lot of changes! You can find them with grep -Ril "@Linux".

List of (new) Bugs

1. FMOD doesn't load
2. play random song needs to be reimplemented for linux
3. Commander Overview: Camera needs to be fixed
4. Hud: Odd behavior of the displayed models
5. Mouse rotation is locked to a specific angle
6. NS had some special Gamma functions(many WIN func calls), so I removed them :-) --> Always standard gamma (BUG?)
7. Fonts: ns/gfx/vgui/fonts High resolution fonts missing


The server still needs some work(Segmentation fault)! But it can be compiled: make ns

Half Life 1 SDK LICENSE
=======================

https://github.com/ValveSoftware/halflife/blob/master/README.md

You may, free of charge, download and use the SDK to develop a modified Valve game running on the Half-Life engine. You may distribute your modified Valve game in source and object code form, but only for free. Terms of use for Valve games are found in the Steam Subscriber Agreement located here: http://store.steampowered.com/subscriber_agreement/

You may copy, modify, and distribute the SDK and any modifications you make to the SDK in source and object code form, but only for free. Any distribution of this SDK must include this license.txt and third_party_licenses.txt.

DISCLAIMER OF WARRANTIES. THE SOURCE SDK AND ANY OTHER MATERIAL DOWNLOADED BY LICENSEE IS PROVIDED “AS IS”. VALVE AND ITS SUPPLIERS DISCLAIM ALL WARRANTIES WITH RESPECT TO THE SDK, EITHER EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY, NON-INFRINGEMENT, TITLE AND FITNESS FOR A PARTICULAR PURPOSE.

LIMITATION OF LIABILITY. IN NO EVENT SHALL VALVE OR ITS SUPPLIERS BE LIABLE FOR ANY SPECIAL, INCIDENTAL, INDIRECT, OR CONSEQUENTIAL DAMAGES WHATSOEVER (INCLUDING, WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS, BUSINESS INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR ANY OTHER PECUNIARY LOSS) ARISING OUT OF THE USE OF OR INABILITY TO USE THE ENGINE AND/OR THE SDK, EVEN IF VALVE HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

Natural Selection
=================

All artwork, sounds, audio, screenshots, text and code in Natural Selection, Zen of Sudoku, Spark engine and Natural Selection 2 are Copyright © 2014 Unknown Worlds Entertainment, Inc (http://www.unknownworlds.com).

The mark Natural Selection was first represented in association with video-game software in June of 2001, and was first used in commerce around January, 2002. Natural Selection is Registered with the U.S. Patent and Trademark Office (No. 4,179,393).

Uses external code and libraries
- Half Life 1 SDK LICENSE (Copyright(C) Valve Corp.)
- FMOD 3.7.5
- LUA 5.0 (http://lua.org)
- Particle system library by David McAllister (http://www.cs.unc.edu/techreports/00-007.pdf).

Original code and design by Charlie Cleveland (charlie@unknownworlds.com, @flayra).

Many contributions from Karl Patrick (karl.patrick@gmail.com), Petter Rønningen <tankefugl@gmail.com>, Harry Walsh <harry.walsh@gmail.com>, and probably lots of people I forgot.

