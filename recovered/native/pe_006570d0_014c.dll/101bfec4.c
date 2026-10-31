/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bfec4 */

void FUN_101bfec4(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  puVar1 = (undefined4 *)FUN_101bff17(param_1,0x60,&local_10);
  if (local_10 == 0) {
    *puVar1 = param_1;
    *param_2 = puVar1;
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

