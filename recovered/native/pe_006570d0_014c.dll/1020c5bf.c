/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020c5bf */

void __fastcall FUN_1020c5bf(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == *(int *)(param_1 + 0xc)) {
    cVar1 = FUN_1020c51f();
    if (cVar1 == '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x10);
  }
  FUN_1025b2d0(iVar2 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x18),param_2,
               *(int *)(param_1 + 8));
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

