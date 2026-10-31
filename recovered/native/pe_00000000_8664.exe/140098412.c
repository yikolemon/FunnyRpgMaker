/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140098412 */

void FUN_140098412(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400a87a9();
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_140078d44(param_1 + 0x2930,*param_2,0);
  FUN_1400a8884(param_2);
  return;
}

