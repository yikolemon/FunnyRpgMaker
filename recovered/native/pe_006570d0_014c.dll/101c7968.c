/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c7968 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c7968(double *param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7)

{
  double dVar1;
  
  dVar1 = (param_6 + param_3) * _UNK_10303888;
  *param_1 = (param_5 + param_2) * _DAT_10303880;
  param_1[1] = dVar1;
  param_1[2] = (param_4 + param_7) * DAT_102b96d8;
  return;
}

