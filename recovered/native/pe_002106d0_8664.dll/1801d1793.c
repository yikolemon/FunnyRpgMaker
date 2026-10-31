/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d1793 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1801d1793(ulonglong param_1)

{
  int iVar1;
  double dVar2;
  
  dVar2 = (double)FUN_180287e70(_DAT_1802ac560 & param_1,DAT_18032a130);
  iVar1 = FUN_1801d2fda(param_1);
  return ((double)iVar1 * DAT_18032a138 * dVar2) / (dVar2 + DAT_18032a140);
}

