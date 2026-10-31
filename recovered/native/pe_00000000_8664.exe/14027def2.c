/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027def2 */

void FUN_14027def2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  thunk_FUN_1404a2310(param_2,0x50);
  return;
}

