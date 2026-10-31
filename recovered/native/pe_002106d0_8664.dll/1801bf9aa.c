/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bf9aa */

void Unwind_1801bf9aa(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x30); lVar1 != 0; lVar1 = lVar1 + -0x10) {
    if (*(longlong *)(*(longlong *)(param_2 + 0x28) + -8 + lVar1) != 0) {
      FUN_1800fe8d4();
    }
  }
  return;
}

