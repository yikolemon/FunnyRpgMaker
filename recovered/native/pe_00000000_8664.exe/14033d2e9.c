/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033d2e9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14033d2e9(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = ram0x000140613b10 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_1 + 1);
  local_18 = *param_1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_2 + 1) = local_10;
  *param_2 = local_18;
  if (ram0x000140613b10 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_8 ^ (ulonglong)auStack_38);
}

