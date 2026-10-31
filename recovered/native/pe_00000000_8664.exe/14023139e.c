/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14023139e */

void FUN_14023139e(longlong *param_1,ulonglong param_2)

{
  uint *puVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (-1 < (longlong)param_2) {
    uVar4 = param_2 + 0x1f >> 5;
    lVar3 = param_1[1];
    if ((uVar4 < (ulonglong)(lVar3 - *param_1 >> 2)) && (*param_1 + uVar4 * 4 != lVar3)) {
      lVar3 = thunk_FUN_14023123c(lVar3,lVar3);
      param_1[1] = lVar3;
    }
    param_1[3] = param_2;
    if ((param_2 & 0x1f) != 0) {
      puVar1 = (uint *)(*param_1 + -4 + uVar4 * 4);
      *puVar1 = *puVar1 & ~(-1 << (sbyte)(param_2 & 0x1f));
    }
    return;
  }
  FUN_140230f92();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

