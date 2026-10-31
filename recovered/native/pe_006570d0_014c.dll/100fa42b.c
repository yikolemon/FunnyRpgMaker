/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa42b */

void FUN_100fa42b(int param_1)

{
  char cVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  for (iVar3 = 0; (cVar1 = *(char *)(param_1 + iVar3), cVar1 == '\t' || (cVar1 == ' '));
      iVar3 = iVar3 + 1) {
    iVar7 = iVar7 + -1;
  }
  uVar4 = param_1 - iVar7;
  uVar6 = uVar4;
  if (cVar1 != '\0') {
    sVar2 = _strlen((char *)(uVar4 + 1));
    uVar5 = uVar4 + sVar2 + 1;
    uVar6 = uVar5;
    for (; (uVar4 < uVar5 &&
           ((*(char *)(uVar5 - 1) == ' ' || (uVar6 = uVar5, *(char *)(uVar5 - 1) == '\t'))));
        uVar5 = uVar5 - 1) {
      uVar6 = uVar4;
    }
  }
  if (iVar7 != 0) {
    FUN_1025b2d0(param_1,iVar3 + param_1,(uVar6 - param_1) + iVar7);
  }
  *(undefined1 *)(uVar6 + iVar7) = 0;
  return;
}

