/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fbb2 */

undefined8 FUN_14008fbb2(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar2 = DAT_140f2a910;
  if ((param_1 & 0xffffcf40) != 0) {
    FUN_14007a954("Invalid flags for IsWindowHovered()!");
  }
  lVar1 = *(longlong *)(lVar2 + 0x1610);
  if (lVar1 == 0) {
    return 0;
  }
  if ((param_1 & 4) == 0) {
    lVar4 = *(longlong *)(lVar2 + 0x1608);
    if ((param_1 & 2) != 0) {
      lVar4 = FUN_14008fb4c(lVar4,(param_1 & 8) == 0,(param_1 & 0x10) >> 4);
    }
    if ((param_1 & 1) == 0) {
      if (lVar1 != lVar4) {
        return 0;
      }
    }
    else {
      cVar3 = FUN_14008fb00(lVar1,lVar4,(param_1 & 8) == 0,(param_1 & 0x10) >> 4);
      if (cVar3 == '\0') {
        return 0;
      }
    }
  }
  cVar3 = FUN_1400807fe(lVar1,param_1);
  if ((cVar3 != '\0') &&
     (((((char)param_1 < '\0' || (*(int *)(lVar2 + 0x167c) == 0)) ||
       (*(char *)(lVar2 + 0x1689) != '\0')) || (*(int *)(lVar2 + 0x167c) == *(int *)(lVar1 + 0xc4)))
     )) {
    if ((param_1 >> 0xc & 1) != 0) {
      param_1 = FUN_140080b07(param_1,*(undefined4 *)(lVar2 + 0x12e4));
    }
    if (((param_1 >> 0xd & 1) == 0) || (*(int *)(lVar2 + 0x2694) == *(int *)(lVar1 + 0x10))) {
      return 1;
    }
  }
  return 0;
}

