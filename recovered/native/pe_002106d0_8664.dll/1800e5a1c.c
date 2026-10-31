/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e5a1c */

bool FUN_1800e5a1c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_1800cb312(param_1,local_30,param_2);
  if (*(char *)(local_20 + 0x19) == '\0') {
    iVar1 = FUN_1800929ec(param_2,local_20 + 0x20);
    bVar2 = -1 < iVar1;
  }
  else {
    bVar2 = false;
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

