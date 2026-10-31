/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043366c */

int __fastcall FUN_0043366c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = param_3;
  if (param_2 == 0) {
    uVar4 = param_3 + 0x20U & 0x7fffffc0;
  }
  else {
    piVar3 = (int *)(param_1 + 4);
    uVar4 = 0x62;
    do {
      iVar1 = *piVar3;
      uVar5 = iVar1 - param_3;
      if (iVar1 < param_3) {
        uVar5 = param_3 - iVar1;
      }
      if (uVar5 < uVar4) {
        iVar2 = iVar1;
        uVar4 = uVar5;
      }
      piVar3 = piVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    uVar4 = iVar2 + 0x20U & 0xffffffc0;
    if (param_3 < iVar2) {
      if ((int)(uVar4 - 0x30) < param_3) {
        return iVar2;
      }
      return param_3;
    }
  }
  if ((int)(uVar4 | 0x30) <= param_3) {
    iVar2 = param_3;
  }
  return iVar2;
}

