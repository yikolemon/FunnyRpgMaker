/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10156430 */

float10 FUN_10156430(float param_1,float param_2)

{
  float10 fVar1;
  float *local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [2];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_30;
  local_30 = local_10;
  FUN_1010c3e4();
  local_28 = local_10[0];
  fVar1 = (float10)FUN_10115023();
  local_20 = (float)fVar1;
  local_30 = (float *)0x0;
  local_2c = 0xbf800000;
  local_14 = local_20;
  FUN_10114a0e();
  fVar1 = (float10)FUN_10115023();
  local_18 = (float)fVar1;
  local_24 = local_18 - local_20;
  if (local_18 - local_20 <= param_1 * local_28) {
    local_24 = param_1 * local_28;
  }
  local_28 = local_28 * param_2;
  local_30 = (float *)(local_20 + local_24);
  local_2c = 0;
  FUN_10114a0e();
  local_1c = local_28 - local_24;
  if (local_1c <= 0.0) {
    local_1c = 0.0;
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_30)) {
    return (float10)local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

