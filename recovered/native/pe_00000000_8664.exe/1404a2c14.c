/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2c14 */

void FUN_1404a2c14(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_140632d18)[param_3]) && ((DAT_140627c30 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_1404a52d4();
    *param_2 = lVar1;
  }
  return;
}

