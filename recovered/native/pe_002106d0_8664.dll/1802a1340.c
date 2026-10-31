/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a1340 */

double FUN_1802a1340(int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  
  dVar2 = DAT_180357fe8;
  if (param_1 != 0) {
    dVar2 = DAT_180357ff0;
  }
  dVar2 = dVar2 * DAT_180357fe8;
  puVar1 = (undefined4 *)FUN_18027e66c();
  *puVar1 = 0x22;
  return dVar2;
}

