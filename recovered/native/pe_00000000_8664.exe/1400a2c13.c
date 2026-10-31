/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a2c13 */

void FUN_1400a2c13(undefined4 *param_1)

{
  if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
    FUN_14008f898(1);
  }
  FUN_1400abfd5("0x%08X \"%s\" Pos (%d,%d) Size (%d,%d) Collapsed=%d",*param_1,param_1 + 9,
                (int)*(short *)(param_1 + 1),(int)*(short *)((longlong)param_1 + 6),
                (int)*(short *)(param_1 + 2),(int)*(short *)((longlong)param_1 + 10),
                *(undefined1 *)((longlong)param_1 + 0x1e));
  if (*(char *)((longlong)param_1 + 0x21) == '\x01') {
    FUN_14008f98e();
    return;
  }
  return;
}

