/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180111909 */

undefined8 FUN_180111909(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_68;
  FUN_180111992(param_2,local_30,local_38);
  FUN_180111ae6(local_40,param_2,local_38,0xffffffff);
  FUN_180111e86(param_1,param_2,local_40);
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_68)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_68);
}

