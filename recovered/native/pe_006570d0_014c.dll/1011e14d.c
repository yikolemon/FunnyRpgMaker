/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011e14d */

undefined8 FUN_1011e14d(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_1c = param_2;
  local_20 = param_1;
  local_24 = 0;
  local_28 = 0;
  uVar1 = FUN_1011e1bd(8,8);
  FUN_1025b2d0(&local_28,&local_20,uVar1);
  if (DAT_10388d00 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return CONCAT44(local_24,local_28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

