/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026fab0 */

ushort FUN_1026fab0(int param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_ECX_01;
  bool bVar5;
  ushort in_FPUControlWord;
  ushort in_FPUStatusWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar6;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar7;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined1 local_78 [12];
  ushort uStack_6c;
  undefined4 uStack_64;
  undefined1 auStack_e [6];
  undefined4 local_8;
  undefined4 local_4;
  
  if (DAT_103a549c != 0) {
    local_4 = MXCSR;
    bVar5 = (MXCSR & 0x7f80) == 0x1f80;
    if (bVar5) {
      _auStack_e = CONCAT26(in_FPUControlWord,auStack_e);
    }
    if (bVar5 && (in_FPUControlWord & 0x7f) == 0x7f) {
      uVar1 = FUN_10281c59();
      return uVar1;
    }
  }
  local_4 = 0x10281a4d;
  uVar2 = __fload_withFB();
  local_4 = CONCAT22((short)(uVar2 >> 0x10),in_FPUControlWord);
  uVar3 = uVar2;
  if (in_FPUControlWord != 0x27f) {
    _auStack_e = CONCAT46(0x10281a61,auStack_e);
    uVar2 = FUN_10283145();
    uVar3 = extraout_ECX;
  }
  bVar5 = (uVar3 & 0x7ff00000) == 0x7ff00000;
  if (bVar5) {
    if ((uVar2 & 0xfffff) == 0 && param_3 == 0) {
      _auStack_e = CONCAT46(0x10281b29,auStack_e);
      fVar6 = (float10)__fload_withFB();
      iVar4 = extraout_ECX_01;
      fVar7 = extraout_ST1_01;
      in_ST6 = in_ST7;
    }
    else {
      _auStack_e = CONCAT46(0x10281aed,auStack_e);
      uVar1 = __fload_withFB();
      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
      fVar7 = extraout_ST1_00;
      if (NAN((float10)1) || NAN(extraout_ST0_00)) goto LAB_10281af8;
      if ((float10)1 == extraout_ST0_00) {
        return uVar1;
      }
      iVar4 = extraout_ECX_00 + 1;
      fVar6 = extraout_ST0_00;
    }
  }
  else {
    _auStack_e = CONCAT46(0x10281a7c,auStack_e);
    uVar3 = __fload_withFB();
    if (!bVar5) {
      if (((uVar3 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar6 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          _auStack_e = CONCAT46(0x10281bf3,auStack_e);
          fVar6 = (float10)FUN_10281c11();
          fVar6 = -fVar6;
          if (extraout_CL_00 == '\0') {
            uVar1 = 1;
            goto LAB_10281ac5;
          }
        }
        log2(fVar6);
        _auStack_e = CONCAT46(0x10281aa1,auStack_e);
        uVar1 = FUN_10283130();
        if (DAT_103a54b4 != 0) {
          return uVar1;
        }
        uVar1 = FUN_10283219();
        return uVar1;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar1 = FUN_102831ce();
        return uVar1;
      }
      _auStack_e = CONCAT46(0x10281bab,auStack_e);
      uVar1 = FUN_10281c11();
      if ((param_4 & 0x80000000) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL) == 0) {
          return uVar1;
        }
        uVar1 = FUN_102831ce();
        return uVar1;
      }
      uVar1 = 2;
      goto LAB_10281ac5;
    }
    iVar4 = 0;
    fVar6 = extraout_ST0;
    fVar7 = extraout_ST1;
    in_ST6 = in_ST7;
  }
  if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
LAB_10281af8:
    fVar6 = (float10)0;
    uVar1 = (ushort)NAN(fVar7) << 8 | (ushort)(fVar7 < fVar6) << 9 | (ushort)(fVar7 != fVar6) << 10
            | (ushort)(fVar7 == fVar6) << 0xe;
    if ((fVar7 == fVar6) == 0) {
      return uVar1;
    }
    return uVar1;
  }
  if (iVar4 != 0) {
    return 0;
  }
  uStack_64 = 0x10281b57;
  uStack_6c = in_FPUStatusWord;
  _auStack_e = in_ST6;
  iVar4 = FUN_10287190((double)fVar6,(double)fVar7,local_78);
  if (iVar4 == 0) {
    return 0;
  }
  uVar1 = 1;
LAB_10281ac5:
  if (DAT_103a54b4 != 0) {
    return uVar1;
  }
  _auStack_e = CONCAT46(0x10281ae2,auStack_e);
  uVar1 = FUN_10286d30();
  return uVar1;
}

