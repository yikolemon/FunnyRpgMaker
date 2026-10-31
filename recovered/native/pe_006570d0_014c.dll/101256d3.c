/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101256d3 */

void FUN_101256d3(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = &stack0x00000008;
  uVar1 = FUN_1025e77b(1);
  puVar2 = (undefined4 *)FUN_1004303e();
  FUN_1025e994(*puVar2,puVar2[1],uVar1,param_1,0,&stack0x00000008);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

