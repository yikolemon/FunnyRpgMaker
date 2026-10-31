/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125ebb */

void FUN_10125ebb(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 local_10;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)&local_10;
  local_8 = *(undefined4 *)(param_1 + 1);
  local_10 = *param_1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_2 + 1) = local_8;
  *param_2 = local_10;
  if (DAT_10388d00 == (local_4 ^ (uint)&local_10)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

