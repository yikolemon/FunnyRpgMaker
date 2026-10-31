/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f66d5 */

void FUN_101f66d5(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x80) + 0x34);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_101f6767(param_3,param_4);
  }
  else {
    (**(code **)*puVar1)(puVar1[1],param_2,&local_18);
    *param_3 = local_18;
    *param_4 = local_14;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

