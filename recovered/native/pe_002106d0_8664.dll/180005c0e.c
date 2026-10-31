/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180005c0e */

void FUN_180005c0e(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    lVar1 = *(longlong *)(param_1 + 0x20);
    FUN_180005c88(lVar1,*(undefined8 *)(lVar1 + 0x10),param_1 + 0x28);
    *(longlong *)(param_1 + 0x20) = lVar1;
  }
  return;
}

