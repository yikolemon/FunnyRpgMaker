/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10234710 */

int * FUN_10234710(int param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined1 *puVar14;
  int *piVar15;
  undefined1 local_4c [48];
  int *local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_10288e04;
  local_10 = ExceptionList;
  uVar11 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0;
  FUN_1022bea0(0);
  local_8 = 0;
  local_1c = DAT_1039d740;
  if (DAT_1039ccfc == 0) {
    FUN_1022bea0(0);
    if (DAT_1039ccfc == 0) {
      DAT_1039ccf0 = DAT_1039ccf0 + 1;
      DAT_1039ccfc = DAT_1039ccf0;
    }
    FUN_1022bee0(uVar11);
  }
  uVar10 = DAT_1039ccfc;
  local_14 = DAT_1039ccfc * 4;
  iVar12 = *(int *)(param_1 + 4);
  if (DAT_1039ccfc < *(uint *)(iVar12 + 0xc)) {
    piVar13 = *(int **)(local_14 + *(int *)(iVar12 + 8));
    if (piVar13 != (int *)0x0) goto LAB_1023489c;
  }
  else {
    piVar13 = (int *)0x0;
  }
  if (*(char *)(iVar12 + 0x14) == '\0') {
LAB_102347d3:
    if (piVar13 != (int *)0x0) goto LAB_1023489c;
  }
  else {
    iVar12 = FUN_1022bde0();
    if (uVar10 < *(uint *)(iVar12 + 0xc)) {
      piVar13 = *(int **)(local_14 + *(int *)(iVar12 + 8));
      goto LAB_102347d3;
    }
  }
  piVar13 = local_1c;
  if (local_1c == (int *)0x0) {
    piVar13 = (int *)FUN_10228350(0x34);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = piVar13;
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      iVar12 = *(int *)(param_1 + 4);
      if (iVar12 == 0) {
        puVar14 = &DAT_10356101;
      }
      else {
        puVar14 = *(undefined1 **)(iVar12 + 0x18);
        if (puVar14 == (undefined1 *)0x0) {
          puVar14 = (undefined1 *)(iVar12 + 0x1c);
        }
      }
      FUN_1000daa4(puVar14);
      local_18 = 1;
      piVar13[1] = 0;
      *piVar13 = (int)std::codecvt<wchar_t,char,_Mbstatet>::vftable;
      piVar15 = (int *)FUN_1022bf80(local_4c);
      iVar3 = piVar15[1];
      iVar4 = piVar15[2];
      iVar5 = piVar15[3];
      iVar6 = piVar15[4];
      iVar7 = piVar15[5];
      iVar8 = piVar15[6];
      iVar9 = piVar15[7];
      uVar1 = *(undefined8 *)(piVar15 + 8);
      iVar12 = piVar15[10];
      piVar13[2] = *piVar15;
      piVar13[3] = iVar3;
      piVar13[4] = iVar4;
      piVar13[5] = iVar5;
      piVar13[6] = iVar6;
      piVar13[7] = iVar7;
      piVar13[8] = iVar8;
      piVar13[9] = iVar9;
      *(undefined8 *)(piVar13 + 10) = uVar1;
      piVar13[0xc] = iVar12;
    }
    if ((local_18 & 1) != 0) {
      FUN_1000dcbe();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    local_1c = piVar13;
    FUN_1022b910(piVar13);
    pcVar2 = *(code **)(*piVar13 + 4);
    (*(code *)PTR_guard_check_icall_1035d810)();
    (*pcVar2)();
    DAT_1039d740 = piVar13;
  }
LAB_1023489c:
  FUN_1022bee0(uVar11);
  ExceptionList = local_10;
  return piVar13;
}

