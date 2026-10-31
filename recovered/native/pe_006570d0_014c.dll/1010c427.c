/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010c427 */

float * FUN_1010c427(float *param_1,float param_2,float param_3,uint param_4,uint param_5)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float *local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_30;
  if ((param_2 < 0.0) || (fVar2 = 0.0, fVar3 = 0.0, param_3 < 0.0)) {
    local_30 = &local_10;
    FUN_1010c3e4();
    fVar2 = local_10;
    fVar3 = local_c;
  }
  if (0.0 <= param_2) {
    fVar2 = (float)(~-(uint)(param_2 == 0.0) & (uint)param_2 | param_4 & -(uint)(param_2 == 0.0));
  }
  else {
    local_2c = param_2 + fVar2;
    local_30 = (float *)0x40800000;
    local_20 = fVar3;
    fVar1 = (float10)FUN_100fdbca();
    fVar2 = (float)fVar1;
    fVar3 = local_20;
    local_24 = fVar2;
  }
  if (0.0 <= param_3) {
    fVar3 = (float)(~-(uint)(param_3 == 0.0) & (uint)param_3 | param_5 & -(uint)(param_3 == 0.0));
  }
  else {
    local_2c = param_3 + fVar3;
    local_30 = (float *)0x40800000;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 0;
    local_20 = fVar2;
    fVar1 = (float10)FUN_100fdbca();
    fVar3 = (float)fVar1;
    fVar2 = local_20;
    local_28 = fVar3;
  }
  *param_1 = fVar2;
  param_1[1] = fVar3;
  if (DAT_10388d00 == (local_8 ^ (uint)&local_30)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

