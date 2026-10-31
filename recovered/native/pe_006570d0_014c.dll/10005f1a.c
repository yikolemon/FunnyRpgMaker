/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10005f1a */

void __fastcall FUN_10005f1a(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 8) == 0x100) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = *(int *)(param_1 + 0x10);
    FUN_10005f4c(*(undefined4 *)(iVar1 + 0x10),param_1 + 0x14,0x100);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  return;
}

