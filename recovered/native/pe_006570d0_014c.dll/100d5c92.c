/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100d5c92 */

int __thiscall FUN_100d5c92(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x14) == '\x01') {
    FUN_10018a12();
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  FUN_100d6c1e(param_2,1);
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}

