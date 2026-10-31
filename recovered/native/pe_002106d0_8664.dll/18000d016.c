/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000d016 */

void FUN_18000d016(longlong param_1)

{
  FUN_18023cdb0(param_1);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_180290e40();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_18023d290(param_1);
  return;
}

