/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801236ce */

undefined8 FUN_1801236ce(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = param_1;
  uVar1 = FUN_180123740(8,8);
  FUN_1802a82f0(&local_28,&local_20,uVar1);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

