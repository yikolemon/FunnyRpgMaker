/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10066b2b */

undefined4 FUN_10066b2b(undefined4 param_1,uint param_2,undefined4 param_3)

{
  undefined1 auStack_18 [16];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_18;
  if ((param_2 < 0x110000) && ((param_2 & 0xfffff800) != 0xd800)) {
    thunk_FUN_10066ba4(param_1,param_2,param_3);
    if (DAT_10388d00 == (local_8 ^ (uint)auStack_18)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  FUN_1006425a(param_2);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(auStack_18,&DAT_10367c2c);
}

