/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400665e6 */

void FUN_1400665e6(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if (2 < (ulonglong)param_2[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_140049b0a("Invalid fill (too long).");
  }
  uVar1 = thunk_FUN_14006676c(*param_2,*param_2 + param_2[1] * 2,*param_1 + 0x10);
  local_1a = 0;
  FUN_140066717(uVar1,*param_1 + 0x14);
  *(char *)(*param_1 + 0xe) = (char)param_2[1];
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

