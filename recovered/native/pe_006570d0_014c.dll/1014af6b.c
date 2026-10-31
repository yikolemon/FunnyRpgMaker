/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014af6b */

void FUN_1014af6b(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  iVar1 = param_1[2];
  iVar3 = FUN_1010335d();
  pcVar4 = "";
  if (iVar1 < iVar3 + -2) {
    uVar5 = FUN_100fcbfd(1);
    FUN_100fcd80(0,uVar5);
    pcVar4 = " *Inactive*";
  }
  if (*param_1 == 0) {
    puVar6 = &DAT_1033cdfd;
  }
  else {
    puVar6 = *(undefined **)(*param_1 + 4);
  }
  cVar2 = FUN_10147c9d(param_1[1],"MultiSelect 0x%08X in \'%s\'%s",param_1[1],puVar6,pcVar4);
  if (iVar1 < iVar3 + -2) {
    FUN_100fce8e(1);
  }
  if (cVar2 != '\0') {
    FUN_1012d08c("RangeSrcItem = %lld (0x%llX), RangeSelected = %d",param_1[6],param_1[7],param_1[6]
                 ,param_1[7],(int)(char)param_1[4]);
    FUN_1012d08c("NavIdItem = %lld (0x%llX), NavIdSelected = %d",param_1[8],param_1[9],param_1[8],
                 param_1[9],(int)*(char *)((int)param_1 + 0x11));
    FUN_1012d08c("LastSelectionSize = %d",param_1[3]);
    FUN_10149387();
    return;
  }
  return;
}

