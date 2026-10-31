/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bc774 */

void __thiscall FUN_101bc774(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18) + param_2;
  if (*(int *)(param_1 + 0x1c) < iVar5) {
    uVar1 = FUN_100fa1fa(iVar5 * 8);
    if (*(int *)(param_1 + 0x20) != 0) {
      FUN_1025b2d0(uVar1,*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x18) << 3);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x20) = uVar1;
    *(int *)(param_1 + 0x1c) = iVar5;
  }
  if (0 < param_2) {
    iVar5 = *(int *)(param_1 + 0x18);
    uVar7 = *(uint *)(param_1 + 0x44);
    do {
      uVar3 = uVar7 + (uVar7 / 5 & 0xfffffffc) * -5;
      iVar6 = 2 - (uint)(uVar3 < 0x12);
      if (uVar3 < 0xf) {
        iVar6 = 0;
      }
      if (iVar5 == *(int *)(param_1 + 0x1c)) {
        if (iVar5 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = iVar5 / 2 + iVar5;
        }
        iVar4 = iVar5 + 1;
        if (iVar5 + 1 < iVar2) {
          iVar4 = iVar2;
        }
        iVar2 = FUN_100fa1fa(iVar4 * 8);
        if (*(int *)(param_1 + 0x20) != 0) {
          FUN_1025b2d0(iVar2,*(int *)(param_1 + 0x20),*(int *)(param_1 + 0x18) << 3);
          FUN_100fa2cb(*(undefined4 *)(param_1 + 0x20));
        }
        *(int *)(param_1 + 0x20) = iVar2;
        *(int *)(param_1 + 0x1c) = iVar4;
        iVar5 = *(int *)(param_1 + 0x18);
      }
      else {
        iVar2 = *(int *)(param_1 + 0x20);
      }
      *(int *)(iVar2 + 4 + iVar5 * 8) = iVar6;
      *(uint *)(iVar2 + iVar5 * 8) = uVar7;
      iVar5 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar5;
      uVar7 = *(int *)(param_1 + 0x44) + 1;
      *(uint *)(param_1 + 0x44) = uVar7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}

