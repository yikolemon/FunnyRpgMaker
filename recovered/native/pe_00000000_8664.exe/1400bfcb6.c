/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bfcb6 */

void FUN_1400bfcb6(longlong param_1)

{
  size_t sVar1;
  undefined1 auStack_48 [43];
  char local_1d [5];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  FUN_1400783ac(local_1d);
  sVar1 = strlen(local_1d);
  FUN_1400bfd2a(param_1,*(undefined8 *)(param_1 + 8),local_1d,sVar1 & 0xffffffff);
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_1400bfcae(param_1);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

