/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c3c94 */

byte FUN_1801c3c94(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  
  FUN_18016a67b(0,0);
  FUN_18016ab34();
  lVar2 = *(longlong *)(param_1 + 0x118);
  uVar6 = 0x1210c0;
  if (*(int *)(param_2 + 0x28) == 0) {
    uVar6 = 0x1213c8;
  }
  if (*(char *)(param_2 + 0x3d) == '\0') {
    lVar5 = FUN_18010128e();
    FUN_1801014f9(0,lVar5 + 0x150);
  }
  FUN_18014d8f1(*(undefined4 *)(param_2 + 0x1c));
  bVar3 = FUN_18014d05e((longlong)*(int *)(param_2 + 0x1c),uVar6 | param_2 == lVar2,"%s",param_2);
  iVar1 = *(int *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x3d) == '\0') {
    FUN_180101625(1);
  }
  cVar4 = FUN_1801077b9();
  if (cVar4 != '\0') {
    *(longlong *)(param_1 + 0x118) = param_2;
  }
  return bVar3 & iVar1 != 0;
}

