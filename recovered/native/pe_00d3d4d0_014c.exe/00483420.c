/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483420 */

int * __cdecl FUN_00483420(int param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  bool bVar6;
  int local_50 [13];
  int local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004a7244;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = false;
  local_1c = 0;
  FUN_0047f2d0(&local_1c,0);
  local_8 = 0;
  local_18 = DAT_0051bc68;
  if (DAT_0051b9f0 == 0) {
    FUN_0047f2d0(&local_14,0);
    if (DAT_0051b9f0 == 0) {
      DAT_0051b9f0 = DAT_0051bb28 + 1;
      DAT_0051bb28 = DAT_0051b9f0;
    }
    FUN_0047f310(&local_14);
  }
  uVar2 = DAT_0051b9f0;
  local_14 = DAT_0051b9f0 * 4;
  iVar3 = *(int *)(param_1 + 4);
  if (DAT_0051b9f0 < *(uint *)(iVar3 + 0xc)) {
    piVar4 = *(int **)(local_14 + *(int *)(iVar3 + 8));
    if (piVar4 != (int *)0x0) goto LAB_00483578;
  }
  else {
    piVar4 = (int *)0x0;
  }
  if (*(char *)(iVar3 + 0x14) == '\0') {
LAB_004834dd:
    if (piVar4 != (int *)0x0) goto LAB_00483578;
  }
  else {
    iVar3 = FUN_0047f750();
    if (uVar2 < *(uint *)(iVar3 + 0xc)) {
      piVar4 = *(int **)(local_14 + *(int *)(iVar3 + 8));
      goto LAB_004834dd;
    }
  }
  piVar4 = local_18;
  if (local_18 == (int *)0x0) {
    piVar4 = (int *)FUN_0047f230(8);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_18 = piVar4;
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      if (iVar3 == 0) {
        pcVar5 = "";
      }
      else {
        pcVar5 = *(char **)(iVar3 + 0x18);
        if (pcVar5 == (char *)0x0) {
          pcVar5 = (char *)(iVar3 + 0x1c);
        }
      }
      FUN_00405592(local_50,pcVar5);
      bVar6 = true;
      piVar4[1] = 0;
      *piVar4 = (int)std::codecvt<char,char,_Mbstatet>::vftable;
    }
    if (bVar6) {
      FUN_004057fe(local_50);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    local_18 = piVar4;
    FUN_0047f3b0(piVar4);
    pcVar1 = *(code **)(*piVar4 + 4);
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pcVar1)();
    DAT_0051bc68 = piVar4;
  }
LAB_00483578:
  FUN_0047f310(&local_1c);
  ExceptionList = local_10;
  return piVar4;
}

