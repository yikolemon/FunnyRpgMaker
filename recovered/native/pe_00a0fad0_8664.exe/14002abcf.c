/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002abcf */

longlong * FUN_14002abcf(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    lVar1 = *param_1;
    *param_1 = 0;
    lVar2 = *param_3;
    *param_3 = lVar1;
    if (lVar2 != 0) {
      FUN_14002ac68(lVar2);
      thunk_FUN_1400ddcd0(lVar2,0x270);
    }
    param_3 = param_3 + 1;
  }
  return param_3;
}

