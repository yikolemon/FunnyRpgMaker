/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401056ae */

void Unwind_1401056ae(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x30); lVar1 != 0; lVar1 = lVar1 + -0x10) {
    if (*(longlong *)(*(longlong *)(param_2 + 0x28) + -8 + lVar1) != 0) {
      FUN_140077b90();
    }
  }
  return;
}

