/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111269 */

void __fastcall FUN_10111269(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x208;
  if ((*(byte *)(param_1 + 0x409) & 1) == 0) {
    iVar1 = param_2;
  }
  FUN_101031b0(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(DAT_1039d74c + 0x1e40),
               *(undefined4 *)(param_1 + 0x1fc + (*(byte *)(param_1 + 0x409) & 1) * 8),iVar1);
  return;
}

