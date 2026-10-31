/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180043f86 */

void Unwind_180043f86(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_2 + 0x40);
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 8) = plVar2;
  return;
}

