/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c1eb0 */

undefined4
FUN_101c1eb0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_24;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  if (param_2 == 0) {
    uVar1 = 6;
  }
  else {
    local_34 = 1;
    local_30 = param_2;
    local_2c = param_3;
    local_24 = 0;
    uVar1 = FUN_101c1a9f(param_4,param_5,1);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_34)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

