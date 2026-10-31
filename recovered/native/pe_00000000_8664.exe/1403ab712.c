/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403ab712 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ab712(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 0x14) = 0;
  if ((*(int *)(param_2 + 4) == 0) || (*(int *)(param_2 + 8) == 0)) {
    *(undefined8 *)(param_2 + 0xc) = 0;
    uVar1 = 1;
  }
  else {
    FUN_1403ae329(&local_28,param_1);
    if (local_20 == 0) {
      *(undefined8 *)(param_2 + 0xc) = 0x7fffffff7fffffff;
      uVar1 = 0;
    }
    else {
      *(int *)(param_2 + 0xc) = local_28;
      *(int *)(param_2 + 0x10) = local_24;
      uVar1 = 1;
      if (local_28 == 0x7fffffff) {
        uVar1 = (uint)(local_24 != 0x7fffffff);
      }
    }
  }
  *(uint *)(param_2 + 0x14) = uVar1;
  if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_18 ^ (ulonglong)auStack_48);
}

