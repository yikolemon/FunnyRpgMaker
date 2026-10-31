/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140017176 */

void FUN_140017176(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (((*(uint *)(param_1 + 0x70) & 0x22) == 2) ||
     (uVar1 = **(ulonglong **)(param_1 + 0x40), uVar1 == 0)) {
    if ((*(uint *)(param_1 + 0x70) & 4) != 0) {
      return;
    }
    lVar2 = **(longlong **)(param_1 + 0x38);
    if (lVar2 == 0) {
      return;
    }
    lVar4 = **(longlong **)(param_1 + 0x18);
    *param_2 = lVar4;
    lVar4 = (lVar2 + **(int **)(param_1 + 0x50)) - lVar4;
    param_2[1] = lVar4;
  }
  else {
    lVar4 = **(longlong **)(param_1 + 0x20);
    *param_2 = lVar4;
    uVar3 = *(ulonglong *)(param_1 + 0x68);
    if (*(ulonglong *)(param_1 + 0x68) <= uVar1) {
      uVar3 = uVar1;
    }
    param_2[1] = uVar3 - lVar4;
    lVar4 = ((longlong)**(int **)(param_1 + 0x58) + uVar1) - lVar4;
  }
  param_2[2] = lVar4;
  return;
}

