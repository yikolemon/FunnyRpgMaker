/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140038e80 */

void FUN_140038e80(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  
  if (param_2 < 0xaaaaaaaaaaaaab) {
    lVar1 = FUN_140001fba(param_2 * 0x180);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + param_2 * 0x180;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140002001();
}

