/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006cfae */

bool FUN_18006cfae(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_38;
  if (*(char *)(param_2 + 0x19) == '\0') {
    local_10 = *(undefined8 *)(param_2 + 0x30);
    if (*(ulonglong *)(param_2 + 0x38) < 8) {
      local_18 = param_2 + 0x20;
    }
    else {
      local_18 = *(longlong *)(param_2 + 0x20);
    }
    iVar1 = FUN_18006d14a(param_3,&local_18);
    bVar2 = -1 < iVar1;
  }
  else {
    bVar2 = false;
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_38)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_38);
}

