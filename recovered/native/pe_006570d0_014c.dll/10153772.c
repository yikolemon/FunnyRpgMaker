/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10153772 */

uint FUN_10153772(uint param_1,float param_2,uint param_3,uint param_4,float param_5)

{
  uint uVar1;
  float10 fVar2;
  float fVar3;
  undefined8 local_40;
  double local_38;
  float local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  uVar1 = param_3;
  if ((param_4 != param_3 && 0.0 < param_2) && (uVar1 = param_4, param_2 < DAT_1028b430)) {
    if (0.0 < param_5) {
      fVar3 = (float)((double)((ulonglong)param_3 | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
      local_18 = param_5;
      if (param_5 <= fVar3) {
        local_18 = fVar3;
      }
      fVar3 = (float)((double)((ulonglong)param_4 | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
      local_1c = param_5;
      if (param_5 <= fVar3) {
        local_1c = fVar3;
      }
      if (param_4 < param_3) {
        local_40 = (double)CONCAT44(&local_1c,&local_18);
        FUN_100faec4();
        param_2 = DAT_1028b430 - param_2;
      }
      local_38 = (double)param_2;
      local_40 = (double)(local_1c / local_18);
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      local_2c = local_18;
      fVar2 = (float10)FUN_1026fab0();
      local_30 = (float)fVar2;
      uVar1 = (uint)(local_2c * local_30);
      uVar1 = (int)(local_2c * local_30 - DAT_1028f6d0) & (int)uVar1 >> 0x1f | uVar1;
    }
    else if ((param_1 & 0xfffffffe) == 8) {
      local_38 = (double)CONCAT44(local_38._4_4_,param_2);
      local_40 = (double)CONCAT44(param_4,param_3);
      uVar1 = FUN_101539da();
    }
    else {
      uVar1 = 0;
      if (param_2 < DAT_1028b430) {
        fVar3 = DAT_102b8d58;
        if (param_3 <= param_4) {
          fVar3 = DAT_102b70e0;
        }
        uVar1 = param_3 + (int)(fVar3 + param_2 * (float)(int)(param_4 - param_3));
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_40)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

