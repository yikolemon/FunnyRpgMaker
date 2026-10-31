/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00430ba5 */

void __fastcall FUN_00430ba5(int param_1,int param_2)

{
  *(int *)(param_1 + 0xac4) = param_2;
  *(undefined4 *)(param_1 + 0xabc) = *(undefined4 *)(param_2 + 0x1c);
  return;
}

