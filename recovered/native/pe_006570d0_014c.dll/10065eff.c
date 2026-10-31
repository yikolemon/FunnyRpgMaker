/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10065eff */

int FUN_10065eff(int param_1,int param_2,int param_3)

{
  int iVar1;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  undefined1 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined1 local_20;
  undefined1 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  iVar1 = param_2 + ((uint)((param_3 - param_2 >> 2) * -0x55555555) >> 1) * 0xc;
  local_34 = param_3 + -0xc;
  local_30 = CONCAT31(local_30._1_3_,local_1c);
  local_3c = param_2;
  local_38 = iVar1;
  FUN_10066124();
  local_28 = local_20;
  local_2c = local_24;
  local_30 = param_3;
  local_38 = param_2;
  local_3c = param_1;
  local_34 = iVar1;
  FUN_10066257();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_3c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

