/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fc557 */

void __fastcall FUN_101fc557(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 0x1c);
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_101c0017(uVar1,*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}

