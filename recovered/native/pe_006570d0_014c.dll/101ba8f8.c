/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ba8f8 */

byte __thiscall FUN_101ba8f8(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  FUN_10165364(0,0);
  FUN_101657a1();
  iVar1 = *(int *)(param_1 + 0x110);
  uVar5 = 0x1210c0;
  if (*(int *)(param_2 + 0x24) == 0) {
    uVar5 = 0x1213c8;
  }
  if (*(char *)(param_2 + 0x35) == '\0') {
    iVar4 = FUN_100fcb2d();
    FUN_100fcd80(0,iVar4 + 0x150);
  }
  FUN_101494d3(*(undefined4 *)(param_2 + 0x1c));
  bVar2 = FUN_10148c23(*(undefined4 *)(param_2 + 0x1c),uVar5 | param_2 == iVar1,"%s",param_2);
  iVar1 = *(int *)(param_2 + 0x24);
  if (*(char *)(param_2 + 0x35) == '\0') {
    FUN_100fce8e(1);
  }
  cVar3 = FUN_10102c44();
  if (cVar3 != '\0') {
    *(int *)(param_1 + 0x110) = param_2;
  }
  return bVar2 & iVar1 != 0;
}

