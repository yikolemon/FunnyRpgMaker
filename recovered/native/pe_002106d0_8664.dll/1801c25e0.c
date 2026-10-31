/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c25e0 */

void FUN_1801c25e0(longlong param_1)

{
  longlong lVar1;
  
  if (0 < *(int *)(param_1 + 0x100)) {
    lVar1 = 0;
    do {
      FUN_1800fe8d4(*(undefined8 *)(*(longlong *)(param_1 + 0x108) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x100));
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_1800fe8d4();
    *(undefined8 *)(param_1 + 0x108) = 0;
  }
  return;
}

