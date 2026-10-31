/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077ced */

void FUN_140077ced(longlong param_1)

{
  char cVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar4 = 0;
  lVar3 = 0;
  while( true ) {
    cVar1 = *(char *)(param_1 + lVar4);
    if ((cVar1 != '\t') && (cVar1 != ' ')) break;
    lVar3 = lVar3 + -1;
    lVar4 = lVar4 + 1;
  }
  if (cVar1 == '\0') {
    uVar5 = param_1 - lVar3;
  }
  else {
    uVar6 = param_1 - lVar3;
    sVar2 = strlen((char *)(uVar6 + 1));
    for (uVar5 = uVar6 + sVar2 + 1;
        (uVar6 < uVar5 && ((*(char *)(uVar5 - 1) == ' ' || (*(char *)(uVar5 - 1) == '\t'))));
        uVar5 = uVar5 - 1) {
    }
  }
  if (lVar3 != 0) {
    FUN_1401c5180(param_1,lVar4 + param_1,(uVar5 - param_1) + lVar3);
  }
  *(undefined1 *)(uVar5 + lVar3) = 0;
  return;
}

