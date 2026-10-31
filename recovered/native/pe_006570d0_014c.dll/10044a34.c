/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10044a34 */

void __fastcall FUN_10044a34(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0x100) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = *(int *)(param_1 + 0x10);
    FUN_10044a66(*(undefined4 *)(iVar1 + 0x10),param_1 + 0x14,0x100);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  return;
}

