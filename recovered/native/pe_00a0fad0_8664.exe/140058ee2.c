/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140058ee2 */

void FUN_140058ee2(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (((*(uint *)(param_1 + 0x70) & 0x22) == 2) ||
     (uVar1 = **(ulonglong **)(param_1 + 0x40), uVar1 == 0)) {
    if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
      return;
    }
    lVar3 = **(longlong **)(param_1 + 0x38);
    if (lVar3 == 0) {
      return;
    }
    lVar2 = **(longlong **)(param_1 + 0x18);
    *param_2 = lVar2;
    lVar3 = (lVar3 + (longlong)**(int **)(param_1 + 0x50) * 2) - lVar2 >> 1;
    param_2[1] = lVar3;
  }
  else {
    lVar3 = **(longlong **)(param_1 + 0x20);
    *param_2 = lVar3;
    uVar4 = *(ulonglong *)(param_1 + 0x68);
    if (*(ulonglong *)(param_1 + 0x68) <= uVar1) {
      uVar4 = uVar1;
    }
    param_2[1] = (longlong)(uVar4 - lVar3) >> 1;
    lVar3 = (longlong)((uVar1 + (longlong)**(int **)(param_1 + 0x58) * 2) - lVar3) >> 1;
  }
  param_2[2] = lVar3;
  return;
}

