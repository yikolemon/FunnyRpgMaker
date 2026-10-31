/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140137de8 */

void FUN_140137de8(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_14010b338(*(undefined8 *)(param_2 + 0x40));
  return;
}

