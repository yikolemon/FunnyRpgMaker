/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a530e */

void FUN_1400a530e(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *param_1;
  if (uVar1 == 0) {
    if (param_1[1] == 0) {
      lVar3 = FUN_140077ab4(0x40);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1401c5180(lVar3,*(longlong *)(param_1 + 2),(longlong)(int)*param_1 << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar3;
      param_1[1] = 8;
      lVar4 = (longlong)(int)*param_1;
    }
    else {
      lVar3 = *(longlong *)(param_1 + 2);
      lVar4 = 0;
    }
    *(undefined8 *)(lVar3 + lVar4 * 8) = *param_2;
  }
  else {
    if (uVar1 == param_1[1]) {
      iVar5 = 1;
      if (1 < (int)uVar1 / 2) {
        iVar5 = (int)uVar1 / 2;
      }
      puVar2 = (undefined8 *)FUN_140077ab4((longlong)(int)(iVar5 + uVar1) << 3);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1401c5180(puVar2,*(longlong *)(param_1 + 2),(longlong)(int)*param_1 << 3);
        FUN_140077b90(*(undefined8 *)(param_1 + 2));
      }
      *(undefined8 **)(param_1 + 2) = puVar2;
      param_1[1] = iVar5 + uVar1;
      uVar1 = *param_1;
    }
    else {
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    if (0 < (int)uVar1) {
      FUN_1401c5180(puVar2 + 1,puVar2,(ulonglong)uVar1 << 3);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    *puVar2 = *param_2;
  }
  *param_1 = *param_1 + 1;
  return;
}

