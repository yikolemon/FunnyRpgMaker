/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000a2f3 */

WCHAR FUN_14000a2f3(byte param_1,UINT *param_2)

{
  undefined1 auStackY_48 [32];
  undefined8 local_20;
  WCHAR local_14;
  byte local_11;
  ulonglong local_10;
  
  local_10 = DAT_14012ea80 ^ (ulonglong)auStackY_48;
  local_14 = L'\0';
  local_20 = 0;
  local_11 = param_1;
  FUN_140088b60(&local_14,&local_11,1,&local_20,param_2);
  if (DAT_14012ea80 == (local_10 ^ (ulonglong)auStackY_48)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_10 ^ (ulonglong)auStackY_48);
}

