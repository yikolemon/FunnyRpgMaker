/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011acbe */

undefined8 FUN_14011acbe(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    FUN_14011ace8(param_1);
  }
  else {
    FUN_14011b0fc(param_1);
  }
  return param_1;
}

