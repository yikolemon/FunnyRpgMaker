/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10126c90 */

void __fastcall FUN_10126c90(int param_1)

{
  int *piVar1;
  short *psVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  short sVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar14;
  int iVar15;
  int iVar13;
  
  iVar7 = DAT_1039d74c;
  if (*(int *)(param_1 + 0x148) < 0) {
    uVar10 = FUN_100fa1fa(0);
    if (*(int *)(param_1 + 0x14c) != 0) {
      FUN_1025b2d0(uVar10,*(int *)(param_1 + 0x14c),*(int *)(param_1 + 0x144) << 4);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x14c));
    }
    *(undefined4 *)(param_1 + 0x14c) = uVar10;
    *(undefined4 *)(param_1 + 0x148) = 0;
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  iVar15 = 0x200;
  iVar14 = 0;
  do {
    sVar8 = *(short *)(param_1 + -0x400 + iVar15 * 2);
    if (sVar8 == -1) {
      uVar9 = 0xffff;
    }
    else {
      piVar1 = (int *)(iVar7 + -0x264 + iVar15 * 0xc);
      do {
        iVar13 = *(int *)(param_1 + 0x140);
        iVar11 = sVar8 * 0x10;
        psVar2 = (short *)(iVar13 + iVar11);
        *(undefined2 *)(iVar13 + 4 + iVar11) = *(undefined2 *)(iVar13 + 6 + iVar11);
        iVar12 = *(int *)(iVar13 + 0xc + iVar11);
        *(int *)(iVar13 + 8 + iVar11) = iVar12;
        *(undefined4 *)(iVar13 + 0xc + iVar11) = 0xffffffff;
        *(undefined2 *)(iVar13 + 6 + iVar11) = 0;
        if (iVar12 != -1) {
          iVar13 = *(int *)(param_1 + 0x144);
          if (iVar13 == *(int *)(param_1 + 0x148)) {
            if (iVar13 == 0) {
              iVar12 = 8;
            }
            else {
              iVar12 = iVar13 / 2 + iVar13;
            }
            iVar11 = iVar13 + 1;
            if (iVar13 + 1 < iVar12) {
              iVar11 = iVar12;
            }
            iVar12 = FUN_100fa1fa(iVar11 << 4);
            if (*(int *)(param_1 + 0x14c) != 0) {
              FUN_1025b2d0(iVar12,*(int *)(param_1 + 0x14c),*(int *)(param_1 + 0x144) << 4);
              FUN_100fa2cb(*(undefined4 *)(param_1 + 0x14c));
            }
            *(int *)(param_1 + 0x14c) = iVar12;
            *(int *)(param_1 + 0x148) = iVar11;
            iVar13 = *(int *)(param_1 + 0x144);
          }
          else {
            iVar12 = *(int *)(param_1 + 0x14c);
          }
          uVar10 = *(undefined4 *)(psVar2 + 2);
          uVar5 = *(undefined4 *)(psVar2 + 4);
          uVar6 = *(undefined4 *)(psVar2 + 6);
          puVar3 = (undefined4 *)(iVar12 + iVar13 * 0x10);
          *puVar3 = *(undefined4 *)psVar2;
          puVar3[1] = uVar10;
          puVar3[2] = uVar5;
          puVar3[3] = uVar6;
          *(int *)(param_1 + 0x144) = *(int *)(param_1 + 0x144) + 1;
          if ((*(uint *)(iVar7 + 0x108) == (uint)(ushort)psVar2[1]) && (*piVar1 == -1)) {
            *piVar1 = *(int *)(psVar2 + 4);
          }
        }
        sVar8 = *psVar2;
      } while (sVar8 != -1);
      iVar13 = 0xffff;
      if (iVar14 < *(int *)(param_1 + 0x144)) {
        iVar13 = iVar14;
      }
      uVar9 = (undefined2)iVar13;
    }
    *(undefined2 *)(param_1 + -0x400 + iVar15 * 2) = uVar9;
    iVar13 = *(int *)(param_1 + 0x144);
    if (iVar14 < iVar13) {
      iVar12 = iVar14 << 4;
      do {
        iVar14 = iVar14 + 1;
        iVar11 = 0xffff;
        if (iVar14 < iVar13) {
          iVar11 = iVar14;
        }
        *(short *)(*(int *)(param_1 + 0x14c) + iVar12) = (short)iVar11;
        iVar13 = *(int *)(param_1 + 0x144);
        iVar12 = iVar12 + 0x10;
      } while (iVar14 < iVar13);
    }
    iVar15 = iVar15 + 1;
    iVar14 = iVar13;
  } while (iVar15 != 0x29b);
  uVar4 = *(undefined8 *)(param_1 + 0x138);
  *(int *)(param_1 + 0x138) = iVar13;
  *(undefined8 *)(param_1 + 0x144) = uVar4;
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x148);
  uVar10 = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x140) = uVar10;
  return;
}

