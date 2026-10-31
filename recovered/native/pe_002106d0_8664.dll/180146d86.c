/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180146d86 */

void FUN_180146d86(longlong param_1)

{
  size_t sVar1;
  undefined1 auStack_48 [43];
  char local_1d [5];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_1800ff0f0(local_1d);
  sVar1 = strlen(local_1d);
  FUN_180146dfa(param_1,*(undefined8 *)(param_1 + 8),local_1d,sVar1 & 0xffffffff);
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_180146d7e(param_1);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

