/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014d6a5 */

ulonglong FUN_14014d6a5(int *param_1,int *param_2,longlong param_3)

{
  int **ppiVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  int *local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  piVar6 = *(int **)(param_1 + 0xb8);
  piVar5 = (int *)0x0;
  if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
    piVar5 = piVar6;
  }
  if (*(int *)(param_3 + 0x14) == 0xb) {
    (**(code **)(param_3 + 0x18))(param_1,param_2);
    uVar2 = (ulonglong)(uint)param_2[6];
    goto LAB_14014d7c8;
  }
  local_18 = param_2;
  switch(*(undefined4 *)(param_3 + 0x10)) {
  case 3:
    param_1 = param_1 + 0x44;
    break;
  case 4:
    local_18 = param_1 + 0x36;
    lVar3 = 0x118;
    goto LAB_14014d75e;
  case 5:
    local_18 = param_1 + 0x45;
    lVar3 = 0x1a0;
    goto LAB_14014d75e;
  case 6:
    local_18 = param_1 + 0x9f;
    lVar3 = 0x230;
LAB_14014d75e:
    if (piVar5 == (int *)0x0) goto LAB_14014d775;
    ppiVar1 = (int **)((longlong)piVar5 + lVar3);
    iVar4 = *piVar5;
    piVar6 = *(int **)((longlong)piVar5 + lVar3);
LAB_14014d785:
    if (piVar6 == (int *)0x0) {
      uVar2 = 0;
      goto LAB_14014d7c8;
    }
    goto LAB_14014d78a;
  case 7:
    goto switchD_14014d708_caseD_7;
  case 8:
    break;
  case 9:
    ppiVar1 = &local_18;
    iVar4 = 0;
    local_18 = piVar6;
    goto LAB_14014d785;
  default:
    param_1 = param_1 + 0x36;
  }
  local_18 = param_1;
switchD_14014d708_caseD_7:
LAB_14014d775:
  ppiVar1 = &local_18;
  iVar4 = 0;
LAB_14014d78a:
  if (*(int *)(param_3 + 0x14) - 9U < 2) {
    local_28 = 0;
    uVar2 = (**(code **)(param_2 + 0x22))(param_2,param_3,ppiVar1);
  }
  else {
    local_28 = 0;
    uVar2 = (**(code **)(param_2 + 0x20))(param_2,param_3,ppiVar1,iVar4);
  }
LAB_14014d7c8:
  if (DAT_140f17b40 != (local_10 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_10 ^ (ulonglong)auStack_48);
  }
  return uVar2;
}

