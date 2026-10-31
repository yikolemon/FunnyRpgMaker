/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018df3a */

void __fastcall FUN_1018df3a(undefined1 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    uVar1 = FUN_100fa1fa(0);
    if (*(int *)(param_1 + 0x18) != 0) {
      FUN_1025b2d0(uVar1,*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x10) << 2);
      FUN_100fa2cb(*(undefined4 *)(param_1 + 0x18));
    }
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}

