/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bf0a6 */

void FUN_1800bf0a6(longlong param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18001620a();
    }
    lVar3 = (*DAT_180417868)(param_2 * 4,1);
    *(longlong *)(param_1 + 8) = lVar3;
    *(longlong *)(param_1 + 0x10) = lVar3;
    *(ulonglong *)(param_1 + 0x18) = lVar3 + param_2 * 4;
    lVar1 = *param_4;
    lVar2 = *param_3;
    thunk_FUN_18001fd6c(lVar2,lVar1,lVar3);
    *(longlong *)(param_1 + 0x10) = lVar3 + (lVar1 - lVar2);
  }
  return;
}

