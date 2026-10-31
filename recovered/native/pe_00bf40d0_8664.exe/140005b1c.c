/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140005b1c */

CHAR FUN_140005b1c(longlong param_1,WCHAR param_2,CHAR param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  CHAR local_1d [5];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  local_28 = 0;
  iVar1 = FUN_140088a70(local_1d,param_2,&local_28,(UINT *)(param_1 + 0x30));
  if (iVar1 != 1) {
    local_1d[0] = param_3;
  }
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return local_1d[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

