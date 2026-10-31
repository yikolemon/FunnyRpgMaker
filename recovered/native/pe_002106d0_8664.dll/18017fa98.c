/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18017fa98 */

void FUN_18017fa98(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x28) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))();
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

