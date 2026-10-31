/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002ef0a */

void Unwind_14002ef0a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x68) + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != *(longlong **)(param_2 + 0x28));
    *(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x58) = 0;
  }
  return;
}

