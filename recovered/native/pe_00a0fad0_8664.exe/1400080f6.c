/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400080f6 */

void FUN_1400080f6(longlong param_1)

{
  FUN_1400d3da0(param_1);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    thunk_FUN_1401212e0();
  }
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_1400d3a00(param_1);
  return;
}

