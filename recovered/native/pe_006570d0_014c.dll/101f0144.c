/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f0144 */

void __fastcall FUN_101f0144(undefined4 param_1,int param_2)

{
  FUN_101c0017(param_1,*(undefined4 *)(param_2 + 0x24));
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_101c0017(param_1,*(undefined4 *)(param_2 + 0x1c));
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  FUN_101c0017(param_1,param_2);
  return;
}

