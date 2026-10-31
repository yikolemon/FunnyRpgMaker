/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c290c */

bool FUN_1800c290c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_180062454(param_1,local_30,param_2);
  if (*(char *)(local_20 + 0x19) == '\0') {
    iVar2 = FUN_1800624b8(local_20 + 0x20,*param_2);
    bVar1 = iVar2 < 1;
  }
  else {
    bVar1 = false;
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

