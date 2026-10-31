/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140155890 */

void FUN_140155890(longlong param_1)

{
  longlong lVar1;
  
  if (**(longlong **)(param_1 + 0x38) != 0) {
    lVar1 = FUN_1401571c4();
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(**(undefined8 **)(param_1 + 0x38));
    }
    **(undefined8 **)(param_1 + 0x38) = 0;
  }
  return;
}

