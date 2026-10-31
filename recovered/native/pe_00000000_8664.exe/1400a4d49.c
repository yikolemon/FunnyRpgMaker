/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a4d49 */

void FUN_1400a4d49(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_1 + 1);
  local_18 = *param_1;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined4 *)(param_2 + 1) = local_10;
  *param_2 = local_18;
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

