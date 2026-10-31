/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c4e4e */

char * FUN_1800c4e4e(char *param_1)

{
  size_t sVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  DWORD local_2c;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_2c = GetCurrentThreadId();
  FUN_1800c2b22(&DAT_180417a20,local_28);
  if (*(char *)(local_28[0] + 0x14) == '\x01') {
    sVar1 = strlen(param_1);
    lVar2 = FUN_1800ae10c(param_1,sVar1);
    param_1 = param_1 + lVar2;
  }
  else {
    param_1 = (char *)(*DAT_180417b48)(param_1);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

