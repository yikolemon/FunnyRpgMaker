/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f55d */

void FUN_1018f55d(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x5c);
    iVar8 = 0;
    do {
      iVar3 = *(int *)(iVar2 + iVar8);
      if (*(int *)(iVar3 + 0x1c) < 0) {
        uVar4 = FUN_100fa1fa(0);
        if (*(int *)(iVar3 + 0x20) != 0) {
          FUN_1025b2d0(uVar4,*(int *)(iVar3 + 0x20),*(int *)(iVar3 + 0x18) << 2);
          FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x20));
        }
        *(undefined4 *)(iVar3 + 0x20) = uVar4;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
      }
      *(undefined4 *)(iVar3 + 0x18) = 0;
      iVar8 = iVar8 + 4;
    } while (iVar1 << 2 != iVar8);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x68);
    iVar8 = 0;
    do {
      iVar3 = *(int *)(iVar2 + 0x70 + iVar8);
      iVar7 = *(int *)(iVar3 + 0x18);
      if (iVar7 == *(int *)(iVar3 + 0x1c)) {
        if (iVar7 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar7 / 2 + iVar7;
        }
        iVar6 = iVar7 + 1;
        if (iVar7 + 1 < iVar5) {
          iVar6 = iVar5;
        }
        iVar5 = FUN_100fa1fa(iVar6 * 4);
        if (*(int *)(iVar3 + 0x20) != 0) {
          FUN_1025b2d0(iVar5,*(int *)(iVar3 + 0x20),*(int *)(iVar3 + 0x18) << 2);
          FUN_100fa2cb(*(undefined4 *)(iVar3 + 0x20));
        }
        *(int *)(iVar3 + 0x20) = iVar5;
        *(int *)(iVar3 + 0x1c) = iVar6;
        iVar7 = *(int *)(iVar3 + 0x18);
      }
      else {
        iVar5 = *(int *)(iVar3 + 0x20);
      }
      *(int *)(iVar5 + iVar7 * 4) = iVar2 + iVar8;
      *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
      iVar8 = iVar8 + 0x80;
    } while (iVar1 << 7 != iVar8);
  }
  return;
}

