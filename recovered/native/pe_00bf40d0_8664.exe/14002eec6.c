/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002eec6 */

void Unwind_14002eec6(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x68) + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x30));
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x98) = 0;
  }
  return;
}

