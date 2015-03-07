// Copyright (c) 1997-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef math_GaussPoints_HeaderFile
#define math_GaussPoints_HeaderFile
#include <math_Vector.hxx>
#include <Standard_Real.hxx>


extern const Standard_Real Point[157];
extern const Standard_Real Weight[157];

math_Vector GPoints(const Standard_Integer Index);

math_Vector GWeights(const Standard_Integer Index);

#endif
