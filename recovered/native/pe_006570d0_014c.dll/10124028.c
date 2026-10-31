/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10124028 */

void FUN_10124028(undefined4 *param_1)

{
  if (*(char *)((int)param_1 + 0x21) == '\x01') {
    FUN_10111871(1);
  }
  FUN_1012d08c("0x%08X \"%s\" Pos (%d,%d) Size (%d,%d) Collapsed=%d",*param_1,param_1 + 9,
               (int)*(short *)(param_1 + 1),(int)*(short *)((int)param_1 + 6),
               (int)*(short *)(param_1 + 2),(int)*(short *)((int)param_1 + 10),
               *(undefined1 *)((int)param_1 + 0x1e));
  if (*(char *)((int)param_1 + 0x21) == '\x01') {
    FUN_10111961();
    return;
  }
  return;
}

