/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007914 */

longlong FUN_140007914(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (*(longlong **)(param_1 + 8) != *(longlong **)(param_2 + 8)) {
    puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    plVar1 = *(longlong **)(param_2 + 8);
    *(longlong **)(param_1 + 8) = plVar1;
    (**(code **)(*plVar1 + 8))();
  }
  return param_1;
}

