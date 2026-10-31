/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10189368 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_10189368(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  short sVar12;
  short sVar13;
  undefined8 *puVar14;
  uint uVar15;
  short sVar16;
  undefined2 *puVar17;
  short *psVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  if (0xffffff < param_4 && 2 < (int)param_3) {
    uVar3 = **(undefined4 **)(param_1 + 0x2c);
    uVar4 = (*(undefined4 **)(param_1 + 0x2c))[1];
    if ((*(byte *)(param_1 + 0x24) & 4) == 0) {
      FUN_10188516(param_3 * 3 + -6,param_3);
      puVar14 = *(undefined8 **)(param_1 + 0x30);
      uVar9 = 0;
      do {
        *puVar14 = *(undefined8 *)(param_2 + uVar9 * 8);
        iVar10 = *(int *)(param_1 + 0x30);
        *(undefined4 *)(iVar10 + 0xc) = uVar4;
        *(undefined4 *)(iVar10 + 8) = uVar3;
        *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
        puVar14 = (undefined8 *)(*(int *)(param_1 + 0x30) + 0x14);
        *(undefined8 **)(param_1 + 0x30) = puVar14;
        uVar9 = uVar9 + 1;
      } while (param_3 != uVar9);
      puVar17 = *(undefined2 **)(param_1 + 0x34);
      uVar9 = 2;
      sVar12 = 1;
      do {
        *puVar17 = *(undefined2 *)(param_1 + 0x28);
        *(short *)(*(int *)(param_1 + 0x34) + 2) = sVar12 + *(short *)(param_1 + 0x28);
        *(short *)(*(int *)(param_1 + 0x34) + 4) =
             (short)*(undefined4 *)(param_1 + 0x28) + (short)uVar9;
        puVar17 = (undefined2 *)(*(int *)(param_1 + 0x34) + 6);
        *(undefined2 **)(param_1 + 0x34) = puVar17;
        uVar9 = uVar9 + 1;
        sVar12 = sVar12 + 1;
      } while (param_3 != uVar9);
      param_3 = param_3 & 0xffff;
    }
    else {
      fVar29 = *(float *)(param_1 + 0xa8);
      FUN_10188516(param_3 * 9 + -6,param_3 * 2);
      iVar20 = *(int *)(param_1 + 0x28);
      psVar18 = *(short **)(param_1 + 0x34);
      sVar12 = (short)iVar20;
      iVar10 = iVar20 + 2;
      uVar9 = 2;
      do {
        *psVar18 = sVar12;
        *(short *)(*(int *)(param_1 + 0x34) + 2) = (short)iVar10;
        iVar10 = iVar10 + 2;
        *(short *)(*(int *)(param_1 + 0x34) + 4) = (short)iVar10;
        psVar18 = (short *)(*(int *)(param_1 + 0x34) + 6);
        *(short **)(param_1 + 0x34) = psVar18;
        uVar9 = uVar9 + 1;
      } while (param_3 != uVar9);
      iVar10 = *(int *)(param_1 + 0x2c);
      if (*(int *)(iVar10 + 0x40) < (int)param_3) {
        if (*(int *)(iVar10 + 0x44) != 0) {
          FUN_100fa2cb(*(int *)(iVar10 + 0x44));
        }
        uVar11 = FUN_100fa1fa(param_3 * 8);
        *(undefined4 *)(iVar10 + 0x44) = uVar11;
        *(uint *)(iVar10 + 0x40) = param_3;
        iVar10 = *(int *)(param_1 + 0x2c);
      }
      uVar9 = _DAT_1028f620;
      iVar10 = *(int *)(iVar10 + 0x44);
      uVar21 = 0;
      uVar19 = param_3 - 1;
      do {
        uVar15 = uVar21;
        uVar1 = *(undefined8 *)(param_2 + uVar15 * 8);
        uVar2 = *(undefined8 *)(param_2 + uVar19 * 8);
        fVar22 = (float)uVar1 - (float)uVar2;
        fVar23 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
        auVar24._0_4_ = fVar22 * fVar22 + fVar23 * fVar23;
        auVar24._4_4_ = fVar23;
        auVar24._8_8_ = 0;
        if (0.0 < auVar24._0_4_) {
          auVar24 = rsqrtss(auVar24,auVar24);
          fVar22 = fVar22 * auVar24._0_4_;
          fVar23 = fVar23 * auVar24._0_4_;
        }
        *(float *)(iVar10 + uVar19 * 8) = fVar23;
        *(uint *)(iVar10 + 4 + uVar19 * 8) = (uint)fVar22 ^ uVar9;
        fVar8 = DAT_102b9528;
        fVar7 = DAT_102b8c10;
        fVar6 = DAT_102b89c0._4_4_;
        fVar23 = (float)DAT_102b89c0;
        fVar22 = DAT_1028b430;
        uVar21 = uVar15 + 1;
        uVar19 = uVar15;
      } while (param_3 != uVar15 + 1);
      fVar29 = fVar29 * DAT_102b70e0;
      uVar9 = 0;
      uVar21 = param_3 - 1;
      do {
        uVar19 = uVar9;
        uVar1 = *(undefined8 *)(iVar10 + uVar21 * 8);
        uVar2 = *(undefined8 *)(iVar10 + uVar19 * 8);
        fVar25 = ((float)uVar2 + (float)uVar1) * fVar23;
        fVar26 = ((float)((ulonglong)uVar2 >> 0x20) + (float)((ulonglong)uVar1 >> 0x20)) * fVar6;
        fVar27 = fVar25 * fVar25 + fVar26 * fVar26;
        if (fVar8 < fVar27) {
          fVar27 = fVar22 / fVar27;
          fVar28 = fVar7;
          if (fVar27 <= fVar7) {
            fVar28 = fVar27;
          }
          fVar25 = fVar25 * fVar28;
          fVar26 = fVar26 * fVar28;
        }
        fVar25 = fVar29 * fVar25;
        fVar26 = fVar26 * fVar29;
        **(float **)(param_1 + 0x30) = *(float *)(param_2 + uVar19 * 8) - fVar25;
        *(float *)(*(int *)(param_1 + 0x30) + 4) = *(float *)(param_2 + 4 + uVar19 * 8) - fVar26;
        iVar5 = *(int *)(param_1 + 0x30);
        *(undefined4 *)(iVar5 + 0xc) = uVar4;
        *(undefined4 *)(iVar5 + 8) = uVar3;
        *(uint *)(*(int *)(param_1 + 0x30) + 0x10) = param_4;
        *(float *)(*(int *)(param_1 + 0x30) + 0x14) = fVar25 + *(float *)(param_2 + uVar19 * 8);
        *(float *)(*(int *)(param_1 + 0x30) + 0x18) = fVar26 + *(float *)(param_2 + 4 + uVar19 * 8);
        iVar5 = *(int *)(param_1 + 0x30);
        *(undefined4 *)(iVar5 + 0x20) = uVar4;
        *(undefined4 *)(iVar5 + 0x1c) = uVar3;
        *(uint *)(*(int *)(param_1 + 0x30) + 0x24) = param_4 & 0xffffff;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 0x28;
        sVar16 = (short)iVar20;
        **(short **)(param_1 + 0x34) = sVar16;
        *(short *)(*(int *)(param_1 + 0x34) + 2) = sVar12 + (short)uVar21 * 2;
        sVar13 = sVar12 + 1 + (short)uVar21 * 2;
        *(short *)(*(int *)(param_1 + 0x34) + 4) = sVar13;
        *(short *)(*(int *)(param_1 + 0x34) + 6) = sVar13;
        *(short *)(*(int *)(param_1 + 0x34) + 8) = sVar16 + 1;
        *(short *)(*(int *)(param_1 + 0x34) + 10) = sVar16;
        *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0xc;
        iVar20 = iVar20 + 2;
        uVar9 = uVar19 + 1;
        uVar21 = uVar19;
      } while (param_3 != uVar19 + 1);
      param_3 = param_3 * 2 & 0xfffe;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + param_3;
  }
  return;
}

