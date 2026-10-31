/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0045006b */

void __fastcall FUN_0045006b(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_0044f537((int *)(param_2 + 0x25c));
    FUN_0041c607(param_1,*(int *)(param_2 + 0x280));
    *(undefined4 *)(param_2 + 0x280) = 0;
    FUN_0041c607(param_1,*(int *)(param_2 + 0x238));
    *(undefined4 *)(param_2 + 0x238) = 0;
    FUN_0041c607(param_1,*(int *)(param_2 + 0x240));
    *(undefined4 *)(param_2 + 0x240) = 0;
    FUN_0041c607(param_1,*(int *)(param_2 + 0x24c));
    *(undefined4 *)(param_2 + 0x24c) = 0;
  }
  return;
}

