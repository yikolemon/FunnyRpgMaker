/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001959a */

ulonglong FUN_14001959a(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_1c = param_3;
  uVar1 = FUN_14001960a(param_1,(longlong)&local_1c,4);
  if ((char)uVar1 == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14001960a(param_1,param_2,(ulonglong)local_1c);
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

