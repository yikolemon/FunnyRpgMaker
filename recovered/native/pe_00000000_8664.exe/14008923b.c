/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008923b */

void FUN_14008923b(int *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    iVar5 = iVar1 + 1;
    if (iVar1 + 1 < iVar3) {
      iVar5 = iVar3;
    }
    lVar2 = FUN_140077ab4((longlong)iVar5 << 3);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1401c5180(lVar2,*(longlong *)(param_1 + 2),(longlong)*param_1 << 3);
      FUN_140077b90(*(undefined8 *)(param_1 + 2));
    }
    *(longlong *)(param_1 + 2) = lVar2;
    param_1[1] = iVar5;
    iVar1 = *param_1;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 2);
  }
  *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  *param_1 = *param_1 + 1;
  if (*(char *)(param_2 + 0x109) == '\x01') {
    iVar1 = *(int *)(param_2 + 0x1f0);
    uVar4 = (ulonglong)iVar1;
    if (1 < uVar4) {
      FUN_1401a7460(*(undefined8 *)(param_2 + 0x1f8),uVar4,8,&LAB_1400a4ee1);
    }
    if (0 < iVar1) {
      uVar6 = 0;
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x1f8) + uVar6 * 8) + 0x109) == '\x01')
        {
          FUN_14008923b(param_1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar4 != uVar6);
    }
  }
  return;
}

