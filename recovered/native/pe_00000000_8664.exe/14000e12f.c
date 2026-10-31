/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000e12f */

void Unwind_14000e12f(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_140004b06(lVar2);
  }
  return;
}

