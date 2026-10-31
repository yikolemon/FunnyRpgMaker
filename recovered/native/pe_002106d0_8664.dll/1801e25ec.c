/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e25ec */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1801e25ec(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_24c8 [32];
  undefined4 local_24a8;
  undefined1 local_2498 [80];
  undefined1 local_2448 [9232];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_24c8;
  FUN_1801e3b45(local_2448,*(undefined8 *)(param_1 + 0x10));
  FUN_1801ea53c(local_2498,local_2448);
  local_24a8 = param_5;
  uVar1 = FUN_1801ea557(local_2498,param_1,*(undefined8 *)(param_2 + 8),param_4);
  FUN_1801eaaea(local_2498);
  FUN_1801e4d5e(local_2448);
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_24c8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_24c8);
}

