/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f718d */

void __fastcall FUN_101f718d(char *param_1)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  
  if ((byte)(*param_1 + 0xbfU) < 0x1a) {
    iVar2 = 0;
    while ((((byte)(param_1[iVar2 + 1] + 0xbfU) < 0x1a &&
            ((byte)(param_1[iVar2 + 2] + 0xbfU) < 0x1a)) &&
           ((byte)(param_1[iVar2 + 3] + 0xbfU) < 0x1a))) {
      if (((0x19 < (byte)(param_1[iVar2 + 4] + 0xbfU)) ||
          (0x19 < (byte)(param_1[iVar2 + 5] + 0xbfU))) ||
         ((param_1[iVar2 + 6] != '+' ||
          (iVar1 = iVar2 + 7, iVar2 = iVar2 + 7, 0x19 < (byte)(param_1[iVar1] + 0xbfU))))) break;
    }
    if (iVar2 != 0) {
      sVar3 = _strlen(param_1 + iVar2);
      FUN_1025b2d0(param_1,param_1 + iVar2,sVar3 + 1);
    }
  }
  return;
}

