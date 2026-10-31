/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407beb66 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407beb66(byte param_1)

{
  byte *pbVar1;
  byte bVar2;
  float fVar3;
  undefined4 uVar4;
  short sVar5;
  uint uVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  longlong unaff_RBX;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  float *pfVar31;
  ulonglong uVar32;
  longlong unaff_RSI;
  undefined4 *puVar33;
  longlong unaff_RDI;
  float10 in_ST0;
  float10 fVar34;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  
  uVar32 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  iVar17 = (int)&stack0xffffffffffffffe0;
  uVar19 = (ulonglong)(iVar17 - 0x1f0U);
  piVar14 = (int *)((ulonglong)_DAT_8489e83110388d00 & 0xffffffffffffffe8);
  *piVar14 = *piVar14 + (int)piVar14;
  pbVar1 = (byte *)(unaff_RBX + 0x39d74c35);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + param_1;
  *(char *)(unaff_RBX + 0x2308be) =
       *(char *)(unaff_RBX + 0x2308be) + param_1 + CARRY1(bVar2,param_1);
  *(char *)(uVar32 - 0x1e7bf001) = *(char *)(uVar32 - 0x1e7bf001) + (char)piVar14;
  fVar41 = *(float *)(uVar32 + 0x10);
  uVar37 = *(undefined4 *)(uVar32 + 0x14);
  uVar39 = *(undefined4 *)(uVar32 + 0x18);
  uVar40 = *(undefined4 *)(uVar32 + 0x1c);
  uVar6 = *(uint *)(unaff_RSI + 0x14cc);
  *(uint *)(uVar19 + 0x98) = uVar6;
  uVar6 = *(uint *)((ulonglong)uVar6 + 0x2e8);
  fVar34 = in_ST0;
  if ((fVar41 == 0.0) && (!NAN(fVar41))) {
    *(undefined8 *)(uVar19 - 8) = 0x1407bebbe;
    fVar34 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    FUN_1407bde07();
    *(float *)(uVar19 + 0xcc) = (float)in_ST0;
    fVar41 = *(float *)(uVar19 + 0xcc);
    uVar37 = 0;
    uVar39 = 0;
    uVar40 = 0;
  }
  *(float *)(uVar19 + 0x70) = fVar41;
  *(undefined4 *)(uVar19 + 0x74) = uVar37;
  *(undefined4 *)(uVar19 + 0x78) = uVar39;
  *(undefined4 *)(uVar19 + 0x7c) = uVar40;
  fVar41 = _DAT_150a7878f + *(float *)(uVar32 + 0xc);
  *(float *)(uVar19 + 0x14) = fVar41;
  dVar7 = (double)fVar41;
  *(double *)(uVar19 + 0x38) = dVar7;
  uVar18 = iVar17 - 0x1f8;
  *(double *)(ulonglong)uVar18 = dVar7;
  ((double *)(ulonglong)uVar18)[-1] = 2.65650721775131e-314;
  FUN_1408c5380();
  *(float10 *)((ulonglong)(iVar17 - 0x1f0U) + 0x20) = fVar34;
  puVar20 = (undefined8 *)(ulonglong)uVar18;
  *puVar20 = puVar20[8];
  puVar20[-1] = 0x1407bec1e;
  FUN_1408c8380();
  puVar21 = (undefined1 *)(ulonglong)(iVar17 - 0x1f0);
  fVar41 = *(float *)(uVar32 + 0xc);
  fVar3 = *(float *)(uVar32 + 0xc);
  *(double *)(puVar21 + 0x108) = (double)*(float10 *)(puVar21 + 0x20);
  *(double *)(puVar21 + 0x100) = (double)in_ST1;
  fVar38 = (float)*(double *)(puVar21 + 0x100);
  *(ulonglong *)(puVar21 + 0xe0) = CONCAT44(fVar38,(float)*(double *)(puVar21 + 0x108));
  *(undefined8 *)(puVar21 + 0xe8) = 0;
  *(float *)(puVar21 + 0x5c) = (float)*(double *)(puVar21 + 0x108);
  *(float *)(puVar21 + 0x120) = fVar38;
  *(float *)(puVar21 + 0x124) = fVar38;
  *(float *)(puVar21 + 0x128) = fVar38;
  *(float *)(puVar21 + 300) = fVar38;
  *(float *)(puVar21 + 0x58) = fVar38;
  if (fVar3 <= 0.0 && fVar41 != 0.0) {
    fVar41 = *(float *)(puVar21 + 0x14) + _DAT_150a78288;
    *(double *)(puVar21 + 0x20) = (double)fVar41;
    *(double *)(ulonglong)uVar18 = (double)fVar41;
    ((double *)(ulonglong)uVar18)[-1] = 2.65650729235522e-314;
    FUN_1408c5380();
    uVar22 = (ulonglong)(iVar17 - 0x1f0);
    *(float *)(uVar22 + 200) = (float)in_ST2;
    *(undefined4 *)(uVar22 + 0x5c) = *(undefined4 *)(uVar22 + 200);
    puVar23 = (undefined8 *)(ulonglong)uVar18;
    *puVar23 = puVar23[5];
    puVar23[-1] = 0x1407becc7;
    FUN_1408c8380();
    puVar21 = (undefined1 *)(ulonglong)(iVar17 - 0x1f0);
    *(float *)(puVar21 + 0xc4) = (float)in_ST3;
    *(undefined4 *)(puVar21 + 0x58) = *(undefined4 *)(puVar21 + 0xc4);
  }
  uVar13 = uRam0000000150a4e327;
  uVar12 = uRam0000000150a4e323;
  uVar11 = uRam0000000150a4e31f;
  uVar10 = _DAT_150a4e31b;
  fVar38 = *(float *)(unaff_RSI + 0xd2c) + *(float *)(unaff_RSI + 0xd2c) +
           *(float *)(unaff_RSI + 0x1228);
  uVar35 = -(uint)(*(float *)(uVar32 + 0xc) < 0.0);
  uVar36 = (uint)fVar38 ^ _DAT_150a4e31b;
  *(undefined1 (*) [16])(puVar21 + 0x170) = ZEXT416(uVar35);
  fVar41 = *(float *)(puVar21 + 0xe0);
  uVar37 = *(undefined4 *)(puVar21 + 0xe4);
  fVar3 = *(float *)(puVar21 + 0x120);
  uVar18 = *(uint *)(puVar21 + 0x124);
  uVar8 = *(uint *)(puVar21 + 0x128);
  uVar9 = *(uint *)(puVar21 + 300);
  fVar42 = (float)((uint)fVar3 ^ uVar10);
  fVar38 = (float)(int)(float)((uint)(*(float *)(puVar21 + 0x70) * fVar3 +
                                     (float)(~uVar35 & uVar36 | uVar35 & (uint)fVar38) * fVar41) &
                              _DAT_150a4a160);
  *(float *)(unaff_RDI + 0xbc) = fVar38;
  *(uint *)(unaff_RDI + 0xc0) = -(uint)(fVar3 != fVar42) & (uint)(fVar41 / fVar3);
  *(float *)(puVar21 + 0x110) = fVar42;
  *(uint *)(puVar21 + 0x114) = uVar18 ^ uVar11;
  *(uint *)(puVar21 + 0x118) = uVar8 ^ uVar12;
  *(uint *)(puVar21 + 0x11c) = uVar9 ^ uVar13;
  fVar42 = fVar38 / fVar42;
  *(float *)(puVar21 + 0xd0) = fVar42;
  *(float *)(puVar21 + 0xd4) = fVar42;
  *(float *)(puVar21 + 0xd8) = fVar42;
  *(float *)(puVar21 + 0xdc) = fVar42;
  *(float *)(puVar21 + 0x20) = fVar41;
  *(undefined4 *)(puVar21 + 0x24) = uVar37;
  *(float *)(puVar21 + 0x28) = fVar41;
  *(undefined4 *)(puVar21 + 0x2c) = uVar37;
  puVar24 = (undefined4 *)(ulonglong)((int)puVar21 - 8);
  puVar24[1] = fVar38;
  *puVar24 = 1;
  *(undefined8 *)(puVar24 + -2) = 0x1407bedae;
  FUN_1407bd234();
  *(undefined8 *)(puVar21 + -8) = 0x1407bedb6;
  FUN_1407bd671();
  uVar37 = *(undefined4 *)(unaff_RDI + 0x54);
  uVar39 = *(undefined4 *)(unaff_RDI + 0xe4);
  uVar40 = *(undefined4 *)(unaff_RDI + 0xec);
  *(int *)(puVar21 + 0x10) = (int)unaff_RDI + 0x104;
  uVar4 = *(undefined4 *)(unaff_RDI + 0x108);
  *(undefined4 *)(puVar21 + 0x1b0) = uVar39;
  *(undefined4 *)(puVar21 + 0x14) = uVar4;
  *(undefined4 *)(puVar21 + 0x1b4) = uVar4;
  *(undefined4 *)(puVar21 + 0x1b8) = uVar40;
  *(undefined4 *)(puVar21 + 0x38) = uVar37;
  *(undefined4 *)(puVar21 + 0x1bc) = uVar37;
  uVar37 = *(undefined4 *)(unaff_RDI + 0x168);
  *(undefined8 *)(puVar21 + -8) = 0;
  *(ulonglong *)(puVar21 + -0x10) = (ulonglong)uVar6;
  *(undefined8 *)(puVar21 + -0x18) = 0x1407bee1b;
  FUN_1407e5d3c(uVar37);
  uVar37 = *(undefined4 *)(unaff_RDI + 0x104);
  sVar5 = *(short *)(unaff_RDI + 0x1e2);
  *(int *)(puVar21 + 0x34) = (int)unaff_RSI;
  *(uint *)(puVar21 + 8) = uVar6;
  if (0 < sVar5) {
    puVar25 = (undefined4 *)(ulonglong)((int)(puVar21 + -0x10) - 8);
    puVar25[1] = *(undefined4 *)
                  ((ulonglong)*(uint *)(unaff_RDI + 0x10) + 0xc +
                  (ulonglong)
                  (uint)(*(short *)(((ulonglong)*(uint *)(unaff_RDI + 0x18) - 2) +
                                   (ulonglong)(uint)(int)sVar5 * 2) * 0x74));
    *puVar25 = uVar37;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar25 + -2) = &UNK_1407bee5d;
    FUN_140755a9a();
  }
  *(undefined4 *)(puVar21 + 0x50) = uVar37;
  *(float *)(puVar21 + 0xc0) = *(float *)(puVar21 + 0xc0) * *(float *)(puVar21 + 0x10);
  *(float *)(puVar21 + 0xc4) = *(float *)(puVar21 + 0xc4) * *(float *)(puVar21 + 0x14);
  *(float *)(puVar21 + 200) = *(float *)(puVar21 + 200) * *(float *)(puVar21 + 0x18);
  *(float *)(puVar21 + 0xcc) = *(float *)(puVar21 + 0xcc) * *(float *)(puVar21 + 0x1c);
  *(uint *)(puVar21 + 0x10) =
       (uint)(*(float *)(uVar32 + 0xc) <= 0.0 && *(float *)(uVar32 + 0xc) != 0.0);
  *(undefined8 *)(puVar21 + -0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar21 + -0x20) = 0;
  *(undefined8 *)(puVar21 + -0x28) = 0;
  *(undefined8 *)(puVar21 + -0x30) = 0x1407beec3;
  FUN_1407bd164();
  uVar26 = (ulonglong)((int)(puVar21 + -0x28) + 0xc);
  *(int *)(uVar26 + 0xc) = (int)unaff_RDI;
  iVar17 = *(int *)(uVar26 + 0xc);
  *(undefined8 *)(uVar26 - 8) = 0;
  *(ulonglong *)(uVar26 - 0x10) = (ulonglong)(iVar17 + 0x10c);
  *(undefined8 *)(uVar26 - 0x18) = *(undefined8 *)(uVar26 + 8);
  *(undefined8 *)(uVar26 - 0x20) = 0x1407beedf;
  FUN_1407623fa();
  uVar27 = (ulonglong)((int)(uVar26 - 0x18) + 0xc);
  *(undefined8 *)(uVar27 - 8) = 0x3e800000;
  *(undefined8 *)(uVar27 - 0x10) = 0x30;
  *(undefined8 *)(uVar27 - 0x18) = 0x1407beeee;
  uVar15 = FUN_140754a09();
  uVar28 = (ulonglong)((int)(uVar27 - 0x10) + 8);
  puVar33 = (undefined4 *)(uVar28 + 0x1c0 & 0xffffffff);
  *puVar33 = *(undefined4 *)((ulonglong)*(uint *)(uVar28 + 0xc) + 0x10c);
  puVar33[1] = *(undefined4 *)(uVar28 + 0x38);
  puVar16 = (undefined4 *)(uVar28 + 0x198 & 0xffffffff);
  *puVar16 = *(undefined4 *)((ulonglong)*(uint *)(uVar28 + 0xc) + 0x104);
  puVar16[1] = *(undefined4 *)(uVar28 + 0x14);
  uVar37 = *(undefined4 *)(uVar28 + 0x18);
  *(undefined8 *)(uVar28 - 8) = 0;
  *(undefined8 *)(uVar28 - 0x10) = 0;
  *(undefined8 *)(uVar28 - 0x18) = uVar15;
  *(undefined4 **)(uVar28 - 0x20) = puVar33;
  *(undefined4 **)(uVar28 - 0x28) = puVar16;
  *(undefined8 *)(uVar28 - 0x30) = 0x1407bef43;
  FUN_1407e372a(uVar37);
  uVar37 = *(undefined4 *)((ulonglong)*(uint *)(uVar28 - 0x1c) + 0x108);
  *puVar33 = *(undefined4 *)(uVar28 + 0x38);
  puVar33[1] = uVar37;
  *(undefined8 *)(uVar28 - 0x30) = 0;
  *(ulonglong *)(uVar28 - 0x38) = (ulonglong)(iVar17 + 0x10c);
  *(undefined4 **)(uVar28 - 0x40) = puVar33;
  *(undefined8 *)(uVar28 - 0x48) = 0x1407bef6d;
  FUN_1407623fa();
  uVar29 = (ulonglong)((int)(uVar28 - 0x40) + 0xc);
  *(undefined8 *)(uVar29 - 8) = 0;
  *(undefined8 *)(uVar29 - 0x10) = 0;
  *(undefined8 *)(uVar29 - 0x18) = 0;
  uVar6 = *(uint *)(uVar32 + 8);
  *(ulonglong *)(uVar29 - 0x20) = (ulonglong)uVar6;
  *(ulonglong *)(uVar29 - 0x28) = uVar29 + 0x1b0 & 0xffffffff;
  *(undefined8 *)(uVar29 - 0x30) = 0x1407bef84;
  FUN_14078564e();
  uVar30 = (ulonglong)((int)(uVar29 - 0x28) + 0x14);
  *(ulonglong *)(uVar30 - 8) = (ulonglong)uVar6;
  *(undefined8 *)(uVar30 - 0x10) = 0x1407bef8d;
  FUN_14075bad9();
  uVar32 = (ulonglong)*(uint *)((ulonglong)((int)(uVar30 - 8) + 4) + 0x44);
  fVar41 = (*(float *)(uVar32 + 0x1228) -
           *(float *)((ulonglong)*(uint *)(uVar32 + 0x1224) + 0x34) * *(float *)(uVar32 + 0x1230)) *
           _DAT_150a7609b;
  pfVar31 = (float *)(ulonglong)((int)(uVar30 - 8) - 4);
  pfVar31[1] = 0.0;
  *pfVar31 = fVar41;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar31 + -2) = &UNK_1407befce;
  FUN_140755a9a();
}

