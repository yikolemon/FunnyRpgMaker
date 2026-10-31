/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006a2a9 */

undefined8
FUN_14006a2a9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  local_40 = param_3;
  local_38 = FUN_1401aa6d0(param_3);
  local_48 = param_5;
  FUN_140067ae2(param_1,param_2,&local_40,param_4);
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

