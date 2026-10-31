/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14000c914 */

undefined8 * FUN_14000c914(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  *param_1 = param_2;
  plVar1 = *(longlong **)((longlong)param_2 + (longlong)*(int *)(*param_2 + 4) + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  uVar2 = FUN_14000ca54(*param_1,param_3);
  *(undefined1 *)(param_1 + 1) = uVar2;
  return param_1;
}

