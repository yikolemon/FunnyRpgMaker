/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402ad804 */

void FUN_1402ad804(longlong *param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402276da();
    }
    FUN_140276d58();
    lVar1 = *param_1;
    lVar2 = *param_4;
    lVar3 = *param_3;
    thunk_FUN_14023123c(lVar3,lVar2,lVar1);
    param_1[1] = lVar1 + (lVar2 - lVar3);
  }
  return;
}

