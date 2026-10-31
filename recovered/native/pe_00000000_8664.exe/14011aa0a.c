/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011aa0a */

void Unwind_14011aa0a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  plVar2 = *(longlong **)(param_2 + 0x48);
  *plVar2 = lVar1;
  *(longlong **)(lVar1 + 8) = plVar2;
  return;
}

