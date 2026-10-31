/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f88f3 */

void __fastcall FUN_101f88f3(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_101f7dbf();
    FUN_101c0017(param_1,*(undefined4 *)(param_2 + 0x280));
    *(undefined4 *)(param_2 + 0x280) = 0;
    FUN_101c0017(param_1,*(undefined4 *)(param_2 + 0x238));
    *(undefined4 *)(param_2 + 0x238) = 0;
    FUN_101c0017(param_1,*(undefined4 *)(param_2 + 0x240));
    *(undefined4 *)(param_2 + 0x240) = 0;
    FUN_101c0017(param_1,*(undefined4 *)(param_2 + 0x24c));
    *(undefined4 *)(param_2 + 0x24c) = 0;
  }
  return;
}

