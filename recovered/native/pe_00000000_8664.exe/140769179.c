/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769179 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140769179(void)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 auVar3 [12];
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_XMM2_Qb;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  uVar12 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x74);
  uVar14 = (ulonglong)_DAT_150b068dd;
  if (*(char *)(uVar14 + 0x27de) == '\x01') {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar10 = uVar12 + 0x20 & 0xffffffff;
  puVar15 = (undefined4 *)(ulonglong)(_DAT_150b068dd + 0x1e80);
  puVar16 = (undefined4 *)(uVar12 + 0x20 & 0xffffffff);
  for (lVar9 = 0x14; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  *(undefined4 *)(uVar14 + 0x1e44) = 0;
  *(undefined8 *)(uVar12 - 8) = *(undefined8 *)((ulonglong)*(uint *)(uVar14 + 0x14cc) + 0x3c);
  *(undefined8 *)(uVar12 - 0x10) = 0x1407691c6;
  uVar7 = FUN_1407567d0();
  iVar11 = (int)(uVar12 - 8);
  uVar4 = *(undefined8 *)(uVar10 + 0x14);
  pfVar8 = (float *)(ulonglong)(iVar11 + 0x1cU);
  *(undefined8 *)(pfVar8 + -2) = *(undefined8 *)(uVar10 + 0xc);
  *(undefined8 *)pfVar8 = uVar4;
  fVar19 = pfVar8[-2] + _DAT_150a21f42;
  fVar20 = pfVar8[-1] + fRam0000000150a21f46;
  fVar21 = *pfVar8 + fRam0000000150a21f4a;
  fVar22 = pfVar8[1] + fRam0000000150a21f4e;
  pfVar8[-2] = fVar19;
  pfVar8[-1] = fVar20;
  *pfVar8 = fVar21;
  pfVar8[1] = fVar22;
  uVar1 = *(undefined4 *)(uVar14 + 0xe8);
  uVar10 = *(ulonglong *)(uVar14 + 0xe4);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar10;
  puVar15 = (undefined4 *)(ulonglong)(iVar11 + 0xc);
  *puVar15 = *(undefined4 *)(uVar14 + 0xe4);
  puVar15[1] = uVar1;
  auVar3._4_8_ = in_XMM2_Qb;
  auVar3._0_4_ = fVar20;
  auVar23._0_8_ = auVar3._0_8_ << 0x20;
  auVar23._8_4_ = fVar21;
  auVar23._12_4_ = fVar22;
  auVar24._12_4_ = fVar22;
  auVar24._8_4_ = fVar21;
  auVar24._0_8_ = auVar23._8_8_;
  auVar25 = minps(auVar24,auVar25);
  uVar17 = -(uint)((float)uVar10 < fVar19);
  uVar18 = -(uint)((float)(uVar10 >> 0x20) < fVar20);
  *(ulonglong *)(ulonglong)(iVar11 + 4) =
       CONCAT44(~uVar18 & auVar25._4_4_,~uVar17 & auVar25._0_4_) |
       CONCAT44((uint)fVar20 & uVar18,(uint)fVar19 & uVar17);
  uVar6 = uRam0000000150a21fa5;
  uVar5 = uRam0000000150a21fa1;
  uVar1 = uRam0000000150a21f9d;
  puVar13 = (undefined4 *)(ulonglong)(iVar11 - 0x14);
  puVar13[2] = _DAT_150a21f99;
  puVar13[3] = uVar1;
  puVar13[4] = uVar5;
  puVar13[5] = uVar6;
  puVar13[1] = iVar11 + 0x1cU;
  *puVar13 = (int)(puVar13 + 10);
  *(undefined8 *)(puVar13 + -2) = 0x140769240;
  FUN_1407e3632(uVar7);
  *(undefined8 *)(puVar13 + -2) = 0x3f800000;
  *(undefined8 *)(puVar13 + -4) = 0xffffffffff00ff00;
  *(ulonglong **)(puVar13 + -6) = (ulonglong *)(ulonglong)(iVar11 + 4);
  *(undefined4 **)(puVar13 + -8) = puVar15;
  *(undefined8 *)(puVar13 + -10) = 0x140769253;
  FUN_1407e31ae(uVar7);
  if (_DAT_150af1f5f == (puVar13[0x14] ^ (uint)(puVar13 + -8))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar13 + -10) = FUN_140769276;
  FUN_1408802b0(puVar13[0x14] ^ (uint)(puVar13 + -8));
}

