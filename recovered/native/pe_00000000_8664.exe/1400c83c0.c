/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c83c0 */

void FUN_1400c83c0(longlong *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined *puVar6;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = FUN_140081259();
  if (iVar1 < iVar3 + -2) {
    uVar4 = FUN_14007a629(1);
    FUN_14007a7b5(0,uVar4);
    pcVar5 = " *Inactive*";
  }
  else {
    pcVar5 = "";
  }
  if (*param_1 == 0) {
    puVar6 = &DAT_140ecd5d9;
  }
  else {
    puVar6 = *(undefined **)(*param_1 + 8);
  }
  cVar2 = FUN_1400c50f1((int)param_1[1],"MultiSelect 0x%08X in \'%s\'%s",(int)param_1[1],puVar6,
                        pcVar5);
  if (iVar1 < iVar3 + -2) {
    FUN_14007a8e1(1);
  }
  if (cVar2 != '\0') {
    FUN_1400abfd5("RangeSrcItem = %lld (0x%llX), RangeSelected = %d",param_1[3],param_1[3],
                  (int)*(char *)((longlong)param_1 + 0x14));
    FUN_1400abfd5("NavIdItem = %lld (0x%llX), NavIdSelected = %d",param_1[4],param_1[4],
                  (int)*(char *)((longlong)param_1 + 0x15));
    FUN_1400abfd5("LastSelectionSize = %d",(int)param_1[2]);
    FUN_1400c66d9();
    return;
  }
  return;
}

