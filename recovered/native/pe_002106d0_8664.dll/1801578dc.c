/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801578dc */

ulonglong FUN_1801578dc(uint param_1,float param_2,uint param_3,uint param_4,float param_5)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_180402640 ^ (ulonglong)auStack_78;
  if (param_4 != param_3 && 0.0 < param_2) {
    if (DAT_1802ac570 <= param_2) {
      uVar1 = (ulonglong)param_4;
    }
    else if (param_5 <= 0.0) {
      if ((param_1 & 0xfffffffe) == 8) {
        if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_78)) {
          uVar1 = FUN_180157b1c(param_3,param_4,param_2);
          return uVar1;
        }
        goto LAB_180157a5f;
      }
      uVar1 = 0;
      if (param_2 < DAT_1802ac570) {
        fVar3 = DAT_1802de848;
        if (param_3 <= param_4) {
          fVar3 = DAT_1802dbb2c;
        }
        param_3 = param_3 + (int)(fVar3 + param_2 * (float)(int)(param_4 - param_3));
        goto LAB_180157920;
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
        FUN_1800ff577(&local_54,&local_58);
        param_2 = DAT_1802ac570 - param_2;
      }
      fVar3 = local_54;
      fVar2 = (float)FUN_1802886b0(local_58 / local_54,param_2);
      uVar1 = (ulonglong)(fVar2 * fVar3);
    }
  }
  else {
LAB_180157920:
    uVar1 = (ulonglong)param_3;
  }
  if (DAT_180402640 == (local_50 ^ (ulonglong)auStack_78)) {
    return uVar1;
  }
LAB_180157a5f:
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_50 ^ (ulonglong)auStack_78);
}

