/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006607f */

void FUN_1006607f(undefined8 *param_1,int param_2)

{
  undefined8 *local_44;
  undefined4 local_40;
  int local_3c;
  undefined8 *local_38;
  undefined8 local_28;
  undefined4 local_20;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_44;
  if (0x17 < param_2 - (int)param_1) {
    local_20 = *(undefined4 *)(param_2 + -4);
    local_38 = &local_28;
    local_28 = *(undefined8 *)(param_2 + -0xc);
    *(undefined4 *)(param_2 + -4) = *(undefined4 *)(param_1 + 1);
    *(undefined8 *)(param_2 + -0xc) = *param_1;
    local_3c = ((param_2 + -0xc) - (int)param_1 >> 2) * -0x55555555;
    local_44 = param_1;
    local_40 = 0;
    FUN_10065f9e();
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_44)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

