/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00492480 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00492480(void *this,int param_1,uint param_2)

{
  uint extraout_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  ushort in_FPUControlWord;
  unkbyte10 extraout_ST0;
  double dVar6;
  undefined4 unaff_retaddr;
  undefined8 uStack_c;
  
  bVar4 = DAT_00521f1c == 0;
  if (!bVar4) {
    bVar5 = (MXCSR & 0x7f80) == 0x1f80;
    if (bVar5) {
      uStack_c._0_6_ = CONCAT24(in_FPUControlWord,(undefined4)uStack_c);
    }
    bVar4 = false;
    if (bVar5 && (in_FPUControlWord & 0x7f) == 0x7f) {
      dVar6 = (double)CONCAT44(param_2,param_1);
      iVar3 = 0;
      while( true ) {
        uVar1 = (uint)(ushort)((ulonglong)dVar6 >> 0x34);
        uVar2 = uVar1 - 1;
        if (uVar2 < 0x7fe) {
          return (SUB82(_DAT_004fa330 +
                        (double)((ulonglong)dVar6 & _DAT_004fa320 | (ulonglong)DAT_004fa380),0) &
                 0x7f0) + ((uVar1 - 0x3ff) + iVar3) * 0x400;
        }
        uStack_c = -(ulonglong)(_DAT_004fa390 == (double)CONCAT44(param_2,param_1));
        if ((short)uStack_c != 0) break;
        if (uVar2 != 0xffffffff) {
          if (uVar2 < 0x7ff) {
            uVar1 = (uint)(ushort)-(ushort)(DAT_004fa380 ==
                                           (double)(CONCAT44(param_2,param_1) & _DAT_004fa320 |
                                                   (ulonglong)DAT_004fa380));
            if (uVar1 != 0) {
              return uVar1;
            }
            iVar3 = 1000;
            uStack_c = _DAT_004fa320;
          }
          else if (((uVar1 & 0x7ff) < 0x7ff) || (param_1 == 0 && (param_2 & 0xfffff) == 0)) {
            uStack_c = 0xfff8000000000000;
            iVar3 = 3;
          }
          else {
            iVar3 = 1000;
          }
          goto LAB_004a1b52;
        }
        dVar6 = (double)CONCAT44(param_2,param_1) * DAT_004fa3a0;
        iVar3 = -0x34;
      }
      iVar3 = 2;
      uStack_c = DAT_004fa3b0;
LAB_004a1b52:
      uVar1 = FUN_0049e260((undefined8 *)&param_1,(undefined8 *)&param_1,&uStack_c,iVar3);
      return uVar1;
    }
  }
  uVar1 = __fload_withFB(this,(int)&param_1);
  if (bVar4) {
    if (((uVar1 & 0xfffff) != 0) || (param_1 != 0)) {
      uStack_c = CONCAT44(0x4a1904,(undefined4)uStack_c);
      uVar1 = FUN_004a331c();
      goto LAB_004a1921;
    }
    uVar2 = 0;
    if ((uVar1 & 0x80000000) == 0) goto LAB_004a18b5;
  }
  else {
    if ((((param_2 & 0x7ff00000) == 0) && ((param_2 & 0xfffff) == 0)) && (param_1 == 0)) {
      uVar1 = 2;
      goto LAB_004a1921;
    }
    if ((param_2 & 0x80000000) == 0) {
      log2(extraout_ST0);
      uVar2 = param_2;
LAB_004a18b5:
      if (DAT_00521f28 != 0) {
        return uVar2;
      }
      uVar1 = __math_exit(&DAT_004fa310,0x1a,unaff_retaddr,param_1,param_2);
      return uVar1;
    }
  }
  uVar1 = 1;
LAB_004a1921:
  if (DAT_00521f28 != 0) {
    return uVar1;
  }
  uStack_c = CONCAT44(0x4a193e,(undefined4)uStack_c);
  __startOneArgErrorHandling(&DAT_004fa310,0x1a,in_FPUControlWord,unaff_retaddr,param_1,param_2);
  return extraout_EAX;
}

