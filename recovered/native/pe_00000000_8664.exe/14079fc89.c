/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079fc89 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14079fc89(int param_1)

{
  byte *pbVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  float *pfVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  byte bVar25;
  longlong unaff_RBX;
  undefined4 *puVar24;
  int iVar26;
  undefined4 *puVar28;
  float *pfVar29;
  undefined4 *puVar30;
  undefined4 *puVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined4 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  ulonglong uVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  undefined4 *puVar40;
  ulonglong uVar41;
  undefined4 *puVar42;
  undefined4 *puVar43;
  undefined4 *puVar44;
  undefined4 *puVar45;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *puVar46;
  byte in_R11B;
  bool bVar47;
  float10 in_ST0;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float *pfVar27;
  
  iVar26 = (int)&stack0xffffffffffffffe0;
  pfVar27 = (float *)(ulonglong)(iVar26 - 0xb8);
  pcVar10 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffffb4);
  cVar6 = (char)pcVar10;
  *pcVar10 = *pcVar10 + cVar6;
  pbVar1 = (byte *)(unaff_RBX + 0x39d74c2d);
  bVar25 = *pbVar1;
  bVar21 = (byte)param_1;
  *pbVar1 = *pbVar1 + bVar21;
  *(char *)(unaff_RBX + 0x14cc85) = *(char *)(unaff_RBX + 0x14cc85) + bVar21 + CARRY1(bVar25,bVar21)
  ;
  *pcVar10 = *pcVar10 + cVar6;
  *(int *)(unaff_RBX + 0x14ccb5) = *(int *)(unaff_RBX + 0x14ccb5) + param_1;
  pcVar10[0xfebe] = pcVar10[0xfebe] + cVar6;
  *pcVar10 = *pcVar10 + cVar6;
  if (*pcVar10 != '\0') {
    uVar11 = 0;
    goto LAB_14079fcc5;
  }
  uVar7 = *(uint *)((longlong)pfVar27 + 0xd8);
  if ((*(uint *)((longlong)pfVar27 + 0xd0) & 0x402) == 0) {
    uVar8 = *(undefined4 *)(unaff_RSI + 0x17c);
    puVar28 = (undefined4 *)(ulonglong)(iVar26 - 0xc0);
    puVar28[1] = *(uint *)(unaff_RBP + 0xd10);
    *puVar28 = uVar8;
    *(undefined8 *)(puVar28 + -2) = 0x14079fd29;
    FUN_14074225a();
    pfVar27 = (float *)(ulonglong)(iVar26 - 0xb8);
    *(float *)((longlong)pfVar27 + 0x70) = (float)in_ST0;
    *(undefined1 (*) [16])((longlong)pfVar27 + 0x24) = ZEXT416(*(uint *)((longlong)pfVar27 + 0x70));
  }
  else {
    *(undefined1 (*) [16])((longlong)pfVar27 + 0x24) = ZEXT416(*(uint *)(unaff_RBP + 0xd10));
  }
  uVar11 = (ulonglong)*(uint *)((longlong)pfVar27 + 0xd4);
  *(undefined1 (*) [16])((longlong)pfVar27 + 0x50) = ZEXT416(*(uint *)(unaff_RBP + 0xd0c));
  if (uVar7 == 0) {
    *(undefined8 *)((longlong)pfVar27 + -8) = 0;
    *(ulonglong *)((longlong)pfVar27 + -0x10) = uVar11;
    *(undefined8 *)((longlong)pfVar27 + -0x18) = 0x14079fd5d;
    uVar7 = FUN_14075544d();
    pfVar27 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar27 + -0x10) + 8);
    uVar11 = (ulonglong)*(uint *)((longlong)pfVar27 + 0xd4);
  }
  uVar18 = *(uint *)((longlong)pfVar27 + 0xd0);
  *(bool *)((longlong)pfVar27 + 0x34) = (uVar18 & 2) == 0;
  *(undefined8 *)((longlong)pfVar27 + -8) = 0xffffffffbf800000;
  *(undefined8 *)((longlong)pfVar27 + -0x10) = 0;
  *(uint *)((longlong)pfVar27 + 0x44) = uVar7;
  *(ulonglong *)((longlong)pfVar27 + -0x18) = (ulonglong)uVar7;
  *(ulonglong *)((longlong)pfVar27 + -0x20) = uVar11;
  *(ulonglong *)((longlong)pfVar27 + -0x28) = (ulonglong)((longlong)pfVar27 + 0xac) & 0xffffffff;
  *(undefined8 *)((longlong)pfVar27 + -0x30) = 0x14079fd96;
  uVar12 = FUN_1407559fe();
  iVar26 = (int)(undefined1 *)((longlong)pfVar27 + -0x28);
  pfVar29 = (float *)(ulonglong)(iVar26 + 0x14);
  fVar56 = *(float *)(unaff_RBP + 0x1228);
  fVar50 = *(float *)(unaff_RSI + 0x17c);
  if ((uVar18 & 0x402) != 0) {
    uVar8 = *(undefined4 *)(unaff_RBP + 0xd10);
    puVar30 = (undefined4 *)(ulonglong)(iVar26 + 0xc);
    puVar30[1] = fVar50;
    *puVar30 = uVar8;
    puVar30[7] = fVar56;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar30 + -2) = &UNK_14079fdd2;
    FUN_140755a9a();
  }
  fVar52 = pfVar29[9];
  fVar49 = pfVar29[10];
  if (((uint)pfVar29[0x34] >> 0xe & 1) == 0) {
    pfVar29[6] = 0.0;
  }
  else {
    pfVar29[6] = (float)CONCAT71((int7)((ulonglong)uVar12 >> 8),*(int *)(unaff_RBP + 0x2308) != 0);
  }
  pfVar29[5] = 0.0;
  if (SUB42(pfVar29[0x34],0) < 0) {
    pfVar29[5] = (float)CONCAT31((int3)((uint)pfVar29[0x34] >> 8),*(int *)(unaff_RBP + 0x2308) != 0)
    ;
  }
  fVar2 = *(float *)((ulonglong)*(byte *)(pfVar29 + 0xd) * 4 + 0x102b9630);
  fVar54 = pfVar29[0x14] + pfVar29[0x14] + fVar56 + pfVar29[0x2b];
  fVar55 = fVar52 + fVar52 + pfVar29[0x2c];
  pfVar29[0x28] = 0.0;
  pfVar29[0x27] = 0.0;
  pfVar29[9] = fVar52;
  pfVar29[10] = fVar49;
  pfVar29[0xb] = pfVar29[0xb];
  pfVar29[0xc] = pfVar29[0xc];
  iVar20 = (int)unaff_RSI;
  if (*(char *)(pfVar29 + 6) == '\0') {
    pfVar13 = (float *)(ulonglong)(iVar20 + 0x144U);
    uVar7 = iVar20 + 0x26c;
    if (((uint)pfVar29[0x34] >> 0xc & 1) == 0) {
      uVar7 = iVar20 + 0x144U;
    }
    fVar51 = *(float *)(ulonglong)uVar7;
    pfVar29[0x27] = fVar51;
    fVar48 = *(float *)(unaff_RSI + 0x148);
    fVar52 = (fVar50 - fVar52) + fVar48;
    pfVar29[0x28] = fVar52;
    if (((uint)pfVar29[0x34] >> 0xd & 1) == 0) {
      fVar53 = *(float *)(unaff_RSI + 0x274);
    }
    else {
      fVar53 = *pfVar13 + fVar54 + pfVar29[0x14];
    }
  }
  else {
    fVar51 = *(float *)(unaff_RSI + 0x27c);
    pfVar29[0x27] = fVar51;
    pfVar13 = (float *)(ulonglong)(iVar20 + 0x144);
    fVar48 = *(float *)(unaff_RSI + 0x148);
    fVar52 = (fVar50 - fVar52) + fVar48;
    pfVar29[0x28] = fVar52;
    fVar53 = *(float *)(unaff_RSI + 0x284);
  }
  fVar56 = fVar2 * pfVar29[0x14] + fVar56;
  pfVar29[0x29] = fVar53;
  pfVar29[0x2a] = fVar55 + fVar52;
  uVar11 = (ulonglong)(uint)pfVar29[0x34];
  if (((uint)pfVar29[0x34] & 2) != 0) {
    fVar52 = (float)(int)(*(float *)(unaff_RSI + 0x80) * _DAT_150a5704b);
    pfVar29[0x27] = fVar51 - fVar52;
    pfVar29[0x29] = fVar53 + fVar52;
  }
  fVar52 = *pfVar13;
  pfVar29[1] = fVar56;
  fVar52 = fVar52 + fVar56;
  pfVar29[3] = fVar52;
  pfVar29[0x25] = fVar52;
  *pfVar29 = fVar50 + fVar48;
  pfVar29[0x26] = fVar50 + fVar48;
  puVar46 = (undefined8 *)((ulonglong)(pfVar29 + 0x21) & 0xffffffff);
  pfVar29[0xd] = fVar54;
  pfVar29[0xe] = fVar55;
  pfVar29[0xf] = pfVar29[0x15] + pfVar29[0x15] + 0.0;
  pfVar29[0x10] = fVar49 + fVar49 + 0.0;
  *puVar46 = CONCAT44(fVar55,fVar54);
  puVar31 = (undefined4 *)(ulonglong)(iVar26 + 0xc);
  puVar31[1] = puVar31[0xb];
  *puVar31 = (int)(pfVar29 + 0x21);
  *(undefined8 *)(puVar31 + -2) = 0x14079ffe0;
  FUN_1407646e0();
  uVar32 = (ulonglong)(iVar26 + 0x14);
  uVar8 = *(undefined4 *)(uVar32 + 0xa0);
  uVar3 = *(undefined4 *)(uVar32 + 0xa4);
  uVar4 = *(undefined4 *)(uVar32 + 0xa8);
  *(undefined4 *)puVar46 = *(undefined4 *)(uVar32 + 0x9c);
  *(undefined4 *)((longlong)puVar46 + 4) = uVar8;
  *(undefined4 *)(puVar46 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar46 + 0xc) = uVar4;
  if ((*(uint *)(uVar32 + 0xd0) & 0x7802) == 0) {
    fVar56 = 0.0;
    if (0.0 < *(float *)(uVar32 + 0xac)) {
      fVar56 = *(float *)(unaff_RBP + 0xd1c) + *(float *)(unaff_RBP + 0xd1c);
    }
    *(float *)(uVar32 + 0x8c) = *(float *)(uVar32 + 0x34) + *(float *)(uVar32 + 0x9c) + fVar56;
  }
  uVar7 = *(uint *)(uVar32 + 0xcc);
  if ((*(byte *)(unaff_RBP + 0x1e48) & 0x10) != 0) {
    uVar7 = *(uint *)(unaff_RBP + 0x1e78);
  }
  *(undefined8 *)(uVar32 - 8) = *(undefined8 *)(uVar32 + 0xd0);
  *(uint *)(uVar32 + 100) = uVar7;
  *(ulonglong *)(uVar32 - 0x10) = (ulonglong)uVar7;
  *(undefined8 *)(uVar32 - 0x18) = 0x1407a005d;
  uVar8 = FUN_1407a0b85();
  uVar33 = (ulonglong)((int)(uVar32 - 0x10) + 8);
  *(undefined4 *)(uVar33 + 0x34) = uVar8;
  bVar25 = (byte)*(undefined4 *)(uVar33 + 0x18) | *(byte *)(uVar33 + 0x14);
  if ((bVar25 & 1) == 0) {
    *(undefined8 *)(uVar33 - 8) = 0;
    *(undefined8 *)(uVar33 - 0x10) = 0;
    *(undefined8 *)(uVar33 - 0x18) = *(undefined8 *)(uVar33 + 0xc4);
    *(undefined8 **)(uVar33 - 0x20) = puVar46;
    *(undefined8 *)(uVar33 - 0x28) = 0x1407a00f4;
    cVar6 = FUN_1407648a8();
    pfVar27 = (float *)(ulonglong)((int)(uVar33 - 0x20) + 0x10);
  }
  else {
    *(undefined4 *)(uVar33 + 0x24) = *(undefined4 *)(unaff_RSI + 0x28c);
    *(undefined4 *)(uVar33 + 0x10) = *(undefined4 *)(unaff_RSI + 0x294);
    *(undefined4 *)(unaff_RSI + 0x28c) = *(undefined4 *)(unaff_RSI + 0x27c);
    *(undefined4 *)(unaff_RSI + 0x294) = *(undefined4 *)(unaff_RSI + 0x284);
    *(undefined8 *)(uVar33 - 8) = 0;
    *(undefined8 *)(uVar33 - 0x10) = 0;
    *(undefined8 *)(uVar33 - 0x18) = *(undefined8 *)(uVar33 + 0xc4);
    *(undefined8 **)(uVar33 - 0x20) = puVar46;
    *(undefined8 *)(uVar33 - 0x28) = 0x1407a00c0;
    cVar6 = FUN_1407648a8();
    pfVar27 = (float *)(ulonglong)((int)(uVar33 - 0x20) + 0x10);
    *(undefined4 *)(unaff_RSI + 0x28c) = *(undefined4 *)((longlong)pfVar27 + 0x24);
    *(undefined4 *)(unaff_RSI + 0x294) = *(undefined4 *)((longlong)pfVar27 + 0x10);
  }
  *(byte *)(unaff_RBP + 0x1e88) = *(byte *)(unaff_RBP + 0x1e88) | 2;
  uVar8 = *(undefined4 *)((longlong)pfVar27 + 0xa0);
  uVar3 = *(undefined4 *)((longlong)pfVar27 + 0xa4);
  uVar4 = *(undefined4 *)((longlong)pfVar27 + 0xa8);
  *(undefined4 *)(unaff_RBP + 0x1eac) = *(undefined4 *)((longlong)pfVar27 + 0x9c);
  *(undefined4 *)(unaff_RBP + 0x1eb0) = uVar8;
  *(undefined4 *)(unaff_RBP + 0x1eb4) = uVar3;
  *(undefined4 *)(unaff_RBP + 0x1eb8) = uVar4;
  uVar7 = *(uint *)((longlong)pfVar27 + 0xd0);
  fVar56 = *(float *)((longlong)pfVar27 + 4);
  if ((uVar7 & 0x1c0000) == 0) {
    uVar7 = *(uint *)(unaff_RBP + 0xd90) | *(uint *)((longlong)pfVar27 + 0xd0);
  }
  if (((uVar7 & 0x180000) == 0) ||
     (*(float *)(unaff_RSI + 0x298) < *(float *)((longlong)pfVar27 + 0xa0) ||
      *(float *)(unaff_RSI + 0x298) == *(float *)((longlong)pfVar27 + 0xa0))) {
    uVar11 = 0;
  }
  else {
    uVar11 = CONCAT71((int7)(uVar11 >> 8),0.0 < *(float *)(unaff_RBP + 0xd94));
  }
  *(uint *)((longlong)pfVar27 + 0x24) = uVar7;
  if ((uVar7 & 8) == 0) {
    uVar14 = uVar11 & 0xffffffff;
    if (((((uVar7 >> 0x11 & 1) != 0) &&
         (uVar14 = uVar11 & 0xffffffff, *(char *)(unaff_RBP + 0x2043) == '\0')) &&
        (uVar14 = uVar11 & 0xffffffff, *(int *)(unaff_RBP + 0x20e8) == 0)) &&
       (uVar14 = uVar11 & 0xffffffff, *(int *)(unaff_RBP + 0x2048) == iVar20)) {
      *(undefined8 *)((longlong)pfVar27 + -8) = 0x1407a0199;
      uVar12 = FUN_14076f185();
      uVar7 = *(uint *)((longlong)pfVar27 + 0x24);
      fVar56 = *(float *)((longlong)pfVar27 + 4);
      uVar14 = CONCAT71((int7)((ulonglong)uVar12 >> 8),(byte)uVar12 | (byte)uVar11);
    }
  }
  else {
    uVar14 = 0;
  }
  if (cVar6 == '\0') {
    if ((uVar7 >> 0x14 & 1) != 0) {
      uVar18 = *(uint *)(unaff_RSI + 0x1d4);
      *(int *)((longlong)pfVar27 + 0x10) = (int)uVar14;
      uVar14 = (ulonglong)*(uint *)((longlong)pfVar27 + 0x10);
      if ((uVar18 >> ((byte)(*(char *)(unaff_RSI + 0x1cc) - 1) & 0x1f) & 1) != 0) {
        uVar8 = *(undefined4 *)
                 (((ulonglong)*(uint *)(unaff_RBP + 0x1fdc) - 8) +
                 (ulonglong)(uint)(*(int *)(unaff_RBP + 0x1fd4) * 5) * 8);
        puVar34 = (undefined4 *)(ulonglong)((int)pfVar27 - 8);
        puVar34[1] = *(undefined4 *)(unaff_RSI + 0x148);
        *puVar34 = uVar8;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar34 + -2) = &UNK_1407a0295;
        FUN_140755a9a();
      }
    }
    uVar18 = *(uint *)((longlong)pfVar27 + 0x34);
    uVar11 = (ulonglong)uVar18;
    if ((byte)((byte)uVar14 & (byte)uVar18) == 1) {
      *(undefined8 *)((longlong)pfVar27 + -8) = 0x1407a02f0;
      FUN_1407a0c31(*(float *)((longlong)pfVar27 + 0xc) - fVar56);
      uVar7 = *(uint *)((longlong)pfVar27 + 0x24);
    }
    if ((byte)uVar18 == 1 && (char)((uVar7 & 8) >> 3) == '\0') {
      *(undefined8 *)((longlong)pfVar27 + -8) = *(undefined8 *)((longlong)pfVar27 + 0xcc);
      *(undefined8 *)((longlong)pfVar27 + -0x10) = 0x1407a0312;
      FUN_1407a0d88();
      pfVar27 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar27 + -8) + 4);
      uVar11 = CONCAT71((uint7)(uint3)(uVar18 >> 8),1);
    }
    goto LAB_14079fcc5;
  }
  *(int *)((longlong)pfVar27 + 0x20) = (int)uVar11;
  *(int *)((longlong)pfVar27 + 0x10) = (int)uVar14;
  if ((bVar25 & 1) != 0) {
    *(undefined8 *)((longlong)pfVar27 + -8) = 0x1407a01c5;
    uVar14 = FUN_1407bd779();
    uVar7 = *(uint *)((longlong)pfVar27 + 0x24);
    fVar56 = *(float *)((longlong)pfVar27 + 4);
    *(byte *)(unaff_RBP + 0x1e89) = *(byte *)(unaff_RBP + 0x1e89) | 2;
    uVar12 = *(undefined8 *)(unaff_RSI + 0x294);
    *(undefined8 *)(unaff_RBP + 0x1ebc) = *(undefined8 *)(unaff_RSI + 0x28c);
    *(undefined8 *)(unaff_RBP + 0x1ec4) = uVar12;
  }
  if (((uVar7 & 4) != 0) || (uVar18 = 0, (*(byte *)(unaff_RBP + 0x1e85) & 0x40) != 0)) {
    uVar18 = 0x1000;
  }
  *(int *)((longlong)pfVar27 + 8) = iVar20;
  uVar19 = uVar18 | 0x200;
  if ((uVar7 >> 8 & 1) != 0) {
    uVar19 = uVar18;
  }
  fVar56 = *(float *)((longlong)pfVar27 + 0xc) - fVar56;
  if (fVar56 - *(float *)(unaff_RBP + 0xd34) <= *(float *)(unaff_RBP + 0xe4)) {
    uVar8 = (undefined4)
            CONCAT71((int7)(uVar14 >> 8),
                     *(float *)(unaff_RBP + 0xe4) <
                     *(float *)(unaff_RBP + 0xd34) +
                     *(float *)((longlong)pfVar27 + 0x50) + *(float *)((longlong)pfVar27 + 0x50) +
                     *(float *)(unaff_RBP + 0x1228) + fVar56);
  }
  else {
    uVar8 = 0;
  }
  *(float *)((longlong)pfVar27 + 0x48) = fVar56;
  uVar7 = *(uint *)(unaff_RBP + 0x1e84);
  *(uint *)((longlong)pfVar27 + 0x44) = uVar7;
  uVar7 = uVar7 & 0x400000;
  uVar18 = *(uint *)((longlong)pfVar27 + 0x24);
  uVar22 = ((uVar18 & 0xc0) == 0 | 2) << 6;
  if (uVar7 == 0) {
    uVar22 = 0;
  }
  *(uint *)((longlong)pfVar27 + 0x1c) = uVar22 | uVar18;
  cVar6 = (char)uVar8;
  uVar23 = 0x10;
  if (cVar6 == '\0') {
    uVar23 = ((uVar22 | uVar18) & 0x40) * 4 + 0x20;
  }
  uVar19 = uVar18 >> 9 & 0x40000 | uVar19 | uVar23;
  *(uint *)((longlong)pfVar27 + 0x80) = uVar19;
  *(uint *)((longlong)pfVar27 + 100) = uVar18 & 1;
  *(char *)((longlong)pfVar27 + 0x7f) = (char)(uVar18 & 1);
  *(undefined4 *)((longlong)pfVar27 + 0x60) = uVar8;
  if (uVar7 == 0) {
    uVar7 = uVar19;
    if (*(int *)((longlong)pfVar27 + 8) != *(int *)(unaff_RBP + 0x14d0)) {
      uVar7 = uVar19 | 0x10000;
    }
    uVar11 = (ulonglong)uVar7;
    if (cVar6 == '\0') {
      uVar11 = (ulonglong)uVar19 | 0x10000;
    }
    uVar8 = *(undefined4 *)((longlong)pfVar27 + 0x34);
  }
  else {
    puVar35 = (undefined1 *)((longlong)pfVar27 + 0x80);
    *(uint **)((longlong)pfVar27 + -8) = (uint *)((ulonglong)puVar35 & 0xffffffff);
    *(ulonglong *)((longlong)pfVar27 + -0x10) = (ulonglong)((longlong)pfVar27 + 0x7f) & 0xffffffff;
    *(undefined8 *)((longlong)pfVar27 + -0x18) = *(undefined8 *)((longlong)pfVar27 + 0xc4);
    *(undefined8 *)((longlong)pfVar27 + -0x20) = 0x1407a03ce;
    FUN_14078840e();
    pfVar27 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar27 + -0x18) + 0xc);
    uVar7 = *(uint *)((ulonglong)puVar35 & 0xffffffff);
    if (cVar6 != '\0') {
      uVar7 = uVar7 & 0xffffffcf | 0x10;
    }
    uVar11 = (ulonglong)uVar7;
    uVar8 = *(undefined4 *)((longlong)pfVar27 + 0x34);
  }
  *(ulonglong *)((longlong)pfVar27 + -8) = uVar11;
  *(ulonglong *)((longlong)pfVar27 + -0x10) = (ulonglong)((longlong)pfVar27 + 0x7d) & 0xffffffff;
  *(ulonglong *)((longlong)pfVar27 + -0x18) = (ulonglong)((longlong)pfVar27 + 0x7e) & 0xffffffff;
  *(undefined8 *)((longlong)pfVar27 + -0x20) = *(undefined8 *)((longlong)pfVar27 + 0xc0);
  *(ulonglong *)((longlong)pfVar27 + -0x28) = (ulonglong)((longlong)pfVar27 + 0x84) & 0xffffffff;
  *(undefined8 *)((longlong)pfVar27 + -0x30) = 0x1407a042a;
  bVar25 = FUN_14078564e();
  puVar35 = (undefined1 *)(ulonglong)((int)(undefined1 *)((longlong)pfVar27 + -0x28) + 0x14);
  uVar16 = 1;
  if ((*(uint *)(puVar35 + 0x24) >> 8 & 1) == 0) {
    bVar21 = 0;
    bVar47 = bVar25 != 0;
    uVar14 = (ulonglong)*(uint *)(puVar35 + 8);
    bVar25 = 0;
    if (bVar47) {
      if (*(int *)(unaff_RBP + 0x22d8) == *(int *)(puVar35 + 0xcc)) {
        bVar21 = (byte)*(undefined4 *)(puVar35 + 0x34) ^ 1;
        bVar25 = bVar21;
      }
      else {
        if (((puVar35[0x1c] & 0xc0) == 0) ||
           ((bVar21 = 0, (*(uint *)(puVar35 + 0x44) >> 0x16 & 1) == 0 &&
            (*(int *)(unaff_RBP + 0x2058) == *(int *)(puVar35 + 0xcc))))) {
          bVar21 = 1;
        }
        if ((char)puVar35[0x1c] < '\0') {
          bVar25 = 0;
          if (puVar35[0x60] != '\0') {
            bVar25 = *(byte *)(unaff_RBP + 0x2041) ^ 1;
          }
          bVar21 = bVar21 | bVar25;
        }
        bVar25 = 1;
        if ((puVar35[0x1c] & 0x40) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
    }
    if (*(int *)(unaff_RBP + 0x2044) == *(int *)(puVar35 + 0xcc)) {
      if ((char)*(undefined4 *)(puVar35 + 0x34) == '\x01' && *(int *)(unaff_RBP + 0x20e8) == 0) {
        *(undefined8 *)(puVar35 + -8) = 0;
        *(undefined8 *)(puVar35 + -0x10) = 0x1407a04f3;
        FUN_14076eff3();
        puVar35 = (undefined1 *)(ulonglong)((int)(puVar35 + -8) + 4);
        *(undefined8 *)(puVar35 + -8) = 0x1407a04fb;
        FUN_140763ee7();
        bVar21 = 1;
        if (*(int *)(unaff_RBP + 0x2044) == *(int *)(puVar35 + 0xcc)) goto LAB_1407a050c;
      }
      else {
LAB_1407a050c:
        if (*(int *)(unaff_RBP + 0x20e8) != 1 || puVar35[0x34] != '\0') goto LAB_1407a051c;
        *(undefined8 *)(puVar35 + -8) = 0;
        *(undefined8 *)(puVar35 + -0x10) = 0x1407a0531;
        FUN_14076eff3();
        puVar35 = (undefined1 *)(ulonglong)((int)(puVar35 + -8) + 4);
        *(undefined8 *)(puVar35 + -8) = 0x1407a0539;
        FUN_140763ee7();
      }
    }
    else {
LAB_1407a051c:
      if (bVar21 == 0) {
        uVar16 = 1;
        uVar8 = *(undefined4 *)(puVar35 + 0x34);
        goto LAB_1407a055e;
      }
    }
    uVar8 = (undefined4)((ulonglong)*(uint *)(puVar35 + 0x34) ^ 1);
    *(ulonglong *)(puVar35 + -8) = ((ulonglong)*(uint *)(puVar35 + 0x34) ^ 1) & 0xff;
    *(undefined8 *)(puVar35 + -0x10) = *(undefined8 *)(puVar35 + 100);
    *(undefined8 *)(puVar35 + -0x18) = 0x1407a0553;
    FUN_14075316c();
    *(byte *)(unaff_RBP + 0x1e88) = *(byte *)(unaff_RBP + 0x1e88) | 0x10;
    uVar16 = 0;
    puVar35 = puVar35 + -0x10;
  }
  else {
    uVar14 = (ulonglong)*(uint *)(puVar35 + 8);
  }
LAB_1407a055e:
  if ((*(uint *)(puVar35 + 0x44) >> 0x16 & 1) != 0) {
    uVar17 = 0;
    if (bVar25 != 0) {
      uVar17 = uVar16;
    }
    *(undefined1 *)((ulonglong)(puVar35 + 0x74) & 0xffffffff) = uVar17;
    *(undefined1 **)(puVar35 + -8) = (undefined1 *)((ulonglong)(puVar35 + 0x74) & 0xffffffff);
    *(ulonglong *)(puVar35 + -0x10) = (ulonglong)(puVar35 + 0x7f) & 0xffffffff;
    *(undefined8 *)(puVar35 + -0x18) = *(undefined8 *)(puVar35 + 0xc4);
    *(undefined8 *)(puVar35 + -0x20) = 0x1407a058c;
    FUN_140788520();
    puVar35 = (undefined1 *)(ulonglong)((int)(puVar35 + -0x18) + 0xc);
    if (bVar25 != 0) {
      *(ulonglong *)(puVar35 + -8) = (ulonglong)(puVar35 + 0x84) & 0xffffffff;
      *(undefined8 *)(puVar35 + -0x10) = *(undefined8 *)(unaff_RBP + 0x1e3c);
      *(undefined8 *)(puVar35 + -0x18) = *(undefined8 *)(uVar14 + 0x19c);
      *(undefined8 *)(puVar35 + -0x20) = *(undefined8 *)(puVar35 + 0xc0);
      *(undefined8 *)(puVar35 + -0x28) = 0x1407a05b3;
      FUN_14076f01e();
      puVar35 = (undefined1 *)(ulonglong)((int)(puVar35 + -0x20) + 0x10);
    }
  }
  *(undefined4 *)(puVar35 + 0x34) = uVar8;
  bVar25 = puVar35[0x7f];
  if (*(uint *)(puVar35 + 100) != (uint)bVar25) {
    *(byte *)(unaff_RBP + 0x1e88) = *(byte *)(unaff_RBP + 0x1e88) | 8;
  }
  *(undefined8 *)(puVar35 + -8) = 0x3f800000;
  *(undefined8 *)(puVar35 + -0x10) = 0;
  *(undefined8 *)(puVar35 + -0x18) = 0x1407a05da;
  uVar8 = FUN_140754a09();
  puVar36 = (undefined1 *)(ulonglong)((int)(puVar35 + -0x10) + 8);
  *(undefined4 *)(puVar36 + 8) = uVar8;
  uVar11 = (ulonglong)(*(uint *)(puVar36 + 0x44) >> 0x14 & 4 | 2);
  if ((*(uint *)(puVar36 + 0xd0) & 2) == 0) {
    bVar21 = puVar36[0x7e];
    if (bVar25 != 0 || bVar21 != 0) {
      uVar15 = 0x1b;
      if ((puVar36[0x7d] & bVar21) == 0) {
        uVar15 = (ulonglong)(bVar21 + 0x19);
      }
      *(undefined8 *)(puVar36 + -8) = 0x3f800000;
      *(ulonglong *)(puVar36 + -0x10) = uVar15;
      *(undefined8 *)(puVar36 + -0x18) = 0x1407a0622;
      uVar9 = FUN_140754a09();
      iVar26 = (int)(puVar36 + -0x10);
      uVar37 = (ulonglong)(iVar26 + 8);
      uVar8 = *(undefined4 *)(uVar37 + 0x9c);
      uVar3 = *(undefined4 *)(uVar37 + 0xa0);
      uVar4 = *(undefined4 *)(uVar37 + 0xa4);
      uVar5 = *(undefined4 *)(uVar37 + 0xa8);
      puVar38 = (undefined4 *)(ulonglong)(iVar26 - 0x14);
      puVar38[6] = 0;
      puVar38[5] = 0;
      puVar38[4] = uVar9;
      *puVar38 = uVar8;
      puVar38[1] = uVar3;
      puVar38[2] = uVar4;
      puVar38[3] = uVar5;
      *(undefined8 *)(puVar38 + -2) = 0x1407a0647;
      FUN_140755db9();
      puVar36 = (undefined1 *)(ulonglong)(iVar26 + 8);
    }
    *(ulonglong *)(puVar36 + -8) = uVar11;
    *(undefined8 *)(puVar36 + -0x10) = *(undefined8 *)(puVar36 + 200);
    *(ulonglong *)(puVar36 + -0x18) = (ulonglong)(puVar36 + 0x9c) & 0xffffffff;
    *(undefined8 *)(puVar36 + -0x20) = 0x1407a065f;
    FUN_14075612e();
    iVar26 = (int)(puVar36 + -0x18);
    pfVar27 = (float *)(ulonglong)(iVar26 + 0xc);
    fVar56 = pfVar27[0xd];
    uVar11 = (ulonglong)(uint)fVar56;
    if (((~SUB41(pfVar27[6],0) | *(byte *)(pfVar27 + 5)) & 1) == 0) {
      pfVar27[-2] = 3.906645;
      pfVar27[-1] = 1.4013e-45;
      FUN_1407bd7c6();
    }
    fVar50 = pfVar27[9];
    uVar15 = (ulonglong)(uint)pfVar27[0x13];
    if (((uint)fVar50 >> 9 & 1) == 0) {
      if (((uint)fVar50 >> 8 & 1) == 0) {
        iVar20 = 0;
        if ((in_R11B & SUB41(fVar56,0)) != 0) {
          iVar20 = 3 - (uint)(((uint)fVar50 >> 0x1d & 1) != 0);
        }
        fVar49 = *(float *)(unaff_RBP + 0x1228) * _DAT_150a597c9;
        fVar56 = *pfVar27;
        fVar50 = pfVar27[0x12];
        fVar52 = pfVar27[0x14];
        uVar8 = *(undefined4 *)(uVar14 + 0x2e8);
        puVar39 = (undefined4 *)(ulonglong)(iVar26 - 0xc);
        puVar39[4] = iVar20;
        puVar39[3] = puVar39[8];
        puVar39[2] = fVar49 + fVar56;
        puVar39[1] = fVar50 + fVar52;
        *puVar39 = uVar8;
        puVar39[5] = 0x3f333333;
        *(undefined8 *)(puVar39 + -2) = 0x1407a06fb;
        FUN_1407eb9fc();
        pfVar27 = (float *)(ulonglong)(iVar26 + 0xc);
      }
    }
    else {
      fVar49 = *(float *)(unaff_RBP + 0x1228) * _DAT_150a578e8;
      fVar56 = *pfVar27;
      fVar52 = _DAT_150a578e8 * pfVar27[1];
      fVar50 = pfVar27[3];
      uVar8 = *(undefined4 *)(uVar14 + 0x2e8);
      puVar43 = (undefined4 *)(ulonglong)(iVar26 - 4);
      puVar43[3] = puVar43[6];
      puVar43[2] = fVar49 + fVar56;
      puVar43[1] = fVar50 - fVar52;
      *puVar43 = uVar8;
      *(undefined8 *)(puVar43 + -2) = 0x1407a084e;
      FUN_1407ebb1a();
      pfVar27 = (float *)(ulonglong)(iVar26 + 0xc);
    }
    if (*(char *)(unaff_RBP + 0x2748) == '\x01') {
      *(undefined8 *)((longlong)pfVar27 + -8) = 0;
      *(undefined8 *)((longlong)pfVar27 + -0x10) = 0x1033cff8;
LAB_1407a0922:
      *(undefined8 *)((longlong)pfVar27 + -0x18) = 0x1407a0927;
      FUN_140770236();
      pfVar27 = (float *)(ulonglong)((int)pfVar27 - 8);
    }
  }
  else {
    uVar15 = 0x19;
    if (puVar36[0x7e] != '\0') {
      uVar15 = (ulonglong)((byte)puVar36[0x7d] | 0x1a);
    }
    *(undefined8 *)(puVar36 + -8) = 0x3f800000;
    *(ulonglong *)(puVar36 + -0x10) = uVar15;
    *(undefined8 *)(puVar36 + -0x18) = 0x1407a0723;
    uVar9 = FUN_140754a09();
    iVar26 = (int)(puVar36 + -0x10);
    puVar24 = (undefined4 *)(ulonglong)(iVar26 + 0xa4);
    uVar8 = *puVar24;
    uVar3 = puVar24[1];
    uVar4 = puVar24[2];
    uVar5 = puVar24[3];
    puVar40 = (undefined4 *)(ulonglong)(iVar26 - 0x14);
    puVar40[6] = *(undefined4 *)(unaff_RBP + 0xd14);
    puVar40[4] = uVar9;
    *puVar40 = uVar8;
    puVar40[1] = uVar3;
    puVar40[2] = uVar4;
    puVar40[3] = uVar5;
    puVar40[5] = 1;
    *(undefined8 *)(puVar40 + -2) = 0x1407a0756;
    FUN_140755db9();
    uVar41 = (ulonglong)(iVar26 + 8);
    *(ulonglong *)(uVar41 - 8) = uVar11;
    *(undefined8 *)(uVar41 - 0x10) = *(undefined8 *)(uVar41 + 200);
    *(undefined4 **)(uVar41 - 0x18) = puVar24;
    *(undefined8 *)(uVar41 - 0x20) = 0x1407a0767;
    FUN_14075612e();
    iVar26 = (int)(uVar41 - 0x18);
    pfVar27 = (float *)(ulonglong)(iVar26 + 0xc);
    if (((~SUB41(pfVar27[6],0) | *(byte *)(pfVar27 + 5)) & 1) == 0) {
      pfVar27[-2] = 3.906707;
      pfVar27[-1] = 1.4013e-45;
      FUN_1407bd7c6();
    }
    fVar56 = pfVar27[9];
    uVar15 = (ulonglong)(uint)pfVar27[0x13];
    uVar11 = (ulonglong)(uint)pfVar27[0xd];
    if (((uint)fVar56 >> 9 & 1) == 0) {
      if (((uint)fVar56 >> 8 & 1) == 0) {
        iVar20 = 0;
        if ((in_R11B & SUB41(pfVar27[0xd],0)) != 0) {
          iVar20 = 3 - (uint)(((uint)fVar56 >> 0x1d & 1) != 0);
        }
        fVar56 = pfVar27[0x12];
        fVar50 = pfVar27[0x14];
        uVar8 = *(undefined4 *)(uVar14 + 0x2e8);
        puVar42 = (undefined4 *)(ulonglong)(iVar26 - 0xc);
        puVar42[4] = iVar20;
        puVar42[3] = puVar42[8];
        puVar42[2] = puVar42[6];
        puVar42[1] = fVar56 + fVar50;
        *puVar42 = uVar8;
        puVar42[5] = 0x3f800000;
        *(undefined8 *)(puVar42 + -2) = 0x1407a07f4;
        FUN_1407eb9fc();
        fVar56 = (float)puVar42[0xf];
        pfVar27 = (float *)(ulonglong)(iVar26 + 0xc);
      }
      else {
        fVar50 = pfVar27[3];
        pfVar27[3] = fVar50 - (pfVar27[1] - pfVar27[0x14]);
        pfVar27[0x25] = fVar50 - (pfVar27[1] - pfVar27[0x14]);
      }
    }
    else {
      fVar52 = *(float *)(unaff_RBP + 0x1228) * _DAT_150a5795a;
      fVar56 = *pfVar27;
      fVar49 = _DAT_150a59ebf * pfVar27[1];
      fVar50 = pfVar27[3];
      uVar8 = *(undefined4 *)(uVar14 + 0x2e8);
      puVar44 = (undefined4 *)(ulonglong)(iVar26 - 4);
      puVar44[3] = puVar44[6];
      puVar44[2] = fVar52 + fVar56;
      puVar44[1] = fVar49 + fVar50;
      *puVar44 = uVar8;
      *(undefined8 *)(puVar44 + -2) = 0x1407a08b8;
      FUN_1407ebb1a();
      fVar56 = (float)puVar44[0xd];
      pfVar27 = (float *)(ulonglong)(iVar26 + 0xc);
    }
    if (((uint)fVar56 >> 0x1c & 1) != 0) {
      *(float *)((longlong)pfVar27 + 0xa4) =
           *(float *)((longlong)pfVar27 + 0xa4) -
           (*(float *)(unaff_RBP + 0x1228) + *(float *)(unaff_RBP + 0xd0c));
    }
    if (*(char *)(unaff_RBP + 0x2748) == '\x01') {
      *(undefined8 *)((longlong)pfVar27 + -8) = 0x1034a58c;
      *(undefined8 *)((longlong)pfVar27 + -0x10) = 0x1034a58c;
      goto LAB_1407a0922;
    }
  }
  fVar56 = *pfVar27;
  if (SUB41(pfVar27[8],0) != '\0') {
    fVar50 = *(float *)(unaff_RBP + 0x1228) * _DAT_150a57a27;
    pfVar13 = (float *)((ulonglong)(pfVar27 + 0x1d) & 0xffffffff);
    *pfVar13 = pfVar27[0x14] + (pfVar27[3] - pfVar27[1]);
    pfVar13[1] = fVar50 + fVar56;
    *(float **)(pfVar27 + -2) = pfVar13;
    pfVar27[-4] = 3.9068267;
    pfVar27[-3] = 1.4013e-45;
    FUN_1407a0daa();
    fVar56 = pfVar27[-1];
    pfVar27 = (float *)(ulonglong)((int)(pfVar27 + -2) + 4);
  }
  if ((*(uint *)((longlong)pfVar27 + 0xd0) & 2) == 0) {
    puVar45 = (undefined4 *)(ulonglong)((int)pfVar27 - 0x14);
    puVar45[3] = (int)uVar15;
    puVar45[2] = puVar45[0x3a];
    puVar45[1] = fVar56;
    *puVar45 = puVar45[8];
    puVar45[4] = 0;
    *(undefined8 *)(puVar45 + -2) = 0x1407a09b7;
    FUN_14075547e();
  }
  else {
    *(undefined8 *)((ulonglong)((longlong)pfVar27 + 0x74) & 0xffffffff) = 0;
    *(undefined8 *)((longlong)pfVar27 + -8) = 0;
    *(undefined8 **)((longlong)pfVar27 + -0x10) =
         (undefined8 *)((ulonglong)((longlong)pfVar27 + 0x74) & 0xffffffff);
    *(ulonglong *)((longlong)pfVar27 + -0x18) = (ulonglong)((longlong)pfVar27 + 0xa4) & 0xffffffff;
    *(ulonglong *)((longlong)pfVar27 + -0x20) = uVar15;
    *(undefined8 *)((longlong)pfVar27 + -0x28) = *(undefined8 *)((longlong)pfVar27 + 0xc4);
    *(ulonglong *)((longlong)pfVar27 + -0x30) = (ulonglong)((longlong)pfVar27 + 0xa4) & 0xffffffff;
    *(ulonglong *)((longlong)pfVar27 + -0x38) = (ulonglong)((longlong)pfVar27 + 0x94) & 0xffffffff;
    *(undefined8 *)((longlong)pfVar27 + -0x40) = 0x1407a09ef;
    FUN_140755ac2();
    pfVar27 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar27 + -0x38) + 0x1c);
  }
  if (*(char *)((longlong)pfVar27 + 0x14) != '\0') {
    *(undefined8 *)((longlong)pfVar27 + -8) = 0x1407a09fe;
    FUN_1407bd7c6();
  }
  if ((byte)((byte)*(undefined4 *)((longlong)pfVar27 + 0x10) & (byte)uVar11) == 1) {
    *(undefined8 *)((longlong)pfVar27 + -8) = 0x1407a0a24;
    FUN_1407a0c31(*(float *)((longlong)pfVar27 + 0x94) - *(float *)((longlong)pfVar27 + 4));
  }
  if ((byte)uVar11 == 1 && (char)((*(uint *)((longlong)pfVar27 + 0x24) & 8) >> 3) == '\0') {
    *(undefined8 *)((longlong)pfVar27 + -8) = *(undefined8 *)((longlong)pfVar27 + 0xcc);
    *(undefined8 *)((longlong)pfVar27 + -0x10) = 0x1407a0a46;
    FUN_1407a0d88();
    pfVar27 = (float *)(ulonglong)((int)(undefined1 *)((longlong)pfVar27 + -8) + 4);
  }
LAB_14079fcc5:
  if (_DAT_150b289d4 != (*(uint *)((longlong)pfVar27 + 0xb4) ^ (uint)pfVar27)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)pfVar27 + -8) = &UNK_1407a0a5c;
    FUN_1408802b0(*(uint *)((longlong)pfVar27 + 0xb4) ^ (uint)pfVar27);
  }
  return uVar11;
}

