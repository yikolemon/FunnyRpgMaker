/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076510f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076510f(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  float10 in_ST0;
  float10 in_ST1;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float *pfVar8;
  
  uVar7 = (int)&stack0xffffffffffffffe8 - 100;
  pfVar8 = (float *)(ulonglong)uVar7;
  param_2 = param_2 & 0xffffffff;
  pfVar8[0x18] = (float)(_DAT_150aede23 ^ uVar7);
  uVar5 = (ulonglong)_DAT_150b0287b;
  uVar1 = *(undefined8 *)(ulonglong)(uint)pfVar8[0x1d];
  fVar10 = (float)uVar1;
  fVar11 = (float)((ulonglong)uVar1 >> 0x20);
  fVar12 = 0.0;
  if ((*(byte *)(uVar5 + 0x1ed0) & 0x10) != 0) {
    fVar11 = *(float *)(uVar5 + 0x1f18);
    fVar13 = *(float *)(uVar5 + 0x1f1c);
    fVar12 = *(float *)(uVar5 + 0x1f24);
    *(undefined8 *)(pfVar8 + 0xd) = uVar1;
    pfVar8[0xf] = 0.0;
    pfVar8[0x10] = 0.0;
    if ((fVar11 < 0.0) || (*(float *)(uVar5 + 0x1f20) < 0.0)) {
      fVar10 = *(float *)(param_2 + 0x60);
    }
    else {
      pfVar8[2] = *(float *)(uVar5 + 0x1f20);
      pfVar8[1] = fVar11;
      *pfVar8 = fVar10;
      pfVar8[9] = fVar13;
      pfVar8[3] = fVar12;
      pfVar8[-2] = 3.8487291;
      pfVar8[-1] = 1.4013e-45;
      FUN_14076ab94();
      fVar12 = pfVar8[3];
      fVar13 = pfVar8[9];
      pfVar8[8] = (float)in_ST0;
      fVar10 = pfVar8[8];
      in_ST0 = in_ST1;
    }
    fVar9 = 0.0;
    if ((fVar13 < 0.0) || (fVar12 < 0.0)) {
      fVar11 = *(float *)(param_2 + 100);
    }
    else {
      pfVar8[2] = fVar12;
      pfVar8[1] = fVar13;
      *pfVar8 = pfVar8[0xe];
      *(undefined1 (*) [16])(pfVar8 + 0xd) = ZEXT416((uint)fVar10);
      pfVar8[-2] = 3.8487477;
      pfVar8[-1] = 1.4013e-45;
      FUN_14076ab94();
      fVar10 = pfVar8[0xd];
      fVar9 = pfVar8[0xe];
      pfVar8[7] = (float)in_ST0;
      fVar11 = pfVar8[7];
    }
    uVar7 = *(uint *)(uVar5 + 0x1f28);
    if (uVar7 != 0) {
      puVar6 = (undefined4 *)((ulonglong)(pfVar8 + 0x11) & 0xffffffff);
      *puVar6 = *(undefined4 *)(uVar5 + 0x1f2c);
      *(undefined8 *)(puVar6 + 1) = *(undefined8 *)(param_2 + 0x50);
      uVar2 = *(undefined4 *)(param_2 + 0x60);
      puVar6[4] = *(undefined4 *)(param_2 + 100);
      puVar6[3] = uVar2;
      puVar6[5] = fVar10;
      puVar6[6] = fVar11;
      *pfVar8 = (float)(int)(pfVar8 + 0x11);
      pfVar8[-2] = 3.848767;
      pfVar8[-1] = 1.4013e-45;
      (*(code *)(ulonglong)uVar7)();
      fVar10 = (float)*(undefined8 *)(puVar6 + 5);
      fVar11 = (float)((ulonglong)*(undefined8 *)(puVar6 + 5) >> 0x20);
      fVar9 = 0.0;
    }
    fVar10 = (float)(int)fVar10;
    fVar11 = (float)(int)fVar11;
    fVar12 = (float)(int)fVar9;
    uVar5 = (ulonglong)_DAT_150b02996;
  }
  uVar7 = *(uint *)(param_2 + 0xc);
  auVar3._4_4_ = fVar11;
  auVar3._0_4_ = fVar10;
  auVar3._8_4_ = fVar12;
  auVar3._12_4_ = 0;
  *(undefined1 (*) [16])(pfVar8 + 0xd) = auVar3;
  fVar11 = _DAT_150a1df5a;
  fVar10 = _DAT_150a1df1d;
  if ((uVar7 & 0x5000000) == 0x1000000) {
    uVar7 = *(uint *)(param_2 + 0x14);
    fVar11 = _DAT_150a1df1d;
    if ((uVar7 & 4) != 0) {
      fVar11 = *(float *)(uVar5 + 0xce8);
    }
    *(undefined1 (*) [16])(pfVar8 + 9) = ZEXT416((uint)fVar11);
    if ((uVar7 & 8) == 0) goto LAB_1407652af;
  }
  else {
    if ((uVar7 & 0x40) != 0) {
      *(undefined1 (*) [16])(pfVar8 + 9) = ZEXT416((uint)_DAT_150a1df5a);
      fVar10 = fVar11;
      goto LAB_1407652af;
    }
    *(undefined1 (*) [16])(pfVar8 + 9) = ZEXT416(*(uint *)(uVar5 + 0xce8));
  }
  fVar10 = *(float *)(uVar5 + 0xcec);
LAB_1407652af:
  pfVar8[3] = fVar10;
  pfVar8[-2] = 3.8487997;
  pfVar8[-1] = 1.4013e-45;
  lVar4 = FUN_14077e338(param_2);
  pfVar8[4] = *(float *)(lVar4 + 0x90) + *(float *)(lVar4 + 0x94);
  pfVar8[1] = *(float *)(uVar5 + 0xcdc) + _DAT_150a1dd32;
  *pfVar8 = 0.0;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(pfVar8 + -2) = &UNK_1407652f4;
  FUN_140755a9a();
}

