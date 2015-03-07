// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_LocECC_HeaderFile
#define _Extrema_LocECC_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Extrema_POnCurv.hxx>
class Standard_DomainError;
class StdFail_NotDone;
class Adaptor3d_Curve;
class Extrema_CurveTool;
class Extrema_POnCurv;
class gp_Pnt;
class gp_Vec;
class Extrema_CCLocFOfLocECC;
class Extrema_SeqPOnCOfCCLocFOfLocECC;



class Extrema_LocECC 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Extrema_LocECC(const Adaptor3d_Curve& C1, const Adaptor3d_Curve& C2, const Standard_Real U0, const Standard_Real V0, const Standard_Real TolU, const Standard_Real TolV);
  
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  Standard_EXPORT   Standard_Real SquareDistance()  const;
  
  Standard_EXPORT   void Point (Extrema_POnCurv& P1, Extrema_POnCurv& P2)  const;




protected:





private:



  Standard_Boolean myDone;
  Standard_Real mySqDist;
  Extrema_POnCurv myPoint1;
  Extrema_POnCurv myPoint2;


};







#endif // _Extrema_LocECC_HeaderFile
