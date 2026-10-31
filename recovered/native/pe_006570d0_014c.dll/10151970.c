/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151970 */

int __fastcall FUN_10151970(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(*param_1 + 0x79) == '\x01') {
    iVar1 = FUN_10142d5b();
    return iVar1;
  }
  iVar2 = FUN_101518f3();
  iVar1 = param_1[4];
  while (iVar2 < iVar1) {
    iVar3 = FUN_101520da();
    if (iVar3 != 0) break;
    iVar2 = FUN_101518f3();
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  return iVar1;
}

