/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008eca2 */

void Unwind_14008eca2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x20);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

