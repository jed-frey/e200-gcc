/* { dg-do compile { target { powerpc*-*-* } } } */
/* { dg-skip-if "" { powerpc*-*-darwin* } { "*" } { "" } } */
/* { dg-require-effective-target powerpc_altivec_ok } */
/* { dg-options "-O2 -maltivec -maltivec2" } */
/* { dg-final { scan-assembler-times "stvflxl" 37 } } */

#include <altivec.h>

typedef __vector signed char vsc;
typedef __vector signed short vss;
typedef __vector signed int vsi;
typedef __vector unsigned char vuc;
typedef __vector unsigned short vus;
typedef __vector unsigned int vui;
typedef __vector bool char vbc;
typedef __vector bool short vbs;
typedef __vector bool int vbi;
typedef __vector float vsf;
typedef __vector pixel vp;
typedef signed char sc;
typedef signed short ss;
typedef signed int si;
typedef signed long sl;
typedef unsigned char uc;
typedef unsigned short us;
typedef unsigned int ui;
typedef unsigned long ul;
typedef float sf;

void sc2(vsc v, long a, void *p)    { __builtin_altivec_stvflxl (v,a,p); }
void slxl01(vsf v, long a, vsf *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl02(vsf v, long a, sf *p)   { __builtin_vec_stvflxl (v,a,p); }
void slxl03(vbi v, long a, vbi *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl04(vsi v, long a, vsi *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl05(vsi v, long a, si *p)   { __builtin_vec_stvflxl (v,a,p); }
void slxl06(vui v, long a, vui *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl07(vui v, long a, ui *p)   { __builtin_vec_stvflxl (v,a,p); }
void slxl08(vbs v, long a, vbs *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl09(vp v, long a, vp *p)    { __builtin_vec_stvflxl (v,a,p); }
void slxl10(vss v, long a, vss *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl11(vss v, long a, ss *p)   { __builtin_vec_stvflxl (v,a,p); }
void slxl12(vus v, long a, vus *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl13(vus v, long a, us *p)   { __builtin_vec_stvflxl (v,a,p); }
void slxl14(vbc v, long a, vbc *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl15(vsc v, long a, vsc *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl16(vsc v, long a, sc *p)   { __builtin_vec_stvflxl (v,a,p); }
void slxl17(vuc v, long a, vuc *p)  { __builtin_vec_stvflxl (v,a,p); }
void slxl18(vuc v, long a, uc *p)   { __builtin_vec_stvflxl (v,a,p); }
void Dslxl01(vsf v, long a, vsf *p) { vec_stvflxl (v,a,p); }
void Dslxl02(vsf v, long a, sf *p)  { vec_stvflxl (v,a,p); }
void Dslxl03(vbi v, long a, vbi *p) { vec_stvflxl (v,a,p); }
void Dslxl04(vsi v, long a, vsi *p) { vec_stvflxl (v,a,p); }
void Dslxl05(vsi v, long a, si *p)  { vec_stvflxl (v,a,p); }
void Dslxl06(vui v, long a, vui *p) { vec_stvflxl (v,a,p); }
void Dslxl07(vui v, long a, ui *p)  { vec_stvflxl (v,a,p); }
void Dslxl08(vbs v, long a, vbs *p) { vec_stvflxl (v,a,p); }
void Dslxl09(vp v, long a, vp *p)   { vec_stvflxl (v,a,p); }
void Dslxl10(vss v, long a, vss *p) { vec_stvflxl (v,a,p); }
void Dslxl11(vss v, long a, ss *p)  { vec_stvflxl (v,a,p); }
void Dslxl12(vus v, long a, vus *p) { vec_stvflxl (v,a,p); }
void Dslxl13(vus v, long a, us *p)  { vec_stvflxl (v,a,p); }
void Dslxl14(vbc v, long a, vbc *p) { vec_stvflxl (v,a,p); }
void Dslxl15(vsc v, long a, vsc *p) { vec_stvflxl (v,a,p); }
void Dslxl16(vsc v, long a, sc *p)  { vec_stvflxl (v,a,p); }
void Dslxl17(vuc v, long a, vuc *p) { vec_stvflxl (v,a,p); }
void Dslxl18(vuc v, long a, uc *p)  { vec_stvflxl (v,a,p); }
