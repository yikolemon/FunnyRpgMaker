/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d080c */

ulonglong FUN_1400d080c(uint param_1,float param_2,uint param_3,uint param_4,float param_5)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  if (param_4 != param_3 && 0.0 < param_2) {
    if (DAT_1401c86c8 <= param_2) {
      uVar1 = (ulonglong)param_4;
    }
    else if (param_5 <= 0.0) {
      if ((param_1 & 0xfffffffe) == 8) {
        if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_78)) {
          uVar1 = FUN_1400d0a4c(param_3,param_4,param_2);
          return uVar1;
        }
        goto LAB_1400d098f;
      }
      uVar1 = 0;
      if (param_2 < DAT_1401c86c8) {
        fVar3 = DAT_1402115a8;
        if (param_3 <= param_4) {
          fVar3 = DAT_1401c86a0;
        }
        param_3 = param_3 + (int)(fVar3 + param_2 * (float)(int)(param_4 - param_3));
        goto LAB_1400d0850;
      }
    }
    else {
      local_54 = param_5;
      if (param_5 <= (float)param_3) {
        local_54 = (float)param_3;
      }
      local_58 = param_5;
      if (param_5 <= (float)param_4) {
        local_58 = (float)param_4;
      }
      if (param_4 < param_3) {
        FUN_140078833(&local_54,&local_58);
        param_2 = DAT_1401c86c8 - param_2;
      }
      fVar3 = local_54;
      fVar2 = (float)FUN_1401a65a0(local_58 / local_54,param_2);
      uVar1 = (ulonglong)(fVar2 * fVar3);
    }
  }
  else {
LAB_1400d0850:
    uVar1 = (ulonglong)param_3;
  }
  if (DAT_140f17b40 == (local_50 ^ (ulonglong)auStack_78)) {
    return uVar1;
  }
LAB_1400d098f:
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_50 ^ (ulonglong)auStack_78);
}

