/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00480f90 */

int * __cdecl FUN_00480f90(int param_1)

{
  undefined8 uVar1;
  UINT UVar2;
  code *pcVar3;
  UINT UVar4;
  UINT UVar5;
  UINT UVar6;
  UINT UVar7;
  UINT UVar8;
  UINT UVar9;
  UINT UVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  char *pcVar14;
  UINT *pUVar15;
  int local_80 [13];
  UINT local_4c [11];
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004a70d4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  FUN_0047f2d0(&local_20,0);
  local_8 = 0;
  local_1c = DAT_0051bbc0;
  if (DAT_0051bb34 == 0) {
    FUN_0047f2d0(&local_14,0);
    if (DAT_0051bb34 == 0) {
      DAT_0051bb28 = DAT_0051bb28 + 1;
      DAT_0051bb34 = DAT_0051bb28;
    }
    FUN_0047f310(&local_14);
  }
  uVar11 = DAT_0051bb34;
  local_14 = DAT_0051bb34 * 4;
  iVar12 = *(int *)(param_1 + 4);
  if (DAT_0051bb34 < *(uint *)(iVar12 + 0xc)) {
    piVar13 = *(int **)(local_14 + *(int *)(iVar12 + 8));
    if (piVar13 != (int *)0x0) goto LAB_0048111c;
  }
  else {
    piVar13 = (int *)0x0;
  }
  if (*(char *)(iVar12 + 0x14) == '\0') {
LAB_00481053:
    if (piVar13 != (int *)0x0) goto LAB_0048111c;
  }
  else {
    iVar12 = FUN_0047f750();
    if (uVar11 < *(uint *)(iVar12 + 0xc)) {
      piVar13 = *(int **)(local_14 + *(int *)(iVar12 + 8));
      goto LAB_00481053;
    }
  }
  piVar13 = local_1c;
  if (local_1c == (int *)0x0) {
    piVar13 = (int *)FUN_0047f230(0x34);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = piVar13;
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      iVar12 = *(int *)(param_1 + 4);
      if (iVar12 == 0) {
        pcVar14 = "";
      }
      else {
        pcVar14 = *(char **)(iVar12 + 0x18);
        if (pcVar14 == (char *)0x0) {
          pcVar14 = (char *)(iVar12 + 0x1c);
        }
      }
      FUN_00405592(local_80,pcVar14);
      local_18 = 1;
      piVar13[1] = 0;
      *piVar13 = (int)std::codecvt<wchar_t,char,_Mbstatet>::vftable;
      pUVar15 = FUN_00481340(local_4c);
      UVar4 = pUVar15[1];
      UVar5 = pUVar15[2];
      UVar6 = pUVar15[3];
      UVar7 = pUVar15[4];
      UVar8 = pUVar15[5];
      UVar9 = pUVar15[6];
      UVar10 = pUVar15[7];
      uVar1 = *(undefined8 *)(pUVar15 + 8);
      UVar2 = pUVar15[10];
      piVar13[2] = *pUVar15;
      piVar13[3] = UVar4;
      piVar13[4] = UVar5;
      piVar13[5] = UVar6;
      piVar13[6] = UVar7;
      piVar13[7] = UVar8;
      piVar13[8] = UVar9;
      piVar13[9] = UVar10;
      *(undefined8 *)(piVar13 + 10) = uVar1;
      piVar13[0xc] = UVar2;
    }
    if ((local_18 & 1) != 0) {
      FUN_004057fe(local_80);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    local_1c = piVar13;
    FUN_0047f3b0(piVar13);
    pcVar3 = *(code **)(*piVar13 + 4);
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pcVar3)();
    DAT_0051bbc0 = piVar13;
  }
LAB_0048111c:
  FUN_0047f310(&local_20);
  ExceptionList = local_10;
  return piVar13;
}

