/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001bf02 */

void Unwind_18001bf02(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x18);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return;
}

