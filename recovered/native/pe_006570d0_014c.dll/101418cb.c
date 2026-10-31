/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101418cb */

void FUN_101418cb(undefined4 param_1,undefined4 param_2,float param_3,float param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint local_14;
  
  puVar1 = &param_4;
  local_14 = DAT_10388d00 ^ (uint)&local_14;
  if (param_4 <= 0.0) {
    puVar1 = (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)0x0;
  if (0.0 < param_3) {
    puVar2 = &param_3;
  }
  FUN_101412ec(param_1,8,param_2,puVar2,puVar1,param_5,param_6);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

