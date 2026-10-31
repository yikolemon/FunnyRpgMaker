/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10162e22 */

void FUN_10162e22(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  bVar1 = *(byte *)(param_1 + 0x1f0);
  if (bVar1 == 1) {
    FUN_10165bf6(param_1);
    iVar10 = *(int *)(param_1 + 0x1a0);
    sVar4 = (short)*(undefined4 *)(param_1 + 0x1b4);
    sVar6 = 0;
    if (1 < sVar4) {
      sVar6 = sVar4;
    }
    iVar8 = (int)sVar6;
    if (iVar10 < iVar8) {
      if (iVar10 == 0) {
        iVar10 = 8;
      }
      else {
        iVar10 = iVar10 / 2 + iVar10;
      }
      if (iVar10 <= iVar8) {
        iVar10 = iVar8;
      }
      uVar3 = FUN_100fa1fa(iVar10 * 0xc);
      if (*(int *)(param_1 + 0x1a4) != 0) {
        FUN_1025b2d0(uVar3,*(int *)(param_1 + 0x1a4),*(int *)(param_1 + 0x19c) * 0xc);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x1a4));
      }
      *(undefined4 *)(param_1 + 0x1a4) = uVar3;
      *(int *)(param_1 + 0x1a0) = iVar10;
    }
    *(int *)(param_1 + 0x19c) = iVar8;
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    *(undefined1 *)(param_1 + 0x1f0) = 0;
  }
  sVar6 = *(short *)(param_1 + 0x1b4);
  if (sVar6 == 0) {
    iVar10 = 0;
  }
  else {
    if (sVar6 == 1) {
      iVar10 = param_1 + 400;
    }
    else {
      iVar10 = *(int *)(param_1 + 0x1a4);
    }
    if (((bVar1 & iVar10 != 0) == 1) && (iVar8 = *(int *)(param_1 + 0x40), 0 < iVar8)) {
      iVar5 = 0;
      iVar7 = 0x71;
      do {
        iVar2 = *(int *)(param_1 + 0x10);
        iVar9 = (int)*(short *)(iVar2 + -0x13 + iVar7);
        if (iVar9 != -1) {
          *(undefined4 *)(iVar10 + iVar9 * 0xc) = *(undefined4 *)(iVar2 + -0x3d + iVar7);
          *(short *)(iVar10 + 4 + iVar9 * 0xc) = (short)iVar5;
          *(undefined2 *)(iVar10 + 6 + iVar9 * 0xc) = *(undefined2 *)(iVar2 + -0x13 + iVar7);
          *(byte *)(iVar10 + 8 + iVar9 * 0xc) = *(byte *)(iVar2 + iVar7) & 3;
          iVar8 = *(int *)(param_1 + 0x40);
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 0x74;
      } while (iVar5 < iVar8);
      sVar6 = *(short *)(param_1 + 0x1b4);
    }
  }
  *(int *)(param_1 + 0x1a8) = iVar10;
  *(int *)(param_1 + 0x1ac) = (int)sVar6;
  return;
}

