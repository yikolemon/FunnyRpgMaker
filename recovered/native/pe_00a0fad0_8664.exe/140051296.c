/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140051296 */

longlong * FUN_140051296(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_3 != param_4) {
    lVar1 = *(longlong *)(param_1 + 8);
    lVar2 = param_3;
    lVar3 = param_3;
    if (lVar1 != param_4) {
      do {
        FUN_14000ff1e(lVar2,param_4);
        lVar2 = lVar2 + 0x20;
        param_4 = param_4 + 0x20;
      } while (param_4 != lVar1);
      param_4 = *(longlong *)(param_1 + 8);
      lVar3 = lVar2;
    }
    for (; lVar2 != param_4; lVar2 = lVar2 + 0x20) {
      FUN_140005242(lVar2);
    }
    *(longlong *)(param_1 + 8) = lVar3;
  }
  *param_2 = param_3;
  return param_2;
}

