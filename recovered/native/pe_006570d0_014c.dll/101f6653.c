/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f6653 */

void FUN_101f6653(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_10;
  piVar1 = *(int **)(*(int *)(param_1 + 0x80) + 0x34);
  if (piVar1 == (int *)0x0) {
    if (DAT_10388d00 == (local_8 ^ (uint)&local_10)) {
      FUN_101f6754();
      return;
    }
  }
  else {
    local_10 = *param_2;
    local_c = param_3;
    (**(code **)(*piVar1 + 4))(piVar1[1],&local_10);
    if (DAT_10388d00 == (local_8 ^ (uint)&local_10)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

