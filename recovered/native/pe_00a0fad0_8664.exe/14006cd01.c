/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006cd01 */

void Unwind_14006cd01(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  for (lVar2 = *(longlong *)(param_2 + 0x28); lVar2 != lVar1; lVar2 = lVar2 + 0x30) {
    FUN_1400639fd(lVar2);
  }
  return;
}

