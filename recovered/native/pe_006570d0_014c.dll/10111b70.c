/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111b70 */

undefined4 FUN_10111b70(uint param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  iVar2 = DAT_1039d74c;
  if ((param_1 & 0xffffcf40) != 0) {
    FUN_100fcef5("Invalid flags for IsWindowHovered()!");
  }
  iVar1 = *(int *)(iVar2 + 0x14d0);
  if (iVar1 == 0) {
    return 0;
  }
  if ((param_1 & 4) == 0) {
    iVar4 = *(int *)(iVar2 + 0x14cc);
    if ((param_1 & 2) != 0) {
      iVar4 = FUN_10111b0e((param_1 & 0x10) >> 4);
    }
    if ((param_1 & 1) == 0) {
      if (iVar1 != iVar4) {
        return 0;
      }
    }
    else {
      cVar3 = FUN_10111ac1(iVar1,iVar4,(param_1 & 8) == 0,(param_1 & 0x10) >> 4);
      if (cVar3 == '\0') {
        return 0;
      }
    }
  }
  cVar3 = FUN_1010296d(iVar1,param_1);
  if ((cVar3 != '\0') &&
     (((((char)param_1 < '\0' || (*(int *)(iVar2 + 0x1528) == 0)) ||
       (*(char *)(iVar2 + 0x1535) != '\0')) || (*(int *)(iVar2 + 0x1528) == *(int *)(iVar1 + 0xb4)))
     )) {
    if ((param_1 >> 0xc & 1) != 0) {
      param_1 = FUN_10102c78();
    }
    if (((param_1 >> 0xd & 1) == 0) || (*(int *)(iVar2 + 0x245c) == *(int *)(iVar1 + 8))) {
      return 1;
    }
  }
  return 0;
}

