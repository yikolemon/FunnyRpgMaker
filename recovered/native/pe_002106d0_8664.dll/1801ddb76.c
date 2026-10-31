/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ddb76 */

void Unwind_1801ddb76(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x48) + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x28));
    *(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x98) = 0;
  }
  return;
}

