/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1006344a */

int __fastcall FUN_1006344a(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != 1) {
LAB_10063480:
    iVar2 = FUN_100634da();
    return iVar2;
  }
  iVar2 = 4;
  switch(param_1[1]) {
  case 2:
    if (((param_1[2] == 0x17) && (iVar2 = FUN_100634bf(), iVar2 != -1)) &&
       (iVar1 = FUN_100634da(), iVar1 == 0)) {
      iVar2 = iVar2 + 4;
    }
    else {
      iVar2 = 3;
    }
    break;
  case 3:
    break;
  case 5:
  case 6:
    iVar2 = 6;
    break;
  default:
    if (1 < param_1[1] - 0x1dU) goto LAB_10063480;
  case 4:
    iVar2 = 5;
  }
  return iVar2;
}

