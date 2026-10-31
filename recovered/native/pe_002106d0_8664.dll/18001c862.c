/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001c862 */

void FUN_18001c862(longlong param_1)

{
  if (*(int *)(param_1 + 0x20) < 1) {
    if ((*(int *)(param_1 + 0x20) < 0) && (*(longlong *)(param_1 + 0x18) != 0)) {
      thunk_FUN_1802464a0(*(longlong *)(param_1 + 0x18));
    }
  }
  else {
    thunk_FUN_180290e40(*(undefined8 *)(param_1 + 0x18));
  }
  thunk_FUN_180290e40(*(undefined8 *)(param_1 + 0x28));
  return;
}

