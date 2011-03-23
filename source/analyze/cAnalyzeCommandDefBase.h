/*
 *  cAnalyzeCommandDefBase.h
 *  Avida
 *
 *  Called "analyze_command_def_base.hh" prior to 12/2/05.
 *  Copyright 1999-2011 Michigan State University. All rights reserved.
 *  Copyright 1993-2003 California Institute of Technology.
 *
 *
 *  This file is part of Avida.
 *
 *  Avida is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
 *
 *  Avida is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License along with Avida.
 *  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef cAnalyzeCommandDefBase_h
#define cAnalyzeCommandDefBase_h

#ifndef cString_h
#include "cString.h"
#endif

class cAnalyze;
class cAnalyzeCommand;

class cAnalyzeCommandDefBase {
protected:
  cString name;
public:
  cAnalyzeCommandDefBase(const cString& _name) : name(_name) { ; }
  virtual ~cAnalyzeCommandDefBase() { ; }

  virtual void Run(cAnalyze* analyze, const cString & args, cAnalyzeCommand& command) const = 0;
  virtual bool IsFlowCommand() { return false; }

  const cString& GetName() const { return name; }
};

#endif
