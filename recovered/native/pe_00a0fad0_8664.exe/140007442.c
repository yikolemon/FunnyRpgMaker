/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007442 */

void Unwind_140007442(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x38) + 0x18);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

