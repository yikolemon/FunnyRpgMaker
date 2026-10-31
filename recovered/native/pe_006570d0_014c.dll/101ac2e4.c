/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ac2e4 */

void __fastcall FUN_101ac2e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      FUN_101ac2e4();
      iVar2 = iVar2 + 4;
    } while (iVar1 << 2 != iVar2);
  }
  FUN_101ac316(param_1);
  return;
}

