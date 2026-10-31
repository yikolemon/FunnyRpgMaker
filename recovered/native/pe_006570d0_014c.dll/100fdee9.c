/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fdee9 */

void FUN_100fdee9(float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
                 char param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  float *local_54;
  float *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_54;
  local_1c = param_1;
  fStack_18 = param_2;
  local_24 = param_3;
  fStack_20 = param_4;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  local_48 = param_7;
  local_4c = param_5;
  local_44 = 0.0;
  local_54 = &local_1c;
  local_50 = &local_24;
  FUN_1018b85a();
  if ((param_6 != '\0') && (0.0 < *(float *)(iVar2 + 0xd18))) {
    local_38 = *(undefined4 *)(iVar1 + 0x2e8);
    local_50 = (float *)0x3f800000;
    local_54 = (float *)0x6;
    local_3c = *(float *)(iVar2 + 0xd18);
    local_4c = FUN_100fcb39();
    local_2c = CONCAT44(fStack_20 + DAT_102b70a0._4_4_,local_24 + (float)DAT_102b70a0);
    local_50 = (float *)&local_2c;
    local_34 = CONCAT44(fStack_18 + DAT_102b70a0._4_4_,local_1c + (float)DAT_102b70a0);
    local_54 = (float *)&local_34;
    local_40 = 0;
    local_44 = local_3c;
    local_48 = param_7;
    FUN_1018b762();
    local_50 = (float *)0x3f800000;
    local_54 = (float *)0x5;
    local_4c = FUN_100fcb39();
    local_40 = 0;
    local_44 = local_3c;
    local_48 = param_7;
    local_54 = &local_1c;
    local_50 = &local_24;
    FUN_1018b762();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_54)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

