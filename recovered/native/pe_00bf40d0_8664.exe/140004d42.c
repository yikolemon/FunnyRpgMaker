/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140004d42 */

undefined8 * FUN_140004d42(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(int *)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4) + 0x10) == 0) {
    plVar1 = *(longlong **)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4) + 0x50);
    uVar2 = 1;
    if ((plVar1 != (longlong *)0x0) && (plVar1 != param_2)) {
      FUN_140004fde(plVar1);
      *(bool *)(param_1 + 1) =
           *(int *)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4) + 0x10) == 0;
      return param_1;
    }
  }
  else {
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  return param_1;
}

