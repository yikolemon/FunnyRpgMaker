/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e4c02 */

void FUN_1400e4c02(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  iVar4 = *(int *)(lVar1 + 0x1c) / 2;
  iVar5 = *(int *)(lVar2 + 0x54);
  if (iVar5 < iVar4) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    uVar3 = FUN_140077ab4((longlong)iVar5 << 4);
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      FUN_1401c5180(uVar3,*(longlong *)(lVar2 + 0x58),(longlong)*(int *)(lVar2 + 0x50) << 4);
      FUN_140077b90(*(undefined8 *)(lVar2 + 0x58));
    }
    *(undefined8 *)(lVar2 + 0x58) = uVar3;
    *(int *)(lVar2 + 0x54) = iVar5;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x58);
  }
  *(int *)(lVar2 + 0x50) = iVar4;
  FUN_1400e5732(lVar2,*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(lVar1 + 0x20),uVar3,iVar4);
  *(undefined8 *)(lVar2 + 0x94) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  return;
}

