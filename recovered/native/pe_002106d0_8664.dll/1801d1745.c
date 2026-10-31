/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d1745 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1801d1745(double param_1)

{
  double dVar1;
  
  param_1 = param_1 / DAT_18032a0f8;
  if (param_1 <= DAT_18032a100) {
    param_1 = param_1 * _DAT_18032a108;
  }
  else {
    dVar1 = (double)FUN_180287e70(param_1,DAT_18032a110);
    param_1 = dVar1 * _DAT_18032a118 + _DAT_18032a120;
  }
  return param_1 * _DAT_18032a128;
}

