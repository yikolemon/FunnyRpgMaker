/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a8fcf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a8fcf(longlong param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar10;
  
  uVar8 = (ulonglong)((int)&stack0xffffffffffffffe0 - 0x98);
  uVar3 = *(uint *)(uVar8 + 0xd4);
  uVar4 = *(uint *)(uVar8 + 0xd0);
  uVar7 = *(uint *)(uVar8 + 0xc0);
  pcVar5 = (char *)((ulonglong)_DAT_8489e03110388d00 & 0xffffffffffffff94);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  *(char *)(param_1 + 0x1039d74c) = *(char *)(param_1 + 0x1039d74c) + (char)((ulonglong)pcVar5 >> 8)
  ;
  *(int *)(uVar8 + 0xc) = (int)pcVar5;
  *(undefined8 *)(uVar8 - 8) = 0;
  *(ulonglong *)(uVar8 - 0x10) = (ulonglong)uVar7;
  *(undefined8 *)(uVar8 - 0x18) = 0x1407a900e;
  uVar6 = FUN_14075544d();
  uVar9 = (ulonglong)((int)(uVar8 - 0x10) + 8);
  *(undefined8 *)(uVar9 - 8) = 0xffffffffbf800000;
  *(undefined8 *)(uVar9 - 0x10) = 0;
  *(int *)(uVar9 + 0x10) = (int)uVar6;
  *(undefined8 *)(uVar9 - 0x18) = uVar6;
  *(ulonglong *)(uVar9 - 0x20) = (ulonglong)uVar7;
  *(ulonglong *)(uVar9 - 0x28) = uVar9 + 0x8c & 0xffffffff;
  *(undefined8 *)(uVar9 - 0x30) = 0x1407a902a;
  FUN_1407559fe();
  uVar7 = (int)(uVar9 - 0x28) + 0x14;
  pfVar10 = (float *)(ulonglong)uVar7;
  if (uVar4 != 0) {
    *(undefined1 *)(ulonglong)uVar4 = 0;
  }
  pfVar12 = (float *)(ulonglong)(uint)pfVar10[0x2c];
  if (uVar3 != 0) {
    *(undefined1 *)(ulonglong)uVar3 = 0;
  }
  fVar13 = *pfVar12;
  if (_DAT_150a3448a < pfVar12[2] - fVar13) {
    fVar1 = pfVar10[0x2f];
    fVar2 = pfVar10[0x2e];
    fVar14 = pfVar12[3];
    fVar15 = pfVar12[2] - fVar2;
    fVar16 = pfVar12[1] + fVar1;
    pfVar10[0x1f] = fVar2 + fVar13;
    pfVar10[0x20] = fVar16;
    pfVar10[0x21] = fVar15;
    pfVar10[0x22] = fVar14;
    fVar14 = fVar15;
    if (uVar3 != 0) {
      *(undefined1 *)(ulonglong)uVar3 = fVar15 < fVar2 + fVar13 + pfVar10[0x23];
      fVar13 = *pfVar12;
      fVar16 = fVar1 + pfVar12[1];
      fVar14 = pfVar12[2] - fVar2;
    }
    *pfVar10 = fVar16;
    pfVar10[2] = fVar15;
    fVar1 = *(float *)((ulonglong)(uint)pfVar10[3] + 0x1228);
    pfVar10[1] = fVar1;
    pfVar11 = (float *)(ulonglong)((int)(uVar9 - 0x28) + 0xc);
    pfVar11[1] = fVar14 - fVar1;
    *pfVar11 = fVar13;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(pfVar11 + -2) = &UNK_1407a9115;
    FUN_140755a9a();
  }
  if (_DAT_150b320ed == ((uint)pfVar10[0x25] ^ uVar7)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar10 + -2) = &UNK_1407a940a;
  FUN_1408802b0((uint)pfVar10[0x25] ^ uVar7);
}

