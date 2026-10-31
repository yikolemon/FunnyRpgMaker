/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802916d8 */

void FUN_1802916d8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_180421848) && ((DAT_180416760 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_180293e04();
    *param_2 = lVar1;
  }
  return;
}

