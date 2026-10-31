/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10042fe5 */

void FUN_10042fe5(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 *local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = &stack0x0000000c;
  puVar1 = (undefined4 *)FUN_1004303e();
  FUN_1025e994(*puVar1,puVar1[1],param_1,param_2,0,&stack0x0000000c);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

