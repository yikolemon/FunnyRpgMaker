/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001beaa */

void Unwind_14001beaa(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x3d0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x398));
    *(undefined8 *)(param_2 + 0x3d0) = 0;
  }
  return;
}

