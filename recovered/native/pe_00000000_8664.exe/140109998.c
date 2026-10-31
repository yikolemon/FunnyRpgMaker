/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140109998 */

byte FUN_140109998(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_14011264b(0,0);
  FUN_140112b04();
  lVar2 = *(longlong *)(param_1 + 0x118);
  uVar6 = 0x1210c0;
  if (*(int *)(param_2 + 0x28) == 0) {
    uVar6 = 0x1213c8;
  }
  if (*(char *)(param_2 + 0x3d) == '\0') {
    lVar5 = FUN_14007a54a();
    FUN_14007a7b5(0,lVar5 + 0x150);
  }
  FUN_1400c6821(*(undefined4 *)(param_2 + 0x1c));
  bVar3 = FUN_1400c5f8e((longlong)*(int *)(param_2 + 0x1c),uVar6 | param_2 == lVar2,"%s",param_2);
  iVar1 = *(int *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x3d) == '\0') {
    FUN_14007a8e1(1);
  }
  cVar4 = FUN_140080ad1();
  if (cVar4 != '\0') {
    *(longlong *)(param_1 + 0x118) = param_2;
  }
  return bVar3 & iVar1 != 0;
}

