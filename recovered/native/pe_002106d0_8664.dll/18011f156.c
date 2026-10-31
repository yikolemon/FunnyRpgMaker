/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011f156 */

void FUN_18011f156(longlong param_1,undefined4 *param_2)

{
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_18012f879();
  }
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_1800ffa88(param_1 + 0x2930,*param_2,0);
  FUN_18012f954(param_2);
  return;
}

