/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800631a8 */

int FUN_1800631a8(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*param_1 == 1) {
    switch(param_1[1]) {
    case 2:
      iVar1 = 3;
      if (param_1[2] == 0x17) {
        lVar2 = FUN_180063242(param_1 + 3);
        if ((lVar2 != -1) && (lVar3 = FUN_180063263(param_1 + 3,lVar2), lVar3 == 0)) {
          iVar1 = (int)lVar2 + 4;
        }
      }
      break;
    case 3:
      iVar1 = 4;
      break;
    case 5:
    case 6:
      iVar1 = 6;
      break;
    default:
      if (1 < param_1[1] - 0x1dU) goto LAB_1800631e8;
    case 4:
      iVar1 = 5;
    }
  }
  else {
LAB_1800631e8:
    iVar1 = FUN_180063263(param_1,0xffffffffffffffff);
  }
  return iVar1;
}

