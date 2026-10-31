/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008b538 */

longlong FUN_14008b538(undefined8 param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong local_30;
  
  lVar2 = DAT_140f2a910;
  lVar4 = FUN_140077ab4(0x4d8);
  FUN_14007fb78(lVar4,lVar2,param_1);
  *(uint *)(lVar4 + 0x14) = param_2;
  local_30 = lVar4;
  FUN_140078d44(lVar2 + 0x15e8,*(undefined4 *)(lVar4 + 0x10),lVar4);
  if ((param_2 >> 8 & 1) == 0) {
    lVar5 = FUN_140096dff(lVar4);
    if (lVar5 != 0) {
      *(int *)(lVar4 + 0x31c) = (int)lVar5 - *(int *)(lVar2 + 0x29a0);
      goto LAB_14008b5aa;
    }
  }
  lVar5 = 0;
LAB_14008b5aa:
  FUN_140096e23(lVar4,lVar5);
  piVar1 = (int *)(lVar2 + 0x15a8);
  if ((param_2 >> 0xd & 1) == 0) {
    iVar3 = *(int *)(lVar2 + 0x15a8);
    if (iVar3 == *(int *)(lVar2 + 0x15ac)) {
      if (iVar3 == 0) {
        iVar6 = 8;
      }
      else {
        iVar6 = iVar3 / 2 + iVar3;
      }
      iVar7 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar7 = iVar6;
      }
      lVar5 = FUN_140077ab4((longlong)iVar7 << 3);
      if (*(longlong *)(lVar2 + 0x15b0) != 0) {
        FUN_1401c5180(lVar5,*(longlong *)(lVar2 + 0x15b0),(longlong)*(int *)(lVar2 + 0x15a8) << 3);
        FUN_140077b90(*(undefined8 *)(lVar2 + 0x15b0));
      }
      *(longlong *)(lVar2 + 0x15b0) = lVar5;
      *(int *)(lVar2 + 0x15ac) = iVar7;
      iVar3 = *(int *)(lVar2 + 0x15a8);
    }
    else {
      lVar5 = *(longlong *)(lVar2 + 0x15b0);
    }
    *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
    *piVar1 = *piVar1 + 1;
    local_30 = lVar4;
  }
  else {
    FUN_1400a530e(piVar1,&local_30);
  }
  return local_30;
}

