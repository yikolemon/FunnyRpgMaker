/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100505f0 */

undefined4 __thiscall
FUN_100505f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_28 [32];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)auStack_28;
  *(undefined1 *)(param_1 + 0x14) = 1;
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_1005407c(param_4);
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(auStack_28,&DAT_1036086c);
  }
  if (DAT_10388d00 == (local_8 ^ (uint)auStack_28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

