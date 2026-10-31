/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c4eee */

char * FUN_1800c4eee(char *param_1,undefined4 param_2)

{
  size_t sVar1;
  longlong lVar2;
  undefined1 auStack_58 [36];
  DWORD local_34;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_58;
  local_34 = GetCurrentThreadId();
  FUN_1800c2b22(&DAT_180417a20,local_30);
  if (*(char *)(local_30[0] + 0x14) == '\x01') {
    sVar1 = strlen(param_1);
    lVar2 = FUN_1800ae10c(param_1,sVar1);
    param_1 = param_1 + lVar2;
  }
  else {
    param_1 = (char *)(*DAT_180417b50)(param_1,param_2);
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_58);
}

