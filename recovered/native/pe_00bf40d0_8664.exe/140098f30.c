/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140098f30 */

double FUN_140098f30(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  __acrt_ptd *p_Var3;
  undefined4 extraout_var;
  ulonglong uVar4;
  double dVar5;
  undefined1 in_XMM0 [16];
  
  dVar5 = in_XMM0._0_8_;
  if (param_2 == (int *)0x0) {
    p_Var3 = FUN_140095e5c();
    *(undefined4 *)p_Var3 = 0x16;
    FUN_1400a0ea0();
    return 0.0;
  }
  if (((ulonglong)dVar5 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    *param_2 = -1;
    if ((((longlong)dVar5 + 0x10000000000000U & 0x7fffffffffffffff) != 0) &&
       (((ulonglong)dVar5 & 0x7ff8000000000000) != 0x7ff8000000000000)) {
      uVar2 = FUN_1400a9d40(0x1f80,0xffc0);
      dVar5 = (double)FUN_1400ace60(8,0x17,dVar5,dVar5 + DAT_1400b6b38,CONCAT44(extraout_var,uVar2))
      ;
      return dVar5;
    }
  }
  else {
    if (dVar5 == 0.0) {
      *param_2 = 0;
      return dVar5;
    }
    if ((((ulonglong)dVar5 & 0x7ff0000000000000) == 0) &&
       (((ulonglong)dVar5 & 0xfffffffffffff) != 0)) {
      uVar4 = (ulonglong)dVar5 & 0xfffffffffffff;
      lVar1 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      uVar4 = uVar4 << (0x34U - (char)lVar1 & 0x3f) & 0xffefffffffffffff;
      *param_2 = (int)lVar1 + -0x431;
      if (dVar5 < 0.0) {
        uVar4 = uVar4 | 0x8000000000000000;
      }
      return (double)(uVar4 & 0xbfefffffffffffff | 0x3fe0000000000000);
    }
    dVar5 = (double)((ulonglong)dVar5 & 0xbfefffffffffffff | 0x3fe0000000000000);
    *param_2 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
  }
  return dVar5;
}

