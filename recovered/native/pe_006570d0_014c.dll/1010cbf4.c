/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010cbf4 */

undefined4 FUN_1010cbf4(undefined4 param_1)

{
  undefined1 auStack_2c [8];
  undefined1 local_24 [16];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_2c;
  FUN_1010cc64(local_24);
  FUN_1010cea8(local_24,0xffffffff);
  FUN_1010d23f(auStack_2c);
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_2c)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

