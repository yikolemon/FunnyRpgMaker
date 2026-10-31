/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af2e4 */

void FUN_1401af2e4(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_140f331f8)[param_3]) && ((DAT_140f29f00 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_1401b19a4();
    *param_2 = lVar1;
  }
  return;
}

