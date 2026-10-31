/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401ab070 */

int FUN_1401ab070(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVar2 != -2) {
    return iVar2;
  }
  uVar3 = param_2[1];
  lVar1 = uVar3 + (longlong)*(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1401a0758();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVar5 = 0;
    do {
      if (*param_2 < (longlong)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_3 + 0x14));
    if ((int)uVar5 != 0) {
      return *(int *)(uVar3 + (ulonglong)((int)uVar5 - 1) * 8 + 4 +
                     (longlong)*(int *)(param_3 + 0x18));
    }
  }
  return -1;
}

