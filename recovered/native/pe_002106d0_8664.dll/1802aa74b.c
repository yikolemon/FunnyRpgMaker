/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802aa74b */

void FUN_1802aa74b(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    __acrt_stdio_free_stream(*(undefined8 *)(param_2 + 0x40));
  }
  FUN_18027240c(*(undefined8 *)(param_2 + 0x40));
  return;
}

