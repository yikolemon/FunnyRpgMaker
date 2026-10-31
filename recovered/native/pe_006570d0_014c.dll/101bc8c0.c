/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bc8c0 */

void __fastcall FUN_101bc8c0(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_100fa2cb(*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  FUN_1014b0b0();
  return;
}

