/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d2137 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1801d2137(ulonglong param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (DAT_18032a140 * (double)(_DAT_1802ac560 & param_1)) /
          (DAT_18032a138 - (double)(_DAT_1802ac560 & param_1));
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  iVar1 = FUN_1801d2fda();
  dVar2 = (double)FUN_180287e70(dVar2,DAT_18032a1b0);
  return dVar2 * (double)iVar1;
}

