/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004588a */

void FUN_14004588a(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x48) = 0;
  }
  thunk_FUN_14018e090(param_2,0x50);
  return;
}

