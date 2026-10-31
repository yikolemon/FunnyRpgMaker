/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002d5da */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14002d5da(double *param_1,double param_2)

{
  double dVar1;
  
  if (param_2 <= DAT_1400e72b0) {
    return *param_1;
  }
  if (param_2 < 0.0) {
    dVar1 = FUN_140025190(*param_1,param_1[1],param_2 + DAT_1400b6b38);
    return dVar1;
  }
  if (param_2 < DAT_1400dcde0) {
    dVar1 = FUN_140025190(param_1[1],param_1[2],param_2 + param_2);
    return dVar1;
  }
  if (param_2 < DAT_1400b6b38) {
    dVar1 = FUN_140025190(param_1[2],param_1[3],param_2 + _DAT_1400dcdd8 + param_2 + _DAT_1400dcdd8)
    ;
    return dVar1;
  }
  return param_1[3];
}

