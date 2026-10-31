/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009c5fd */

undefined8 FUN_14009c5fd(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = param_1;
  uVar1 = FUN_14009c66f(8,8);
  FUN_1401c5180(&local_28,&local_20,uVar1);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

