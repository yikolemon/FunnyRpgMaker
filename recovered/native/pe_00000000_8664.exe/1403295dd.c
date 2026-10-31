/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403295dd */

void FUN_1403295dd(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *(longlong *)(DAT_14062a630 + 0x1608);
  uVar2 = FUN_14032936e(lVar1,param_1);
  iVar3 = *(int *)(lVar1 + 0x148);
  if (iVar3 == *(int *)(lVar1 + 0x14c)) {
    if (iVar3 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar3 / 2 + iVar3;
    }
    iVar6 = iVar3 + 1;
    if (iVar3 + 1 < iVar5) {
      iVar6 = iVar5;
    }
    lVar4 = FUN_14030fcc8((longlong)iVar6 << 2);
    if (*(longlong *)(lVar1 + 0x150) != 0) {
      FUN_1404b97c0(lVar4,*(longlong *)(lVar1 + 0x150),(longlong)*(int *)(lVar1 + 0x148) << 2);
      FUN_14030fda4(*(undefined8 *)(lVar1 + 0x150));
    }
    *(longlong *)(lVar1 + 0x150) = lVar4;
    *(int *)(lVar1 + 0x14c) = iVar6;
    iVar3 = *(int *)(lVar1 + 0x148);
  }
  else {
    lVar4 = *(longlong *)(lVar1 + 0x150);
  }
  *(undefined4 *)(lVar4 + (longlong)iVar3 * 4) = uVar2;
  *(int *)(lVar1 + 0x148) = *(int *)(lVar1 + 0x148) + 1;
  return;
}

