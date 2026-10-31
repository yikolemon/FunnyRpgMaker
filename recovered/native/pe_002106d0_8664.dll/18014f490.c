/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014f490 */

void FUN_18014f490(longlong *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = FUN_180107f41();
  if (iVar1 < iVar3 + -2) {
    uVar4 = FUN_18010136d(1);
    FUN_1801014f9(0,uVar4);
    pcVar5 = " *Inactive*";
  }
  else {
    pcVar5 = "";
  }
  if (*param_1 == 0) {
    puVar6 = &DAT_18036cf1c;
  }
  else {
    puVar6 = *(undefined **)(*param_1 + 8);
  }
  cVar2 = FUN_18014c1c1((int)param_1[1],"MultiSelect 0x%08X in \'%s\'%s",(int)param_1[1],puVar6,
                        pcVar5);
  if (iVar1 < iVar3 + -2) {
    FUN_180101625(1);
  }
  if (cVar2 != '\0') {
    FUN_1801330a5("RangeSrcItem = %lld (0x%llX), RangeSelected = %d",param_1[3],param_1[3],
                  (int)*(char *)((longlong)param_1 + 0x14));
    FUN_1801330a5("NavIdItem = %lld (0x%llX), NavIdSelected = %d",param_1[4],param_1[4],
                  (int)*(char *)((longlong)param_1 + 0x15));
    FUN_1801330a5("LastSelectionSize = %d",(int)param_1[2]);
    FUN_18014d7a9();
    return;
  }
  return;
}

