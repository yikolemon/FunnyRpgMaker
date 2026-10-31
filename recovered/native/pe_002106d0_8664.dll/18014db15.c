/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014db15 */

void FUN_18014db15(longlong param_1)

{
  FUN_1801330a5("SearchBuffer = \"%s\"",param_1 + 0x18);
  FUN_1801330a5("SingleCharMode = %d, Size = %d, Lock = %d",*(undefined1 *)(param_1 + 0x11),
                (int)*(char *)(param_1 + 0x12),*(undefined1 *)(param_1 + 100));
  FUN_1801330a5("LastRequest = time: %.2f, frame: %d",(double)*(float *)(param_1 + 0x60),
                *(undefined4 *)(param_1 + 0x5c));
  return;
}

