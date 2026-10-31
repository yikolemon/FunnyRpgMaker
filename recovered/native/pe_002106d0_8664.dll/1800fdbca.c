/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fdbca */

void FUN_1800fdbca(longlong param_1,undefined8 param_2,char param_3)

{
  if (*(char *)(param_1 + 0xbe5) != '\x01') {
    return;
  }
  if (param_3 == '\0') {
    FUN_1800fd924();
    return;
  }
  FUN_1800fd924();
  return;
}

