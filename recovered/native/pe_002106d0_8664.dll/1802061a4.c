/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802061a4 */

void FUN_1802061a4(longlong param_1)

{
  longlong lVar1;
  
  if (**(longlong **)(param_1 + 0x38) != 0) {
    lVar1 = FUN_180207ad8();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(**(undefined8 **)(param_1 + 0x38));
    }
    **(undefined8 **)(param_1 + 0x38) = 0;
  }
  return;
}

