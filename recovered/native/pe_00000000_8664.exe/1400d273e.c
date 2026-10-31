/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d273e */

longlong FUN_1400d273e(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = param_1[8];
  if (iVar3 == *param_1) {
    iVar1 = iVar3 + 1;
    iVar6 = param_1[1];
    if (iVar3 < iVar6) {
      lVar5 = *(longlong *)(param_1 + 2);
      iVar6 = iVar1;
    }
    else {
      if (iVar6 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar6 / 2 + iVar6;
      }
      if (iVar6 <= iVar1) {
        iVar6 = iVar1;
      }
      lVar5 = FUN_140077ab4((longlong)iVar6 * 0x28);
      if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1401c5180(lVar5,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x28);
        FUN_140077b90(*(undefined8 *)(param_1 + 2));
      }
      *(longlong *)(param_1 + 2) = lVar5;
      param_1[1] = iVar6;
      iVar6 = param_1[8] + 1;
    }
    *param_1 = iVar1;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 2);
    iVar6 = *(int *)(lVar5 + (longlong)iVar3 * 0x28);
  }
  param_1[8] = iVar6;
  lVar4 = (longlong)iVar3 * 0x28;
  *(undefined1 (*) [16])(lVar5 + lVar4) = (undefined1  [16])0x0;
  *(undefined4 *)(lVar5 + 0x10 + lVar4) = 0;
  *(undefined2 *)(lVar5 + 0x14 + lVar4) = 0xffff;
  puVar2 = (undefined4 *)(lVar5 + 0x18 + lVar4);
  *puVar2 = 0xffffffff;
  puVar2[1] = 0xffffffff;
  puVar2[2] = 0xffffffff;
  puVar2[3] = 0xffffffff;
  param_1[9] = param_1[9] + 1;
  return lVar4 + *(longlong *)(param_1 + 2);
}

