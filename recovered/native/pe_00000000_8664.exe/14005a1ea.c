/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005a1ea */

undefined1 FUN_14005a1ea(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_1d [5];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = 0;
  iVar1 = FUN_14018a230(local_1d,param_2,&local_28,param_1 + 0x30);
  if (iVar1 != 1) {
    local_1d[0] = param_3;
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return local_1d[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

