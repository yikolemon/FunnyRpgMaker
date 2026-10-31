/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10232b10 */

void __fastcall FUN_10232b10(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    thunk_FUN_10274120(*(undefined4 *)(iVar1 + 8));
    thunk_FUN_10274120(*(undefined4 *)(iVar1 + 0x10));
    thunk_FUN_10274120(*(undefined4 *)(iVar1 + 0x14));
  }
  return;
}

