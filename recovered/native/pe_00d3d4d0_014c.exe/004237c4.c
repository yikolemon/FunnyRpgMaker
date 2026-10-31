/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004237c4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004237c4(double *param_1,double param_2,double param_3,double param_4,double param_5,
            double param_6,double param_7)

{
  double dVar1;
  
  dVar1 = (param_6 + param_3) * _UNK_004d7e38;
  *param_1 = (param_5 + param_2) * _DAT_004d7e30;
  param_1[1] = dVar1;
  param_1[2] = (param_4 + param_7) * DAT_004cda70;
  return;
}

