/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10194ac6 */

void FUN_10194ac6(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 *local_58;
  undefined8 *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined8 local_24;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_58;
  local_38 = *param_3;
  local_40 = param_3[1];
  local_3c = *param_2;
  local_44 = param_2[1];
  local_28 = param_3[2];
  local_2c = param_2[2];
  local_30 = param_3[3];
  local_34 = param_2[3];
  if (local_3c < local_38) {
    local_48 = (uint)(local_34 <= local_30) * 0x40 + (uint)(local_40 <= local_44) * 0x10 + 0x100;
    local_54 = &local_1c;
    local_1c = CONCAT44(local_30,local_38);
    local_58 = &local_24;
    local_24 = CONCAT44(local_40,local_3c);
    local_4c = param_5;
    local_50 = param_4;
    FUN_1018b85a();
  }
  if (local_28 < local_2c) {
    local_48 = (uint)(local_34 <= local_30) * 0x80 + (uint)(local_40 <= local_44) * 0x20 + 0x100;
    local_54 = &local_1c;
    local_1c = CONCAT44(param_3[3],param_2[2]);
    local_24 = CONCAT44((int)*(undefined8 *)(param_3 + 1),
                        (int)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20));
    local_58 = &local_24;
    local_4c = param_5;
    local_50 = param_4;
    FUN_1018b85a();
  }
  if (local_44 < local_40) {
    local_48 = (uint)(local_2c <= local_28) * 0x20 + (uint)(local_38 <= local_3c) * 0x10 + 0x100;
    local_1c = CONCAT44((int)*(undefined8 *)(param_3 + 1),
                        (int)((ulonglong)*(undefined8 *)(param_3 + 1) >> 0x20));
    local_54 = &local_1c;
    local_58 = &local_24;
    local_24 = CONCAT44(param_2[1],*param_3);
    local_4c = param_5;
    local_50 = param_4;
    FUN_1018b85a();
  }
  if (local_30 < local_34) {
    local_48 = (uint)(local_2c <= local_28) * 0x80 + (uint)(local_38 <= local_3c) * 0x40 + 0x100;
    local_54 = &local_1c;
    local_1c = CONCAT44(param_2[3],param_3[2]);
    local_24 = CONCAT44(param_3[3],*param_3);
    local_58 = &local_24;
    local_4c = param_5;
    local_50 = param_4;
    FUN_1018b85a();
  }
  if ((local_3c < local_38) && (local_44 < local_40)) {
    local_1c = *(undefined8 *)param_3;
    local_54 = &local_1c;
    local_24 = *(undefined8 *)param_2;
    local_58 = &local_24;
    local_4c = param_5;
    local_50 = param_4;
    local_48 = 0x10;
    FUN_1018b85a();
  }
  if ((local_28 < local_2c) && (local_44 < local_40)) {
    local_54 = &local_1c;
    local_1c = CONCAT44(param_3[1],param_2[2]);
    local_58 = &local_24;
    local_24 = CONCAT44(param_2[1],param_3[2]);
    local_4c = param_5;
    local_50 = param_4;
    local_48 = 0x20;
    FUN_1018b85a();
  }
  if ((local_3c < local_38) && (local_30 < local_34)) {
    local_54 = &local_1c;
    local_1c = CONCAT44(param_2[3],*param_3);
    local_58 = &local_24;
    local_24 = CONCAT44(param_3[3],*param_2);
    local_4c = param_5;
    local_50 = param_4;
    local_48 = 0x40;
    FUN_1018b85a();
  }
  if ((local_28 < local_2c) && (local_30 < local_34)) {
    local_1c = *(undefined8 *)(param_2 + 2);
    local_54 = &local_1c;
    local_24 = *(undefined8 *)(param_3 + 2);
    local_58 = &local_24;
    local_4c = param_5;
    local_50 = param_4;
    local_48 = 0x80;
    FUN_1018b85a();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

