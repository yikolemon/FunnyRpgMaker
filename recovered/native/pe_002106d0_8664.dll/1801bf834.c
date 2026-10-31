/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bf834 */

void FUN_1801bf834(longlong param_1)

{
  longlong lVar1;
  undefined8 local_28;
  
  local_28 = 0;
  do {
    if (*(longlong *)(param_1 + 0x78 + local_28) != 0) {
      FUN_1800fe8d4();
    }
    local_28 = local_28 + -0x30;
  } while (local_28 != -0x60);
  lVar1 = 0x10;
  do {
    if (*(longlong *)(param_1 + 8 + lVar1) != 0) {
      FUN_1800fe8d4();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x10);
  return;
}

