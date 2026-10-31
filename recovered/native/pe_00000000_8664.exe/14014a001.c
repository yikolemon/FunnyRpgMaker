/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014a001 */

void FUN_14014a001(longlong param_1)

{
  longlong lVar1;
  
  if (**(longlong **)(param_1 + 0x38) != 0) {
    lVar1 = FUN_14014c30e();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(**(undefined8 **)(param_1 + 0x38));
    }
    **(undefined8 **)(param_1 + 0x38) = 0;
  }
  return;
}

