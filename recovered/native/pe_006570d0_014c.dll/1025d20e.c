/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1025d20e */

int FUN_1025d20e(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = ((param_3 - (param_2 + 6) % 7) + 7) / 7;
  uVar2 = FUN_1025c500(param_1);
  iVar5 = param_3 - (uVar2 & 0xff);
  iVar3 = ((param_2 - param_3) + 0x173) % 7;
  iVar4 = (int)((uVar2 & 0xff) + 0x16d + iVar3) % 7;
  if ((((iVar5 < 0x16c) || (iVar4 != 2)) && ((iVar5 < 0x16b || (iVar4 != 3)))) &&
     ((iVar5 < 0x16a || (iVar4 != 4)))) {
    if ((iVar3 == 2) || (iVar3 == 3)) {
      iVar4 = iVar1 + 1;
    }
    else {
      iVar4 = iVar1 + 1;
      if (iVar3 != 4) {
        iVar4 = iVar1;
      }
    }
  }
  else {
    iVar4 = -1;
  }
  return iVar4;
}

