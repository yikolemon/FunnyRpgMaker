/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400016ba */

void Unwind_1400016ba(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x138);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x178));
    *(undefined8 *)(param_2 + 0x1b0) = 0;
  }
  return;
}

