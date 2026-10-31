/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400024a0 */

void Unwind_1400024a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x2050);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(param_2 + 0x28);
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(lVar2 + 0x2018));
    *(undefined8 *)(lVar2 + 0x2050) = 0;
  }
  return;
}

