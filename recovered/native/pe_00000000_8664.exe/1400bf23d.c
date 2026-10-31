/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bf23d */

void FUN_1400bf23d(void)

{
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_38 = &local_10;
  local_10 = 0;
  local_28 = in_stack_00000030;
  uStack_20 = in_stack_00000038;
  local_30 = in_stack_00000028;
  FUN_1400baff6();
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_58);
}

