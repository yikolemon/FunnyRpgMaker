/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10178c4e */

void __fastcall FUN_10178c4e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(short *)(param_1 + iVar1 * 2) =
         *(short *)(param_1 + iVar1 * 2) * *(short *)(param_2 + iVar1 * 2);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  return;
}

