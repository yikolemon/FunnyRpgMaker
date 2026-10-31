/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407648a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1407648a8(void)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  char cVar6;
  float *pfVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulonglong unaff_RBP;
  float *pfVar11;
  ulonglong uVar12;
  uint unaff_retaddr;
  ulonglong uStack_28;
  uint uVar13;
  int iVar14;
  uint uVar15;
  
  puVar10 = &stack0xffffffffffffffe0;
  iVar14 = (int)unaff_RBP;
  uVar13 = (uint)((ulonglong)unaff_RBX >> 0x20);
  pfVar11 = (float *)(ulonglong)uVar13;
  uVar15 = (uint)(unaff_RBP >> 0x20);
  uVar12 = (ulonglong)_DAT_150b0200a;
  uVar1 = *(uint *)(uVar12 + 0x14cc);
  uVar8 = (ulonglong)uVar1;
  *(int *)(uVar12 + 0x1e80) = iVar14;
  uVar9 = *(undefined8 *)(pfVar11 + 2);
  pfVar7 = (float *)(ulonglong)uVar15;
  if (uVar15 == 0) {
    pfVar7 = pfVar11;
  }
  *(undefined8 *)(uVar12 + 0x1e8c) = *(undefined8 *)pfVar11;
  *(undefined8 *)(uVar12 + 0x1e94) = uVar9;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar4 = pfVar7[3];
  *(float *)(uVar12 + 0x1e9c) = *pfVar7;
  *(float *)(uVar12 + 0x1ea0) = fVar2;
  *(float *)(uVar12 + 0x1ea4) = fVar3;
  *(float *)(uVar12 + 0x1ea8) = fVar4;
  *(uint *)(uVar12 + 0x1e84) =
       *(uint *)(uVar12 + 0x1e40) | unaff_retaddr | *(uint *)(uVar12 + 0x1e4c);
  *(undefined4 *)(uVar12 + 0x1e88) = 0;
  if (iVar14 != 0) {
    uStack_28 = unaff_RBP & 0xffffffff;
    FUN_14075bad9();
    puVar10 = (undefined1 *)(ulonglong)((int)&uStack_28 + 4);
    if (((*(byte *)(uVar12 + 0x1e84) & 2) == 0) &&
       ((*(ushort *)(uVar8 + 0x1a2) =
              *(ushort *)(uVar8 + 0x1a2) | (ushort)(0 << (*(byte *)(uVar8 + 0x19c) & 0x1f)),
        *(int *)(uVar12 + 0x2044) == iVar14 || (*(char *)(uVar12 + 0x2099) == '\x01')))) {
      uVar15 = *(uint *)(uVar12 + 0x2048);
      if ((*(int *)((ulonglong)uVar15 + 0x3b8) == *(int *)(uVar8 + 0x3b8)) &&
         ((uVar1 == uVar15 ||
          (((*(uint *)((ulonglong)uVar15 + 0x14) | *(uint *)(uVar8 + 0x14)) >> 8 & 1) != 0)))) {
        *(undefined8 *)(puVar10 + -8) = 0x140764966;
        FUN_14076ca82();
      }
    }
    if ((*(byte *)(uVar12 + 0x1e48) & 4) != 0) {
      *(undefined8 *)(puVar10 + -8) = 0x140764976;
      FUN_14076cdf0(unaff_RBP & 0xffffffff);
    }
  }
  *(undefined4 *)(uVar12 + 0x1e48) = 0;
  *(undefined4 *)(uVar12 + 0x1e4c) = 0;
  pfVar7 = (float *)(ulonglong)(uVar13 + 8);
  if (((pfVar11[3] < *(float *)(uVar8 + 0x290) || pfVar11[3] == *(float *)(uVar8 + 0x290)) ||
      (*(float *)(uVar8 + 0x298) < pfVar11[1] || *(float *)(uVar8 + 0x298) == pfVar11[1])) ||
     (*pfVar7 < *(float *)(uVar8 + 0x28c) || *pfVar7 == *(float *)(uVar8 + 0x28c))) {
LAB_1407649c0:
    if ((iVar14 == 0) ||
       (((iVar14 != *(int *)(uVar12 + 0x1528) && (iVar14 != *(int *)(uVar12 + 0x1550))) &&
        ((iVar14 != *(int *)(uVar12 + 0x2044) && (iVar14 != *(int *)(uVar12 + 0x2058))))))) {
      uVar9 = 0;
      bVar5 = false;
      if (*(char *)(uVar12 + 0x1526) != '\x01') {
        return 0;
      }
      goto LAB_1407649f3;
    }
    uVar9 = 0;
    bVar5 = false;
  }
  else {
    uVar9 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    bVar5 = true;
    if (*(float *)(uVar8 + 0x294) < *pfVar11 || *(float *)(uVar8 + 0x294) == *pfVar11)
    goto LAB_1407649c0;
LAB_1407649f3:
    if (iVar14 == 0) goto LAB_140764a18;
  }
  if (iVar14 == *(int *)(uVar12 + 0x1e44)) {
    *(undefined8 *)(puVar10 + -8) = 0x140764a04;
    FUN_140769179();
    pfVar7 = (float *)(ulonglong)(uVar13 + 8);
  }
  if (*(int *)(uVar12 + 0x1554) == iVar14) {
    *(undefined4 *)(uVar12 + 0x1558) = *(undefined4 *)(uVar12 + 4);
  }
LAB_140764a18:
  if (bVar5) {
    *(byte *)(uVar12 + 0x1e89) = *(byte *)(uVar12 + 0x1e89) | 1;
  }
  *(undefined8 *)(puVar10 + -8) = 1;
  *(float **)(puVar10 + -0x10) = pfVar7;
  *(float **)(puVar10 + -0x18) = pfVar11;
  *(undefined8 *)(puVar10 + -0x20) = 0x140764a2e;
  cVar6 = FUN_14075ae0a();
  if (cVar6 != '\0') {
    *(byte *)(uVar12 + 0x1e88) = *(byte *)(uVar12 + 0x1e88) | 1;
  }
  return CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
}

