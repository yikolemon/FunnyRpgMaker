/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000577c */

void Unwind_14000577c(undefined8 param_1,longlong param_2)

{
  LPVOID pvVar1;
  
  pvVar1 = *(LPVOID *)(*(longlong *)(param_2 + 0x28) + 8);
  if (pvVar1 != (LPVOID)0x0) {
    thunk_FUN_1400a1290(pvVar1);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8) = 0;
  return;
}

