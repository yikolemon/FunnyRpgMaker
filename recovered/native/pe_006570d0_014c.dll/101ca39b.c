/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ca39b */

undefined4 FUN_101ca39b(undefined4 param_1,int param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    FUN_101ca3c0(param_1);
  }
  else {
    FUN_101ca76c(param_1);
  }
  return param_1;
}

