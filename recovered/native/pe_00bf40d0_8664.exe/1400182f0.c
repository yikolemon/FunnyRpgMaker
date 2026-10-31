/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400182f0 */

void FUN_1400182f0(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 1) != 0) {
    local_28 = *param_1;
    uStack_20 = param_1[1];
    iVar1 = FUN_14008b440(&local_28);
    if (iVar1 == 0) {
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_48)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_140086440(local_10 ^ (ulonglong)auStack_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14008b2a0(1);
}

