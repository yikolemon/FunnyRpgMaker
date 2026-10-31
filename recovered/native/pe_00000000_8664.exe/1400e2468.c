/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2468 */

void FUN_1400e2468(longlong param_1,longlong param_2,longlong param_3)

{
  if (*(char *)(param_3 + 0x35) == '\0') {
    FUN_1400e38fe(param_2);
    *(longlong *)(param_2 + 8) = param_1;
  }
  *(undefined1 *)(param_1 + 0x52) = 0;
  FUN_1400e392b();
  return;
}

