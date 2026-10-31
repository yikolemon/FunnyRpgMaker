/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800cf852 */

void FUN_1800cf852(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 8));
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}

