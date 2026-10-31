/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1b44 */

void FUN_1400a1b44(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_1401437b8)[param_3]) && ((DAT_14013c4a0 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_1400a336c();
    *param_2 = lVar1;
  }
  return;
}

