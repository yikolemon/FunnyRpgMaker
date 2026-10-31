/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125a29 */

void FUN_10125a29(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = &stack0x0000000c;
  puVar1 = (undefined4 *)FUN_1012c5b5();
  FUN_10263875(*puVar1,puVar1[1],param_1,0xffffffff,param_2,0,&stack0x0000000c);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

