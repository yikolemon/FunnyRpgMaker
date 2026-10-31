/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d3f8a */

undefined8 FUN_1801d3f8a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    FUN_1801d3fb4(param_1);
  }
  else {
    FUN_1801d43c8(param_1);
  }
  return param_1;
}

