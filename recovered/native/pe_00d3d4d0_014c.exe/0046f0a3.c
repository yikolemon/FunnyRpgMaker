/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046f0a3 */

void __fastcall FUN_0046f0a3(int param_1)

{
  if (*(char *)(param_1 + 0x358) != '\0') {
    if (*(int *)(param_1 + 0x344) != 0) {
      FUN_00420cb6(*(int *)(param_1 + 0x68),(int *)(param_1 + 0x344));
    }
    *(undefined4 *)(param_1 + 0x348) = 0;
    *(undefined4 *)(param_1 + 0x34c) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  return;
}

