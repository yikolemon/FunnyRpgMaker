/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004445cc */

void __fastcall FUN_004445cc(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  switch(param_3 >> 6 & 3) {
  case 0:
    uVar2 = (param_2 & 0xffff) >> 1;
    uVar3 = param_3 >> 4 & 3;
    switch(uVar3) {
    case 0:
      goto switchD_004445ec_caseD_0;
    case 1:
      goto switchD_004445ec_caseD_1;
    case 2:
switchD_004445ec_caseD_2:
      uVar3 = uVar2 >> 9;
      goto switchD_004445ec_caseD_0;
    case 3:
switchD_004445ec_caseD_3:
      uVar3 = uVar2 * 3;
    }
    goto LAB_0044462c;
  default:
    uVar2 = param_2 & 0xffff;
    uVar3 = param_3 >> 4 & 3;
    switch(uVar3) {
    case 0:
      goto switchD_004445ec_caseD_0;
    case 2:
      goto switchD_004445ec_caseD_2;
    case 3:
      goto switchD_004445ec_caseD_3;
    }
    break;
  case 2:
    uVar2 = param_2 * 2 & 0xffff;
    uVar3 = param_3 >> 4 & 3;
    switch(uVar3) {
    case 0:
      goto switchD_004445ec_caseD_0;
    case 2:
      goto switchD_004445ec_caseD_2;
    case 3:
      goto switchD_004445ec_caseD_3;
    }
  }
switchD_004445ec_caseD_1:
  uVar3 = uVar2;
LAB_0044462c:
  uVar3 = uVar3 >> 10;
switchD_004445ec_caseD_0:
  if ((param_3 & 0xf) == 0) {
    iVar4 = uVar2 - 1;
  }
  else {
    iVar1 = ((param_3 & 0xf) - 4) * uVar2;
    iVar4 = iVar1 + 7;
    if (-1 < iVar1) {
      iVar4 = iVar1;
    }
    iVar4 = iVar4 >> 3;
  }
  *(uint *)(param_1 + 0x1c0) = uVar2 >> 8;
  *(uint *)(param_1 + 0x1c4) = uVar3;
  *(int *)(param_1 + 0x1c8) = iVar4 >> 8;
  return;
}

