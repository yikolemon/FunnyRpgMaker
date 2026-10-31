/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005a6d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18005a6d8(void)

{
  undefined1 auStack_48 [40];
  undefined2 *local_20;
  ulonglong *local_18;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_18 = &local_8;
  local_a = 1;
  _DAT_180417b98 = 0;
  uRam0000000180417ba0 = 0;
  _DAT_180417ba8 = 0;
  local_20 = &local_a;
  FUN_1800448ea(&DAT_180417b98,2);
  FUN_18023d710(&LAB_18005a764);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

