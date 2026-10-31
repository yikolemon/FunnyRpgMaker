/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140148641 */

void FUN_140148641(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  switch(param_3 >> 6 & 3) {
  case 0:
    param_2 = (param_2 & 0xffff) >> 1;
    uVar1 = param_3 >> 4 & 3;
    switch(uVar1) {
    case 0:
      goto switchD_140148674_caseD_0;
    case 1:
      goto switchD_140148674_caseD_1;
    case 2:
switchD_140148674_caseD_2:
      uVar1 = param_2 >> 9;
      goto switchD_140148674_caseD_0;
    case 3:
switchD_140148674_caseD_3:
      uVar1 = param_2 * 3;
    }
    goto LAB_1401486c6;
  default:
    param_2 = param_2 & 0xffff;
    uVar1 = param_3 >> 4 & 3;
    switch(uVar1) {
    case 0:
      goto switchD_140148674_caseD_0;
    case 2:
      goto switchD_140148674_caseD_2;
    case 3:
      goto switchD_140148674_caseD_3;
    }
    break;
  case 2:
    param_2 = param_2 * 2 & 0xffff;
    uVar1 = param_3 >> 4 & 3;
    switch(uVar1) {
    case 0:
      goto switchD_140148674_caseD_0;
    case 2:
      goto switchD_140148674_caseD_2;
    case 3:
      goto switchD_140148674_caseD_3;
    }
  }
switchD_140148674_caseD_1:
  uVar1 = param_2;
LAB_1401486c6:
  uVar1 = uVar1 >> 10;
switchD_140148674_caseD_0:
  if ((param_3 & 0xf) == 0) {
    iVar3 = param_2 - 1;
  }
  else {
    iVar2 = ((param_3 & 0xf) - 4) * param_2;
    iVar3 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar3 = iVar3 >> 3;
  }
  *(uint *)(param_1 + 0x2b8) = param_2 >> 8;
  *(uint *)(param_1 + 700) = uVar1;
  *(int *)(param_1 + 0x2c0) = iVar3 >> 8;
  return;
}

