/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004dc3c */

void FUN_14004dc3c(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x2d0) != 0) {
      (**(code **)(*(longlong *)(param_1 + 0x2d0) + 0x18))(param_1);
    }
    if (*(longlong *)(param_1 + 0x3e0) != 0) {
      FUN_1400530c6(*(longlong *)(param_1 + 0x3e0));
      FUN_14001c53d(lVar1,*(longlong *)(param_1 + 0x3e0));
      *(undefined8 *)(param_1 + 0x3e0) = 0;
    }
    FUN_14004e369(param_1);
    *(undefined8 *)(param_1 + 0x408) = 0;
  }
  return;
}

