/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004782f */

undefined4
FUN_1004782f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  if ((param_5[1] < 0) && (*param_5 < 1)) {
    FUN_10045c16(param_1,param_2,param_3,param_4);
  }
  else {
    local_18 = param_5[1];
    local_1c = FUN_10047f39(param_3,param_4,&local_18);
    local_24 = param_3;
    local_20 = param_4;
    FUN_10048025(param_1,param_2,local_18,param_5,1,&local_24);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_24)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

