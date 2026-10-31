/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c5028 */

void FUN_1800c5028(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  DWORD local_54;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_54 = GetCurrentThreadId();
  FUN_1800c2b22(&DAT_180417a20,local_50);
  if (*(char *)(local_50[0] + 0x14) != '\0') {
    param_3 = 0xfde9;
  }
  local_60 = param_6;
  local_68 = param_5;
  (*DAT_180417b60)(param_1,param_2,param_3,param_4);
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
}

