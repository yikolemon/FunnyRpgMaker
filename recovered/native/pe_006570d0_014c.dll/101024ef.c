/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101024ef */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101024ef(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x408) = 1;
  uVar1 = FUN_100fa683((int)((float)*(int *)(*(int *)(param_1 + 0x2e8) + 0xc) * _DAT_102b8ba0),
                       *(undefined4 *)(*(int *)(param_1 + 0x2e8) + 0x10));
  *(undefined4 *)(param_1 + 0x400) = uVar1;
  uVar1 = FUN_100fa683((int)((float)*(int *)(*(int *)(param_1 + 0x2e8) + 0x18) * _DAT_102b8ba0),
                       *(undefined4 *)(*(int *)(param_1 + 0x2e8) + 0x1c));
  *(undefined4 *)(param_1 + 0x404) = uVar1;
  if (*(int *)(param_1 + 0x140) != 0) {
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
    FUN_100fa2cb(*(int *)(param_1 + 0x140));
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  FUN_10187576();
  if (*(int *)(param_1 + 0x1e0) != 0) {
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    FUN_100fa2cb(*(int *)(param_1 + 0x1e0));
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*(int *)(param_1 + 0x22c) != 0) {
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
    FUN_100fa2cb(*(int *)(param_1 + 0x22c));
    *(undefined4 *)(param_1 + 0x22c) = 0;
  }
  if (*(int *)(param_1 + 0x238) != 0) {
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x230) = 0;
    FUN_100fa2cb(*(int *)(param_1 + 0x238));
    *(undefined4 *)(param_1 + 0x238) = 0;
  }
  return;
}

