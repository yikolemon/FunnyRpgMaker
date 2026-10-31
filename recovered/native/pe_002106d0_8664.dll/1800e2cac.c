/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e2cac */

void Unwind_1800e2cac(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_2 + 0x139) == '\x01') &&
     (plVar1 = *(longlong **)(param_2 + 0x98), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x60));
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  return;
}

