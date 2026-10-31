/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027746d */

undefined4
FUN_1027746d(double *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            undefined4 param_7,uint param_8,undefined4 param_9,undefined4 param_10,int param_11)

{
  __acrt_fp_class _Var1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_11 + 0x1c) = 1;
    *(undefined4 *)(param_11 + 0x18) = 0x16;
  }
  else if ((param_3 == 0) || (param_4 == 0)) {
    *(undefined1 *)(param_11 + 0x1c) = 1;
    *(undefined4 *)(param_11 + 0x18) = 0x16;
  }
  else {
    if (param_5 != 0) {
      if ((((param_6 == 0x41) || (param_6 == 0x45)) || (param_6 == 0x46)) ||
         (local_8 = 0, param_6 == 0x47)) {
        local_8 = 1;
      }
      if (((param_8 & 8) == 0) && (_Var1 = __acrt_fp_classify(param_1), _Var1 != 0)) {
        if ((*(int *)((int)param_1 + 4) < 1) && (*(int *)((int)param_1 + 4) < 0)) {
          local_c = 1;
        }
        else {
          local_c = 0;
        }
        uVar2 = FUN_10277621(_Var1,local_c,param_2,param_3,local_8);
        return uVar2;
      }
      if ((param_8 & 0x10) == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
      uVar3 = 0;
      if ((param_8 & 0x20) != 0) {
        uVar3 = param_10;
      }
      if (param_6 < 0x62) {
        if ((param_6 == 0x61) || (param_6 == 0x41)) {
          uVar2 = FUN_102779ce(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar2,uVar3,
                               param_11);
          return uVar2;
        }
        param_6 = param_6 + -0x45;
      }
      else {
        param_6 = param_6 + -0x65;
      }
      if (param_6 == 0) {
        uVar2 = FUN_102777f9(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar2,uVar3,
                             param_11);
        return uVar2;
      }
      if (param_6 != 1) {
        uVar2 = FUN_10277e73(param_1,param_2,param_3,param_4,param_5,param_7,local_8,uVar2);
        return uVar2;
      }
      uVar2 = FUN_10277dea(param_1,param_2,param_3,param_4,param_5,param_7);
      return uVar2;
    }
    *(undefined1 *)(param_11 + 0x1c) = 1;
    *(undefined4 *)(param_11 + 0x18) = 0x16;
  }
  FUN_10274034(0,0,0,0,0,param_11);
  return 0x16;
}

