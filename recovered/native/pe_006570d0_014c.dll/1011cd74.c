/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011cd74 */

char __fastcall FUN_1011cd74(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = *(int *)(param_2 + 0x434);
  if (iVar2 == 0) {
    iVar2 = 1;
  }
  else {
    if (*(int *)(iVar2 + 0x1c) != 0) {
      return '\x01';
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    if (iVar2 < 1) {
      return '\0';
    }
  }
  iVar3 = 0;
  do {
    cVar1 = FUN_1012bd5f(param_1);
    if (cVar1 != '\0') {
      return cVar1;
    }
    bVar4 = iVar2 + -1 != iVar3;
    iVar3 = iVar3 + 1;
  } while (bVar4);
  return '\0';
}

