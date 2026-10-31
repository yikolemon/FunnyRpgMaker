/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142d5b */

int __fastcall FUN_10142d5b(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  do {
    iVar1 = FUN_101518f3();
    if (iVar3 <= iVar1) break;
    iVar2 = FUN_10152657();
  } while (iVar2 == 0);
  if (iVar1 < iVar3) {
    iVar3 = iVar1;
  }
  return iVar3;
}

