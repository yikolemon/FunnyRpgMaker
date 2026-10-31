/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140131cd8 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_140131cd8(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_24c8 [32];
  undefined4 local_24a8;
  undefined1 local_2498 [80];
  undefined1 local_2448 [9232];
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_24c8;
  FUN_140133231(local_2448,*(undefined8 *)(param_1 + 0x10));
  FUN_140139c28(local_2498,local_2448);
  local_24a8 = param_5;
  uVar1 = FUN_140139c43(local_2498,param_1,*(undefined8 *)(param_2 + 8),param_4);
  FUN_14013a1d6(local_2498);
  FUN_14013444a(local_2448);
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_24c8)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_24c8);
}

