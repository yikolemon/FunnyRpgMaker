/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101625aa */

void FUN_101625aa(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  bool bVar10;
  
  sVar7 = *(short *)(param_1 + 0x1de);
  iVar5 = 1;
  if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
    iVar5 = (int)*(short *)(param_1 + 0x1b6);
  }
  bVar10 = true;
  if (*(int *)(param_1 + 0x40) <= (int)*(short *)(param_1 + 0x1b6)) {
    iVar6 = FUN_102595e0(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x2c),
                         *(int *)(param_1 + 0x40) + 0x1f >> 3 & 0xfffffffc);
    bVar10 = iVar6 != 0;
  }
  iVar6 = (iVar5 << (0 < sVar7)) + (0 < sVar7 | 2);
  FUN_1018dc92(*(undefined4 *)(*(int *)(param_1 + 0x158) + 0x2e8),iVar6 + (uint)bVar10);
  sVar7 = -1;
  if (bVar10 != false) {
    sVar7 = (ushort)bVar10 + (short)iVar6 + -1;
  }
  *(short *)(param_1 + 0x1e6) = sVar7;
  *(undefined2 *)(param_1 + 0x1e8) = 1;
  sVar7 = (short)iVar5 + 2;
  if (*(short *)(param_1 + 0x1de) < 1) {
    sVar7 = 1;
  }
  *(short *)(param_1 + 0x1ea) = sVar7;
  if (0 < *(int *)(param_1 + 0x40)) {
    iVar6 = 0;
    sVar7 = 2;
    iVar8 = 0x6a;
    do {
      iVar1 = *(int *)(param_1 + 0x10);
      if ((*(char *)(iVar1 + -1 + iVar8) == '\x01') && (*(char *)(iVar1 + iVar8) == '\x01')) {
        *(short *)(iVar1 + -8 + iVar8) = sVar7;
        sVar9 = 0;
        if (0 < *(short *)(param_1 + 0x1de)) {
          sVar9 = (short)iVar5 + 1;
        }
        *(short *)(iVar1 + -6 + iVar8) = sVar9 + sVar7;
        sVar9 = sVar7;
        sVar7 = sVar7 + (ushort)((*(byte *)(param_1 + 6) & 0x10) == 0);
      }
      else {
        sVar9 = *(short *)(param_1 + 0x1e6);
        *(short *)(iVar1 + -6 + iVar8) = sVar9;
        *(short *)(iVar1 + -8 + iVar8) = sVar9;
      }
      *(short *)(iVar1 + -10 + iVar8) = sVar9;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x74;
    } while (iVar6 < *(int *)(param_1 + 0x40));
  }
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
  iVar5 = *(int *)(param_1 + 0x154);
  uVar2 = *(undefined4 *)(iVar5 + 0x290);
  uVar3 = *(undefined4 *)(iVar5 + 0x294);
  uVar4 = *(undefined4 *)(iVar5 + 0x298);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(iVar5 + 0x28c);
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x120) = uVar4;
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x140);
  return;
}

