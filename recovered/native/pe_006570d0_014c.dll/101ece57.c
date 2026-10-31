/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ece57 */

void __fastcall FUN_101ece57(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  switch(param_3 >> 6 & 3) {
  case 0:
    param_2 = (param_2 & 0xffff) >> 1;
    uVar2 = param_3 >> 4 & 3;
    switch(uVar2) {
    case 0:
      goto switchD_101ece77_caseD_0;
    case 1:
      goto switchD_101ece77_caseD_1;
    case 2:
switchD_101ece77_caseD_2:
      uVar2 = param_2 >> 9;
      goto switchD_101ece77_caseD_0;
    case 3:
switchD_101ece77_caseD_3:
      uVar2 = param_2 * 3;
    }
    goto LAB_101eceb7;
  default:
    param_2 = param_2 & 0xffff;
    uVar2 = param_3 >> 4 & 3;
    switch(uVar2) {
    case 0:
      goto switchD_101ece77_caseD_0;
    case 2:
      goto switchD_101ece77_caseD_2;
    case 3:
      goto switchD_101ece77_caseD_3;
    }
    break;
  case 2:
    param_2 = param_2 * 2 & 0xffff;
    uVar2 = param_3 >> 4 & 3;
    switch(uVar2) {
    case 0:
      goto switchD_101ece77_caseD_0;
    case 2:
      goto switchD_101ece77_caseD_2;
    case 3:
      goto switchD_101ece77_caseD_3;
    }
  }
switchD_101ece77_caseD_1:
  uVar2 = param_2;
LAB_101eceb7:
  uVar2 = uVar2 >> 10;
switchD_101ece77_caseD_0:
  if ((param_3 & 0xf) == 0) {
    iVar3 = param_2 - 1;
  }
  else {
    iVar1 = ((param_3 & 0xf) - 4) * param_2;
    iVar3 = iVar1 + 7;
    if (-1 < iVar1) {
      iVar3 = iVar1;
    }
    iVar3 = iVar3 >> 3;
  }
  *(uint *)(param_1 + 0x1c0) = param_2 >> 8;
  *(uint *)(param_1 + 0x1c4) = uVar2;
  *(int *)(param_1 + 0x1c8) = iVar3 >> 8;
  return;
}

