/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140121b28 */

void FUN_140121b28(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_1403555f8) && ((DAT_1401caf00 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_140123c1c();
    *param_2 = lVar1;
  }
  return;
}

