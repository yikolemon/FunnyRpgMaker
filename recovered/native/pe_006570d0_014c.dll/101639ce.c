/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101639ce */

void FUN_101639ce(int param_1)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 *local_60;
  short local_5a;
  int local_58;
  int local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  iVar10 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_6c;
  iVar12 = *(int *)(DAT_1039d74c + 0x14cc);
  if (*(int *)(param_1 + 0x48) != -1) {
    FUN_101654f7(param_1);
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  }
  if (*(char *)(iVar10 + 0x2748) == '\x01') {
    FUN_100fd6a8(0,&DAT_1033032c,0);
  }
  fVar1 = *(float *)(param_1 + 0x54);
  *(float *)(iVar12 + 0x148) = fVar1;
  if (*(short *)(param_1 + 0x4c) == 0) {
    local_68 = param_1 + 0x16c;
  }
  else {
    local_68 = *(int *)(param_1 + 0x18c) + *(short *)(param_1 + 0x4c) * 0x18 + -0x18;
  }
  iVar8 = *(int *)(param_1 + 0x44);
  fVar2 = *(float *)(param_1 + 0x50);
  iVar9 = (int)*(short *)(param_1 + 0x1de);
  iVar11 = (int)*(short *)(param_1 + 0x1dc);
  if (((*(uint *)(param_1 + 0x68) & 1) != 0) &&
     (iVar8 == 0 || (*(uint *)(param_1 + 0x68) >> 0x10 & 1) != 0)) {
    *(float *)(local_68 + 8) = (fVar1 - fVar2) + *(float *)(local_68 + 8);
  }
  iVar8 = iVar8 + 1;
  local_6c = iVar12;
  if ((*(float *)(param_1 + 0xf8) <= fVar1) && (fVar2 <= *(float *)(param_1 + 0x100))) {
    if ((*(short *)(param_1 + 0x1be) != -1) &&
       (((fVar18 = *(float *)(iVar10 + 0xe8), fVar2 <= fVar18 && (fVar18 < fVar1)) &&
        (*(int *)(local_68 + 0x14) < 0)))) {
      *(undefined4 *)(local_68 + 0x14) = *(undefined4 *)(param_1 + 0x44);
    }
    iVar12 = *(int *)(param_1 + 0x70);
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    local_44 = fVar2;
    local_34 = fVar1;
    if ((iVar12 == 0x1000000) && (iVar12 = 0, (*(byte *)(param_1 + 4) & 0x40) != 0)) {
      iVar12 = FUN_100fcb39((*(uint *)(param_1 + 0x6c) & 1) + 0x33,0x3f800000);
    }
    puVar7 = *(undefined4 **)(param_1 + 0x74);
    local_64 = 0;
    if (puVar7 == (undefined4 *)0x1000000) {
      puVar7 = (undefined4 *)0x0;
    }
    if ((0 < *(int *)(param_1 + 0x44)) && ((*(byte *)(param_1 + 4) & 0x80) != 0)) {
      local_64 = *(int *)(param_1 + 0x78 + (uint)((*(byte *)(param_1 + 0x6a) & 1) == 0) * 4);
    }
    local_5a = *(short *)(param_1 + 0x1e4);
    local_60 = puVar7;
    local_58 = iVar8;
    local_54 = iVar11;
    local_50 = iVar9;
    if ((-1 < local_5a || iVar8 == iVar9) ||
        (local_64 != 0 || (puVar7 != (undefined4 *)0x0 || iVar12 != 0))) {
      if ((*(byte *)(param_1 + 6) & 0x10) == 0) {
        iVar10 = *(int *)(local_6c + 0x2e8);
        uVar4 = *(undefined4 *)(param_1 + 0x118);
        uVar5 = *(undefined4 *)(param_1 + 0x11c);
        uVar6 = *(undefined4 *)(param_1 + 0x120);
        *(undefined4 *)(iVar10 + 0x48) = *(undefined4 *)(param_1 + 0x114);
        *(undefined4 *)(iVar10 + 0x4c) = uVar4;
        *(undefined4 *)(iVar10 + 0x50) = uVar5;
        *(undefined4 *)(iVar10 + 0x54) = uVar6;
      }
      FUN_1018de6c(*(undefined4 *)(local_6c + 0x2e8),0);
    }
    if (puVar7 != (undefined4 *)0x0 || iVar12 != 0) {
      uVar14 = -(uint)(*(float *)(param_1 + 0x104) <= *(float *)(param_1 + 0xe4));
      uVar15 = -(uint)(*(float *)(param_1 + 0x108) <= local_44);
      uVar16 = -(uint)(*(float *)(param_1 + 0xec) < *(float *)(param_1 + 0x10c));
      uVar17 = -(uint)(local_34 < *(float *)(param_1 + 0x110));
      local_24 = (float)(~uVar14 & (uint)*(float *)(param_1 + 0x104) |
                        (uint)*(float *)(param_1 + 0xe4) & uVar14);
      fStack_20 = (float)(~uVar15 & (uint)*(float *)(param_1 + 0x108) | (uint)local_44 & uVar15);
      fStack_1c = (float)(~uVar16 & (uint)*(float *)(param_1 + 0x10c) |
                         (uint)*(float *)(param_1 + 0xec) & uVar16);
      fStack_18 = (float)(~uVar17 & (uint)*(float *)(param_1 + 0x110) | (uint)local_34 & uVar17);
      if ((iVar12 != 0) && (fStack_20 < fStack_18)) {
        FUN_1018b85a(&local_24,&fStack_1c,iVar12,0,0);
      }
      if ((puVar7 != (undefined4 *)0x0) && (fStack_20 < fStack_18)) {
        FUN_1018b85a(&local_24,&fStack_1c,puVar7,0,0);
      }
    }
    if ((-1 < local_5a) && (-1 < *(short *)(param_1 + 0x1e4))) {
      puVar7 = *(undefined4 **)(param_1 + 0x20);
      local_60 = puVar7 + *(short *)(param_1 + 0x1e4) * 2;
      do {
        iVar12 = *(int *)(param_1 + 0x10);
        iVar10 = *(short *)(puVar7 + 1) * 0x74;
        FUN_101651f3(&local_24,param_1,(int)*(short *)(puVar7 + 1));
        uVar14 = -(uint)(*(float *)(param_1 + 0x104) <= local_24);
        uVar15 = -(uint)(*(float *)(param_1 + 0x108) <= fStack_20);
        uVar16 = -(uint)(fStack_1c < *(float *)(param_1 + 0x10c));
        uVar17 = -(uint)(fStack_18 < *(float *)(param_1 + 0x110));
        local_24 = (float)(~uVar14 & (uint)*(float *)(param_1 + 0x104) | (uint)local_24 & uVar14);
        fStack_20 = (float)(~uVar15 & (uint)*(float *)(param_1 + 0x108) | (uint)fStack_20 & uVar15);
        fStack_1c = (float)(~uVar16 & (uint)*(float *)(param_1 + 0x10c) | (uint)fStack_1c & uVar16);
        fStack_18 = (float)(~uVar17 & (uint)*(float *)(param_1 + 0x110) | (uint)fStack_18 & uVar17);
        fVar13 = (float10)FUN_100fdbca(local_24,*(undefined4 *)(iVar12 + 0x24 + iVar10));
        local_24 = (float)fVar13;
        fVar13 = (float10)FUN_100ea38a(fStack_1c,*(undefined4 *)(iVar12 + 0xc + iVar10));
        fStack_1c = (float)fVar13;
        if (fStack_20 < fStack_18) {
          FUN_1018b85a(&local_24,&fStack_1c,*puVar7,0,0);
        }
        puVar7 = puVar7 + 2;
      } while (puVar7 <= local_60);
    }
    if (((local_64 != 0) && (*(float *)(param_1 + 0x108) <= local_44)) &&
       (local_44 < *(float *)(param_1 + 0x110))) {
      FUN_1018b44e(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),local_44,local_64
                   ,0x3f800000);
    }
    iVar9 = local_50;
    iVar11 = local_54;
    iVar8 = local_58;
    if (((local_58 == local_50) && (*(float *)(param_1 + 0x108) <= local_34)) &&
       (local_34 < *(float *)(param_1 + 0x110))) {
      FUN_1018b44e(*(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),local_34,
                   *(undefined4 *)(param_1 + 0x78),0x3f800000);
      iVar8 = local_58;
    }
  }
  if (iVar8 == iVar11) {
    if (0 < *(int *)(param_1 + 0x40)) {
      uVar3 = *(undefined1 *)(param_1 + 0x1ec);
      iVar12 = 0;
      iVar10 = 0x6e;
      do {
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar10) = uVar3;
        iVar12 = iVar12 + 1;
        iVar10 = iVar10 + 0x74;
      } while (iVar12 < *(int *)(param_1 + 0x40));
    }
    fVar13 = (float10)FUN_100fdbca(*(float *)(param_1 + 0x54) + DAT_1028b430,
                                   *(undefined4 *)(param_1 + 0xf8));
    local_48 = (float)fVar13;
    *(float *)(local_68 + 0xc) = local_48 - *(float *)(param_1 + 200);
    if (iVar8 == iVar9) {
      *(undefined1 *)(param_1 + 0x1f9) = 1;
      fVar13 = (float10)FUN_100ea38a(local_48,*(undefined4 *)(param_1 + 0x100));
      iVar12 = local_6c;
      local_4c = (float)fVar13;
      *(float *)(param_1 + 0x128) = local_4c;
      *(float *)(param_1 + 0x108) = local_4c;
      fVar1 = *(float *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_1 + 0x100);
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
      *(undefined2 *)(param_1 + 0x1e8) = *(undefined2 *)(param_1 + 0x1ea);
      fVar2 = *(float *)(param_1 + 0x50);
      fVar18 = (fVar1 + *(float *)(param_1 + 0xe8)) - *(float *)(param_1 + 200);
      *(float *)(local_6c + 0x148) = fVar18;
      *(float *)(param_1 + 0x54) = fVar18;
      *(float *)(param_1 + 0x50) = fVar18 - (fVar1 - fVar2);
      if (0 < *(int *)(param_1 + 0x40)) {
        iVar10 = 0;
        iVar8 = 100;
        do {
          iVar11 = *(int *)(param_1 + 0x10);
          *(undefined2 *)(iVar11 + -4 + iVar8) = *(undefined2 *)(iVar11 + iVar8);
          *(undefined4 *)(iVar11 + -0x3c + iVar8) = *(undefined4 *)(param_1 + 0x128);
          iVar10 = iVar10 + 1;
          iVar8 = iVar8 + 0x74;
        } while (iVar10 < *(int *)(param_1 + 0x40));
      }
      FUN_101655b6(local_6c,*(int *)(param_1 + 0x10) + 0x24);
      FUN_1018de6c(*(undefined4 *)(iVar12 + 0x2e8),*(undefined2 *)(*(int *)(param_1 + 0x10) + 0x60))
      ;
    }
  }
  if ((*(byte *)(param_1 + 0x68) & 1) == 0) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  *(undefined1 *)(param_1 + 0x1ee) = 0;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_6c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

