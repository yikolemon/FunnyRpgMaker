/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2e19 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1801d2e19(int param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1 / _DAT_18032a128;
  if (dVar1 <= DAT_18032a440) {
    dVar1 = dVar1 / _DAT_18032a108;
  }
  else {
    dVar1 = (double)FUN_180287e70((dVar1 + _DAT_18032a448) / _DAT_18032a118,DAT_18032a450);
  }
  return dVar1 * DAT_18032a0f8;
}

