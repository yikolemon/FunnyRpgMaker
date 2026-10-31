/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004924e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [10] __thiscall
FUN_004924e0(undefined4 param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  char extraout_CL;
  byte extraout_CL_00;
  char extraout_CL_01;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  bool bVar4;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  undefined1 auVar5 [10];
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 extraout_ST0_01;
  float10 fVar7;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar8;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined4 unaff_retaddr;
  double *pdVar9;
  double dStack_78;
  ushort uStack_6c;
  undefined1 *puStack_64;
  undefined1 auStack_e [6];
  undefined1 *local_8;
  
  if (DAT_00521f1c != 0) {
    bVar4 = (MXCSR & 0x7f80) == 0x1f80;
    if (bVar4) {
      _auStack_e = CONCAT26(in_FPUControlWord,auStack_e);
    }
    if (bVar4 && (in_FPUControlWord & 0x7f) == 0x7f) {
      auVar5 = (undefined1  [10])FUN_004a1e19((double)CONCAT44(param_3,param_2),param_4,param_5);
      return auVar5;
    }
  }
  uVar1 = __fload_withFB(param_1,(int)&param_4);
  uVar2 = uVar1;
  if (in_FPUControlWord != 0x27f) {
    _auStack_e = CONCAT46(&LAB_004a1c21,auStack_e);
    uVar1 = FUN_004a3305();
    uVar2 = extraout_ECX;
  }
  bVar4 = (uVar2 & 0x7ff00000) == 0x7ff00000;
  if (bVar4) {
    if ((uVar1 & 0xfffff) == 0 && param_4 == 0) {
      _auStack_e = CONCAT46(&LAB_004a1ce9,auStack_e);
      __fload_withFB(0,(int)&param_2);
      iVar3 = extraout_ECX_01;
      fVar7 = extraout_ST0_01;
      fVar8 = extraout_ST1_01;
      in_ST6 = in_ST7;
      goto LAB_004a1ce9;
    }
    _auStack_e = CONCAT46(0x4a1cad,auStack_e);
    __fload_withFB(0,(int)&param_2);
    in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
    fVar7 = extraout_ST0_00;
    fVar6 = extraout_ST1_00;
    if (!NAN((float10)1) && !NAN(extraout_ST0_00)) {
      if ((float10)1 == extraout_ST0_00) goto LAB_004a1cc3;
      iVar3 = extraout_ECX_00 + 1;
      fVar8 = extraout_ST1_00;
      goto LAB_004a1ce9;
    }
  }
  else {
    _auStack_e = CONCAT46(0x4a1c3c,auStack_e);
    uVar2 = __fload_withFB(uVar2 & 0x7ff00000,(int)&param_2);
    if (!bVar4) {
      if (((uVar2 & 0x7ff00000) != 0) || ((param_3 & 0xfffff) != 0 || param_2 != 0)) {
        fVar7 = extraout_ST0;
        if ((param_3 & 0x80000000) != 0) {
          _auStack_e = CONCAT46(0x4a1db3,auStack_e);
          fVar7 = (float10)FUN_004a1dd1();
          fVar7 = -fVar7;
          auVar5 = _DAT_004fb420;
          if (extraout_CL_01 == '\0') goto LAB_004a1c85;
        }
        log2(fVar7);
        _auStack_e = CONCAT46(0x4a1c61,auStack_e);
        auVar5 = FUN_004a32f0();
        if (extraout_CL == '\x01') {
          auVar5 = (undefined1  [10])-(float10)auVar5;
        }
        if (DAT_00521f28 != 0) {
          return auVar5;
        }
        auVar5 = (undefined1  [10])
                 FUN_004a33d9(&DAT_004fa400,0x1d,unaff_retaddr,param_2,param_3,param_4,param_5);
        return auVar5;
      }
      if ((param_5 & 0x7fffffff) == 0 && param_4 == 0) {
        auVar5 = (undefined1  [10])FUN_004a338e();
        return auVar5;
      }
      _auStack_e = CONCAT46(0x4a1d6b,auStack_e);
      FUN_004a1dd1();
      if ((param_5 >> 0x18 & 0x80) == 0) {
        if ((param_3._3_1_ >> 7 & extraout_CL_00) == 0) {
          return (undefined1  [10])(float10)0;
        }
        auVar5 = (undefined1  [10])FUN_004a338e();
        return auVar5;
      }
      auVar5 = _DAT_004fd360;
      if ((param_3._3_1_ >> 7 & extraout_CL_00) != 0) {
        auVar5 = (undefined1  [10])-(float10)_DAT_004fd360;
      }
      goto LAB_004a1c85;
    }
    iVar3 = 0;
    fVar7 = extraout_ST0;
    fVar8 = extraout_ST1;
    in_ST6 = in_ST7;
LAB_004a1ce9:
    if (((param_3 & 0x7ff00000) != 0x7ff00000) ||
       (fVar6 = fVar8, (param_3 & 0xfffff) == 0 && param_2 == 0)) {
      fVar6 = fVar7;
      if (iVar3 == 0) {
        pdVar9 = &dStack_78;
        puStack_64 = &LAB_004a1d17;
        uStack_6c = in_FPUStatusWord;
        _auStack_e = in_ST6;
        iVar3 = FUN_004a63e0(SUB84((double)fVar7,0),(int)((ulonglong)(double)fVar7 >> 0x20),
                             SUB84((double)fVar8,0),(uint)((ulonglong)(double)fVar8 >> 0x20),
                             &dStack_78);
        auVar5 = (undefined1  [10])(float10)*pdVar9;
        if (iVar3 == 0) {
          return (undefined1  [10])(float10)*pdVar9;
        }
LAB_004a1c85:
        if (DAT_00521f28 != 0) {
          return auVar5;
        }
        _auStack_e = CONCAT46(0x4a1ca2,auStack_e);
        auVar5 = (undefined1  [10])
                 FUN_004a5f80(&DAT_004fa400,0x1d,in_FPUControlWord,unaff_retaddr,param_2,param_3,
                              param_4,param_5);
        return auVar5;
      }
      goto LAB_004a1ccb;
    }
  }
  fVar8 = fVar7;
  if (fVar6 == (float10)0) {
LAB_004a1cc3:
    return (undefined1  [10])(float10)1;
  }
LAB_004a1ccb:
  return (undefined1  [10])(fVar6 + fVar8);
}

