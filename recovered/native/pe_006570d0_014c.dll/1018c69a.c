/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018c69a */

void __thiscall
FUN_1018c69a(float param_1,undefined4 param_2,float param_3,undefined4 param_4,uint param_5,
            char *param_6,char *param_7,undefined4 param_8,undefined4 *param_9)

{
  float10 fVar1;
  float local_4c;
  float local_48;
  undefined4 local_44;
  uint local_40;
  float *local_3c;
  char *local_38;
  char *local_34;
  undefined4 local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_4c;
  if ((param_6 != param_7 && 0xffffff < param_5) && (*param_6 != '\0')) {
    if ((param_3 == 0.0) && (!NAN(param_3))) {
      param_3 = *(float *)(*(int *)((int)param_1 + 0x2c) + 0x14);
    }
    local_4c = *(float *)((int)param_1 + 0x48);
    fStack_20 = *(float *)((int)param_1 + 0x4c);
    fStack_1c = *(float *)((int)param_1 + 0x50);
    fStack_18 = *(float *)((int)param_1 + 0x54);
    local_48 = param_3;
    local_24 = local_4c;
    if (param_9 != (undefined4 *)0x0) {
      local_48 = (float)*param_9;
      local_28 = param_3;
      fVar1 = (float10)FUN_100fdbca();
      local_24 = (float)fVar1;
      local_48 = (float)param_9[1];
      local_4c = fStack_20;
      fVar1 = (float10)FUN_100fdbca();
      fStack_20 = (float)fVar1;
      local_48 = (float)param_9[2];
      local_4c = fStack_1c;
      fVar1 = (float10)FUN_100ea38a();
      fStack_1c = (float)fVar1;
      local_48 = (float)param_9[3];
      local_4c = fStack_18;
      fVar1 = (float10)FUN_100ea38a();
      fStack_18 = (float)fVar1;
      local_48 = local_28;
    }
    local_2c = (uint)(param_9 != (undefined4 *)0x0);
    local_30 = param_8;
    local_34 = param_7;
    local_38 = param_6;
    local_3c = &local_24;
    local_40 = param_5;
    local_44 = param_4;
    local_4c = param_1;
    FUN_1018c814();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_4c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

