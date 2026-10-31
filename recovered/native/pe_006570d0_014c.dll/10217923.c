/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10217923 */

void __fastcall FUN_10217923(int param_1)

{
  if (*(char *)(param_1 + 0x358) != '\0') {
    if (*(int *)(param_1 + 0x344) != 0) {
      FUN_101c4c3e(*(undefined4 *)(param_1 + 0x68),(int *)(param_1 + 0x344));
    }
    *(undefined4 *)(param_1 + 0x348) = 0;
    *(undefined4 *)(param_1 + 0x34c) = 0;
    *(undefined4 *)(param_1 + 0x350) = 0;
  }
  return;
}

