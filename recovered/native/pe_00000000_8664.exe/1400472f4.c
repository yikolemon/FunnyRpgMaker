/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400472f4 */

undefined8
FUN_1400472f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_140047410(param_1,&local_10,param_4,0);
  if (DAT_140f17b40 == (local_8 ^ (ulonglong)auStack_38)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_8 ^ (ulonglong)auStack_38);
}

