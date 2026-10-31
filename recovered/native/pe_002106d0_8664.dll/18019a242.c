/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019a242 */

void FUN_18019a242(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 0x14) = 0;
  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 8) == 0)) {
    *(undefined8 *)(param_2 + 0xc) = 0;
    uVar1 = 1;
  }
  else {
    FUN_18019ce59(&local_28,param_1);
    if (local_20 == 0) {
      *(undefined8 *)(param_2 + 0xc) = 0x7fffffff7fffffff;
      uVar1 = 0;
    }
    else {
      *(int *)(param_2 + 0xc) = local_28;
      *(int *)(param_2 + 0x10) = local_24;
      uVar1 = 1;
      if (local_28 == 0x7fffffff) {
        uVar1 = (uint)(local_24 != 0x7fffffff);
      }
    }
  }
  *(uint *)(param_2 + 0x14) = uVar1;
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

