/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801907e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801907e0(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  short sVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  short sVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined2 *puVar17;
  short *psVar18;
  longlong lVar19;
  ulonglong uVar20;
  short sVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  if (0xffffff < param_4 && 2 < (int)param_3) {
    uVar11 = (ulonglong)param_3;
    uVar2 = **(undefined8 **)(param_1 + 0x38);
    if ((*(byte *)(param_1 + 0x30) & 4) == 0) {
      FUN_18018f8fc(param_1,param_3 * 3 + -6,param_3);
      puVar16 = *(undefined8 **)(param_1 + 0x40);
      uVar11 = 0;
      do {
        *puVar16 = *(undefined8 *)(param_2 + uVar11 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        puVar16 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x14);
        *(undefined8 **)(param_1 + 0x40) = puVar16;
        uVar11 = uVar11 + 1;
      } while (param_3 != uVar11);
      puVar17 = *(undefined2 **)(param_1 + 0x48);
      uVar6 = 2;
      sVar10 = 1;
      do {
        *puVar17 = *(undefined2 *)(param_1 + 0x34);
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + *(short *)(param_1 + 0x34);
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) =
             (short)*(undefined4 *)(param_1 + 0x34) + (short)uVar6;
        puVar17 = (undefined2 *)(*(longlong *)(param_1 + 0x48) + 6);
        *(undefined2 **)(param_1 + 0x48) = puVar17;
        uVar6 = uVar6 + 1;
        sVar10 = sVar10 + 1;
      } while (param_3 != uVar6);
      param_3 = param_3 & 0xffff;
    }
    else {
      fVar29 = *(float *)(param_1 + 0xd0);
      FUN_18018f8fc(param_1,param_3 * 9 + -6);
      iVar15 = *(int *)(param_1 + 0x34);
      sVar10 = (short)iVar15;
      psVar18 = *(short **)(param_1 + 0x48);
      iVar7 = iVar15 + 2;
      uVar6 = 2;
      do {
        *psVar18 = sVar10;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = (short)iVar7;
        iVar7 = iVar7 + 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = (short)iVar7;
        psVar18 = (short *)(*(longlong *)(param_1 + 0x48) + 6);
        *(short **)(param_1 + 0x48) = psVar18;
        uVar6 = uVar6 + 1;
      } while (param_3 != uVar6);
      lVar9 = *(longlong *)(param_1 + 0x38);
      if (*(int *)(lVar9 + 0x4c) < (int)param_3) {
        if (*(longlong *)(lVar9 + 0x50) != 0) {
          FUN_1800fe8d4();
        }
        uVar8 = FUN_1800fe7f8(uVar11 * 8);
        *(undefined8 *)(lVar9 + 0x50) = uVar8;
        *(uint *)(lVar9 + 0x4c) = param_3;
        lVar9 = *(longlong *)(param_1 + 0x38);
      }
      uVar6 = _DAT_1802b0ce0;
      lVar9 = *(longlong *)(lVar9 + 0x50);
      uVar20 = (ulonglong)(param_3 - 1);
      uVar12 = 0;
      uVar13 = uVar20;
      do {
        lVar19 = (longlong)(int)uVar13;
        uVar8 = *(undefined8 *)(param_2 + uVar12 * 8);
        uVar1 = *(undefined8 *)(param_2 + lVar19 * 8);
        fVar22 = (float)uVar8 - (float)uVar1;
        fVar23 = (float)((ulonglong)uVar8 >> 0x20) - (float)((ulonglong)uVar1 >> 0x20);
        auVar24._0_4_ = fVar22 * fVar22 + fVar23 * fVar23;
        auVar24._4_4_ = fVar23;
        auVar24._8_8_ = 0;
        if (0.0 < auVar24._0_4_) {
          auVar24 = rsqrtss(auVar24,auVar24);
          fVar22 = fVar22 * auVar24._0_4_;
          fVar23 = fVar23 * auVar24._0_4_;
        }
        *(float *)(lVar9 + lVar19 * 8) = fVar23;
        *(uint *)(lVar9 + 4 + lVar19 * 8) = (uint)fVar22 ^ uVar6;
        fVar5 = DAT_1802df070;
        fVar4 = DAT_1802de570._4_4_;
        fVar3 = (float)DAT_1802de570;
        fVar23 = DAT_1802dbb34;
        fVar22 = DAT_1802ac570;
        uVar13 = uVar12 & 0xffffffff;
        uVar12 = uVar12 + 1;
      } while (uVar11 != uVar12);
      fVar29 = fVar29 * DAT_1802dbb2c;
      uVar13 = 0;
      do {
        uVar8 = *(undefined8 *)(lVar9 + (longlong)(int)uVar20 * 8);
        uVar1 = *(undefined8 *)(lVar9 + uVar13 * 8);
        fVar25 = ((float)uVar1 + (float)uVar8) * fVar3;
        fVar26 = ((float)((ulonglong)uVar1 >> 0x20) + (float)((ulonglong)uVar8 >> 0x20)) * fVar4;
        fVar27 = fVar25 * fVar25 + fVar26 * fVar26;
        if (fVar5 < fVar27) {
          fVar27 = fVar22 / fVar27;
          fVar28 = fVar23;
          if (fVar27 <= fVar23) {
            fVar28 = fVar27;
          }
          fVar25 = fVar25 * fVar28;
          fVar26 = fVar26 * fVar28;
        }
        fVar25 = fVar29 * fVar25;
        fVar26 = fVar26 * fVar29;
        **(float **)(param_1 + 0x40) = *(float *)(param_2 + uVar13 * 8) - fVar25;
        *(float *)(*(longlong *)(param_1 + 0x40) + 4) =
             *(float *)(param_2 + 4 + uVar13 * 8) - fVar26;
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar25 + *(float *)(param_2 + uVar13 * 8)
        ;
        *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) =
             fVar26 + *(float *)(param_2 + 4 + uVar13 * 8);
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x1c) = uVar2;
        *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = param_4 & 0xffffff;
        *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
        sVar14 = (short)iVar15;
        **(short **)(param_1 + 0x48) = sVar14;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar10 + (short)uVar20 * 2;
        sVar21 = sVar10 + 1 + (short)uVar20 * 2;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar21;
        *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar14 + 1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar14;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
        uVar20 = uVar13 & 0xffffffff;
        uVar13 = uVar13 + 1;
        iVar15 = iVar15 + 2;
      } while (uVar11 != uVar13);
      param_3 = param_3 * 2 & 0xfffe;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + param_3;
  }
  return;
}

