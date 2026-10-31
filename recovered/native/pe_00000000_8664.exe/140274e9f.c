/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140274e9f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140274e9f(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 < param_3) {
    do {
      uVar1 = FUN_140274f1d(&local_30,param_3);
      FUN_140275886(param_4,uVar1);
    } while (local_30 < param_3);
  }
  *param_1 = param_4;
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_58)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_58);
}

