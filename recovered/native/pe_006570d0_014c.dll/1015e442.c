/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015e442 */

void __thiscall FUN_1015e442(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == *(undefined4 **)(param_1 + 8)) {
    FUN_1015e4b2(puVar1,param_2);
  }
  else {
    local_14 = 0;
    FUN_100561d8(param_2,&local_14);
    *puVar1 = local_14;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 4;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

