/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140057a28 */

void Unwind_140057a28(undefined8 param_1,longlong param_2)

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

