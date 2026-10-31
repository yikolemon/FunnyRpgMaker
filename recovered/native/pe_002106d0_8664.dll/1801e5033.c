/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e5033 */

void FUN_1801e5033(uint param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (1 < param_1) {
    uVar3 = 1;
    uVar4 = 0;
    do {
      iVar1 = *(int *)(param_2 + (ulonglong)uVar3 * 4);
      uVar5 = uVar4;
      do {
        iVar2 = *(int *)(param_2 + (uVar5 & 0xffffffff) * 4);
        if (iVar2 <= iVar1) break;
        *(int *)(param_2 + 4 + uVar5 * 4) = iVar2;
        *(int *)(param_2 + (uVar5 & 0xffffffff) * 4) = iVar1;
        uVar5 = uVar5 - 1;
      } while ((int)uVar5 != -1);
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar3 != param_1);
  }
  return;
}

