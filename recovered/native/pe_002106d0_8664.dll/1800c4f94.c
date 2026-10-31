/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c4f94 */

void FUN_1800c4f94(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [36];
  DWORD local_34;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_34 = GetCurrentThreadId();
  FUN_1800c2b22(&DAT_180417a20,local_30);
  if (*(char *)(local_30[0] + 0x14) != '\0') {
    param_2 = 0xfde9;
  }
  (*DAT_180417b58)(param_1,param_2);
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

