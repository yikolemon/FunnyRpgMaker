/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046589 */

void FUN_140046589(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  switch(param_3 >> 6 & 3) {
  case 0:
    uVar2 = ((ulonglong)param_2 & 0xffff) >> 1;
    uVar1 = (uint)uVar2;
    uVar3 = param_3 >> 4 & 3;
    uVar4 = uVar1;
    switch(uVar3) {
    case 0:
      goto switchD_1400465bc_caseD_0;
    case 1:
      goto switchD_1400465bc_caseD_1;
    case 2:
switchD_1400465bc_caseD_2:
      uVar1 = (uint)uVar2;
      uVar3 = (uint)(uVar2 >> 9);
      goto switchD_1400465bc_caseD_0;
    case 3:
switchD_1400465bc_caseD_3:
      uVar4 = uVar1 * 3;
    }
    goto LAB_14004660e;
  default:
    uVar2 = (ulonglong)param_2 & 0xffff;
    uVar1 = (uint)uVar2;
    uVar3 = param_3 >> 4 & 3;
    uVar4 = uVar1;
    switch(uVar3) {
    case 0:
      goto switchD_1400465bc_caseD_0;
    case 2:
      goto switchD_1400465bc_caseD_2;
    case 3:
      goto switchD_1400465bc_caseD_3;
    }
    break;
  case 2:
    uVar1 = param_2 * 2 & 0xffff;
    uVar2 = (ulonglong)uVar1;
    uVar3 = param_3 >> 4 & 3;
    uVar4 = uVar1;
    switch(uVar3) {
    case 0:
      goto switchD_1400465bc_caseD_0;
    case 2:
      goto switchD_1400465bc_caseD_2;
    case 3:
      goto switchD_1400465bc_caseD_3;
    }
  }
switchD_1400465bc_caseD_1:
  uVar1 = uVar4;
LAB_14004660e:
  uVar3 = uVar4 >> 10;
switchD_1400465bc_caseD_0:
  if ((param_3 & 0xf) == 0) {
    iVar6 = uVar1 - 1;
  }
  else {
    iVar5 = ((param_3 & 0xf) - 4) * uVar1;
    iVar6 = iVar5 + 7;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    iVar6 = iVar6 >> 3;
  }
  *(uint *)(param_1 + 0x2b8) = uVar1 >> 8;
  *(uint *)(param_1 + 700) = uVar3;
  *(int *)(param_1 + 0x2c0) = iVar6 >> 8;
  return;
}

