/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046542a */

void __fastcall FUN_0046542a(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == *(int *)((int)&DAT_004f60fc + iVar1)) {
      *(undefined4 *)(param_2 + iVar1) = 2;
      return;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x28);
  return;
}

