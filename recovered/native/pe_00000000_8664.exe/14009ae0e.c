/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009ae0e */

void FUN_14009ae0e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (((lVar1 != 0) && (lVar1 != param_2)) && (*(longlong *)(lVar1 + 0x4c8) == param_1)) {
    *(undefined8 *)(lVar1 + 0x4c8) = 0;
  }
  *(longlong *)(param_2 + 0x4c8) = param_1;
  *(longlong *)(param_1 + 0x90) = param_2;
  return;
}

