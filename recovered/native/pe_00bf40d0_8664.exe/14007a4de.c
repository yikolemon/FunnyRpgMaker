/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007a4de */

undefined8 FUN_14007a4de(longlong param_1,uint param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_140071cf0(param_1,param_2,&local_18);
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStack_38)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStack_38);
}

