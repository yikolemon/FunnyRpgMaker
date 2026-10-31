/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101496d1 */

void FUN_101496d1(int param_1)

{
  FUN_1012d08c();
  FUN_1012d08c("SingleCharMode = %d, Size = %d, Lock = %d",*(undefined1 *)(param_1 + 0xd),
               (int)*(char *)(param_1 + 0xe),*(undefined1 *)(param_1 + 0x5c));
  FUN_1012d08c("LastRequest = time: %.2f, frame: %d",(double)*(float *)(param_1 + 0x58),
               *(undefined4 *)(param_1 + 0x54));
  return;
}

