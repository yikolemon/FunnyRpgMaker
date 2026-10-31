/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ffb82 */

undefined1 * FUN_1800ffb82(undefined1 *param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (param_2 != 0) {
    FUN_1800fe79b(param_1,param_2,0x100);
    FUN_1800ffc10(param_1);
  }
  return param_1;
}

