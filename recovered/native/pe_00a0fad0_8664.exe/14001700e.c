/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001700e */

void FUN_14001700e(longlong *param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14000a2c6();
    }
    FUN_140016e00();
    lVar1 = *param_1;
    lVar2 = *param_4;
    lVar3 = *param_3;
    thunk_FUN_140016eb4(lVar3,lVar2,lVar1);
    param_1[1] = lVar1 + (lVar2 - lVar3);
  }
  return;
}

