/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140277b2b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140277b2b(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  if (param_2 != param_3) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      FUN_140277ba3(&local_30,uVar1,param_4);
      param_4 = local_30;
    } while (param_2 != param_3);
  }
  *param_1 = param_4;
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_58);
}

