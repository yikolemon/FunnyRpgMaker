/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180050130 */

void FUN_180050130(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1800137c6(param_1 + 0xb8);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_18001cd6c(param_1 + 0x40);
  FUN_18001cd6c(param_1 + 0x20);
  FUN_180004cea(param_1 + 8);
  return;
}

