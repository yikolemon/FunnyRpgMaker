/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c67af */

void FUN_1401c67af(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_140193160(*(undefined8 *)(param_2 + 0x40));
  return;
}

