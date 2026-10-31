/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006ca22 */

void FUN_18006ca22(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  thunk_FUN_1802464a0(param_2,0x50);
  return;
}

