/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10045f16 */

short * FUN_10045f16(short *param_1,short *param_2,undefined4 *param_3)

{
  undefined4 *local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  if ((ushort)(*param_1 - 0x31U) < 9) {
    local_14 = 0;
    param_1 = (short *)FUN_10045c3a(param_1,param_2,&local_14);
    *(undefined4 *)*param_3 = local_14;
  }
  else if (*param_1 == 0x7b) {
    param_1 = param_1 + 1;
    if (param_1 != param_2) {
      local_18 = param_3;
      param_1 = (short *)FUN_10046524(param_1,param_2,&local_18);
    }
    if ((param_1 == param_2) || (*param_1 != 0x7d)) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid format string.");
    }
    param_1 = param_1 + 1;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

