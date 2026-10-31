/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005a90b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18005a90b(void)

{
  undefined1 auStack_48 [40];
  undefined4 *local_20;
  ulonglong *local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_18 = &local_8;
  local_c = 0xfffffffe;
  _DAT_180417bf0 = 0;
  uRam0000000180417bf8 = 0;
  _DAT_180417c00 = 0;
  local_20 = &local_c;
  FUN_1800448ea(&DAT_180417bf0,4);
  FUN_18023d710(&LAB_18005a998);
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

