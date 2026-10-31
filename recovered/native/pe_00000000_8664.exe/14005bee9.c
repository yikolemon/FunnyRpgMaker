/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14005bee9 */

undefined2 FUN_14005bee9(undefined1 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_14;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_14 = 0;
  local_20 = 0;
  local_28 = param_2;
  local_11 = param_1;
  FUN_14018d830(&local_14,&local_11,1);
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_48)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
}

