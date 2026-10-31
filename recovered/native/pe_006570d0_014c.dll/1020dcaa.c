/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020dcaa */

void __fastcall FUN_1020dcaa(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == *(int *)((int)&DAT_10321b5c + iVar1)) {
      *(undefined4 *)(param_2 + iVar1) = 2;
      return;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x28);
  return;
}

