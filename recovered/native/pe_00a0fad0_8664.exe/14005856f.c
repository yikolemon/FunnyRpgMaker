/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005856f */

void Unwind_14005856f(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_14005893a(lVar2);
  }
  return;
}

