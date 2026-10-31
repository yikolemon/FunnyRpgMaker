/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10167bf1 */

void FUN_10167bf1(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_1039d74c;
  uVar3 = *(uint *)(param_1 + 0x40);
  iVar4 = uVar3 * 8;
  if (iVar4 - *(int *)(DAT_1039d74c + 0x29a4) == 0 || iVar4 < *(int *)(DAT_1039d74c + 0x29a4)) {
    iVar2 = *(int *)(DAT_1039d74c + 0x29a8);
  }
  else {
    iVar2 = FUN_100fa1fa(iVar4);
    if (*(int *)(iVar1 + 0x29a8) != 0) {
      FUN_1025b2d0(iVar2,*(int *)(iVar1 + 0x29a8),*(undefined4 *)(iVar1 + 0x29a0));
      FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x29a8));
    }
    *(int *)(iVar1 + 0x29a8) = iVar2;
    *(int *)(iVar1 + 0x29a4) = iVar4;
    uVar3 = *(uint *)(param_1 + 0x40);
  }
  if (0 < (int)uVar3) {
    iVar4 = 0;
    do {
      *(short *)(iVar2 + iVar4 * 8) = (short)iVar4;
      *(int *)(iVar2 + 4 + iVar4 * 8) = param_1;
      iVar4 = iVar4 + 1;
      uVar3 = *(uint *)(param_1 + 0x40);
    } while (iVar4 < (int)uVar3);
  }
  if (1 < uVar3) {
    FUN_1026fb00(iVar2,uVar3,8,&LAB_10167caa);
    uVar3 = *(uint *)(param_1 + 0x40);
  }
  if (0 < (int)uVar3) {
    iVar4 = 0;
    do {
      *(short *)(*(int *)(param_1 + 0x10) + 0x56 + *(short *)(iVar2 + iVar4 * 8) * 0x74) =
           (short)iVar4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x40));
  }
  return;
}

