/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f17b8 */

int __fastcall FUN_101f17b8(int *param_1,int *param_2,int param_3)

{
  int **ppiVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *local_18;
  uint local_14;
  
  ppiVar1 = &local_18;
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  piVar4 = (int *)param_1[0x85];
  if (piVar4 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)0x0;
    if (*piVar4 != 0) {
      piVar5 = piVar4;
    }
  }
  if (*(int *)(param_3 + 0xc) == 0xb) {
    (**(code **)(param_3 + 0x10))(param_1,param_2);
    iVar2 = param_2[3];
    goto LAB_101f1899;
  }
  local_18 = param_2;
  switch(*(undefined4 *)(param_3 + 8)) {
  case 3:
    param_1 = param_1 + 0x29;
    break;
  case 4:
    local_18 = param_1 + 0x21;
    iVar3 = 0x90;
    goto LAB_101f1856;
  case 5:
    local_18 = param_1 + 0x2a;
    iVar3 = 0xd4;
    goto LAB_101f1856;
  case 6:
    local_18 = param_1 + 0x74;
    iVar3 = 0x11c;
LAB_101f1856:
    if (piVar5 == (int *)0x0) goto LAB_101f1866;
    ppiVar1 = (int **)((int)piVar5 + iVar3);
    iVar2 = *piVar5;
    piVar4 = *(int **)((int)piVar5 + iVar3);
LAB_101f1870:
    if (piVar4 == (int *)0x0) {
      iVar2 = 0;
      goto LAB_101f1899;
    }
    goto LAB_101f1874;
  case 7:
    goto switchD_101f180b_caseD_7;
  case 8:
    break;
  case 9:
    iVar2 = 0;
    local_18 = piVar4;
    goto LAB_101f1870;
  default:
    param_1 = param_1 + 0x21;
  }
  local_18 = param_1;
switchD_101f180b_caseD_7:
LAB_101f1866:
  iVar2 = 0;
  ppiVar1 = &local_18;
LAB_101f1874:
  if (*(int *)(param_3 + 0xc) - 9U < 2) {
    iVar2 = (*(code *)param_2[0x11])(param_2,param_3,ppiVar1,iVar2,0);
  }
  else {
    iVar2 = (*(code *)param_2[0x10])(param_2,param_3,ppiVar1,iVar2,0);
  }
LAB_101f1899:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar2;
}

