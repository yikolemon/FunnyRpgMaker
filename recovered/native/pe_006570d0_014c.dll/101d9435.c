/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d9435 */

void __fastcall FUN_101d9435(int param_1,int param_2)

{
  *(int *)(param_1 + 0xac4) = param_2;
  *(undefined4 *)(param_1 + 0xabc) = *(undefined4 *)(param_2 + 0x1c);
  return;
}

