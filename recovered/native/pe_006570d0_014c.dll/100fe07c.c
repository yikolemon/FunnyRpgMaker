/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fe07c */

void FUN_100fe07c(float param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  float *local_50;
  float *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  undefined8 local_34;
  undefined8 local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_50;
  local_1c = param_1;
  local_18 = param_2;
  local_24 = param_3;
  local_20 = param_4;
  if (0.0 < *(float *)(DAT_1039d74c + 0xd18)) {
    local_4c = (float *)0x3f800000;
    local_50 = (float *)0x6;
    local_38 = *(float *)(DAT_1039d74c + 0xd18);
    local_48 = FUN_100fcb39();
    local_4c = (float *)&local_2c;
    local_2c = CONCAT44(param_4 + DAT_102b70a0._4_4_,param_3 + (float)DAT_102b70a0);
    local_50 = (float *)&local_34;
    local_34 = CONCAT44(param_2 + DAT_102b70a0._4_4_,param_1 + (float)DAT_102b70a0);
    local_3c = 0;
    local_40 = local_38;
    local_44 = param_5;
    FUN_1018b762();
    local_4c = (float *)0x3f800000;
    local_50 = (float *)0x5;
    local_48 = FUN_100fcb39();
    local_3c = 0;
    local_40 = local_38;
    local_44 = param_5;
    local_4c = &local_24;
    local_50 = &local_1c;
    FUN_1018b762();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_50)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

