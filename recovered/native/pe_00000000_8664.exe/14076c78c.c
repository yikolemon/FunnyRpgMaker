/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076c78c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14076c78c(void)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar13;
  
  uVar5 = _DAT_150b09eef;
  uVar6 = (ulonglong)((int)&stack0xffffffffffffffe8 - 0x14);
  uVar14 = (ulonglong)_DAT_150b09eef;
  *(undefined8 *)(uVar6 - 8) = 0x10334753;
  *(undefined8 *)(uVar6 - 0x10) = 0x14076c7ad;
  lVar4 = FUN_140764aaa();
  pfVar7 = (float *)(ulonglong)((int)(uVar6 - 8) + 4);
  if (((int)lVar4 == 0) || (*(char *)(uVar14 + 0x104) == '\0')) {
    auVar1 = *(undefined1 (*) [16])(uVar14 + 0xe40);
    fVar15 = (fRam0000000150a255f1 - auVar1._4_4_) * fRam0000000150a2560b;
    fVar16 = (fRam0000000150a255f5 - auVar1._8_4_) * fRam0000000150a2560f;
    fVar17 = (fRam0000000150a255f9 - auVar1._12_4_) * fRam0000000150a25613;
    *pfVar7 = (_DAT_150a255ed - auVar1._0_4_) * _DAT_150a25607 + auVar1._0_4_;
    pfVar7[1] = fVar15 + auVar1._4_4_;
    pfVar7[2] = fVar16 + auVar1._8_4_;
    pfVar7[3] = fVar17 + auVar1._12_4_;
    *(float **)(pfVar7 + -2) = pfVar7;
    pfVar7[-4] = 5.60519e-45;
    pfVar7[-3] = 0.0;
    pfVar7[-6] = 3.8559701;
    pfVar7[-5] = 1.4013e-45;
    FUN_140754c50();
    puVar8 = (undefined8 *)(ulonglong)((int)(pfVar7 + -4) + 8);
  }
  else {
    auVar1 = *(undefined1 (*) [16])(uVar14 + 0xe40);
    fVar15 = (fRam0000000150a2559f - auVar1._4_4_) * fRam0000000150a255b9;
    fVar16 = (fRam0000000150a255a3 - auVar1._8_4_) * fRam0000000150a255bd;
    fVar17 = (fRam0000000150a255a7 - auVar1._12_4_) * fRam0000000150a255c1;
    cVar2 = *(char *)(lVar4 + 0xfa);
    *pfVar7 = (_DAT_150a2559b - auVar1._0_4_) * _DAT_150a255b5 + auVar1._0_4_;
    pfVar7[1] = fVar15 + auVar1._4_4_;
    pfVar7[2] = fVar16 + auVar1._8_4_;
    pfVar7[3] = fVar17 + auVar1._12_4_;
    *(float **)(pfVar7 + -2) = pfVar7;
    pfVar7[-4] = 5.60519e-45;
    pfVar7[-3] = 0.0;
    pfVar7[-6] = 3.855952;
    pfVar7[-5] = 1.4013e-45;
    FUN_140754c50();
    puVar8 = (undefined8 *)(ulonglong)((int)(pfVar7 + -4) + 8);
    if (cVar2 == '\x01') {
      *puVar8 = 0;
      puVar8[-1] = pfVar7;
      puVar8[-2] = 0;
      puVar8[-3] = (ulonglong)(uVar5 + 0x2784);
      puVar8[-4] = 0x14076c80a;
      FUN_140769c26();
      puVar8 = (undefined8 *)(ulonglong)((int)(puVar8 + -3) + 0xc);
    }
  }
  *(undefined8 *)((longlong)puVar8 + -8) = 0x200016f;
  *(undefined8 *)((longlong)puVar8 + -0x10) = 0;
  *(undefined8 *)((longlong)puVar8 + -0x18) = 0x10334753;
  *(undefined8 *)((longlong)puVar8 + -0x20) = 0x14076c84b;
  uVar3 = FUN_14075fbfb();
  uVar9 = (ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x18) + 0xc);
  *(undefined8 *)(uVar9 - 8) = 1;
  *(undefined8 *)(uVar9 - 0x10) = 0x14076c857;
  FUN_140754d5e();
  puVar10 = (undefined1 *)(ulonglong)((int)(uVar9 - 8) + 4);
  if ((char)uVar3 == '\0') {
    *(undefined8 *)(puVar10 + -8) = 0x14076c8b5;
    FUN_140762c14();
  }
  else if (*(short *)((ulonglong)*(uint *)(uVar14 + 0x14cc) + 0x108) == 1) {
    *(undefined8 *)(puVar10 + -8) = 0x1033c48c;
    *(undefined8 *)(puVar10 + -0x10) = 0x14076c878;
    FUN_14078a526();
    uVar11 = (ulonglong)((int)(puVar10 + -8) + 4);
    *(undefined8 *)(uVar11 - 8) = *(undefined8 *)(uVar14 + 0x14cc);
    *(undefined8 *)(uVar11 - 0x10) = 0x14076c886;
    FUN_14076c9aa();
    uVar12 = (ulonglong)((int)(uVar11 - 8) + 4);
    *(undefined8 *)(uVar12 - 8) = *(undefined8 *)(uVar14 + 0x14cc);
    *(undefined8 *)(uVar12 - 0x10) = 0x14076c894;
    FUN_14076ca1c();
    uVar5 = (int)(uVar12 - 8) + 4;
    uVar13 = (ulonglong)uVar5;
    *(undefined8 **)(uVar13 - 8) = (undefined8 *)(ulonglong)uVar5;
    *(undefined8 *)(uVar13 - 0x10) = 0x14076c89f;
    FUN_140769b57();
    puVar10 = (undefined1 *)(ulonglong)((int)(uVar13 - 8) + 4);
    *(undefined8 *)(uVar14 + 0x2784) = *(undefined8 *)(ulonglong)uVar5;
  }
  if (_DAT_150af55c1 == (*(uint *)(puVar10 + 0x10) ^ (uint)puVar10)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar10 + -8) = thunk_FUN_140762c14;
  FUN_1408802b0(*(uint *)(puVar10 + 0x10) ^ (uint)puVar10);
}

