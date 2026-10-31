/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018e6b7 */

void FUN_1018e6b7(undefined4 param_1,int param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_100fa2cb(*(undefined4 *)(param_2 + 0x28));
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*(int *)(param_2 + 0x40) != 0) {
    FUN_100fa2cb(*(int *)(param_2 + 0x40));
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  return;
}

