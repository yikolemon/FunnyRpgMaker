/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180129ce3 */

void FUN_180129ce3(undefined4 *param_1)

{
  if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
    FUN_180116580(1);
  }
  FUN_1801330a5("0x%08X \"%s\" Pos (%d,%d) Size (%d,%d) Collapsed=%d",*param_1,param_1 + 9,
                (int)*(short *)(param_1 + 1),(int)*(short *)((longlong)param_1 + 6),
                (int)*(short *)(param_1 + 2),(int)*(short *)((longlong)param_1 + 10),
                *(undefined1 *)((longlong)param_1 + 0x1e));
  if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
    FUN_180116676();
    return;
  }
  return;
}

