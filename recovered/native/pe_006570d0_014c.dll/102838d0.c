/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102838d0 */

bool FUN_102838d0(int param_1,char *param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int extraout_EDX;
  
  if (param_5 == 0) {
    return '4' < *param_2;
  }
  iVar2 = FUN_10278900();
  if (iVar2 == 0) {
    if ('5' < *param_2) {
      return true;
    }
    if ('4' < *param_2) {
      cVar1 = FUN_102838ad(param_2 + 1,param_4);
      if (cVar1 != '\0') {
        return true;
      }
      if (extraout_EDX != param_1) {
        return (bool)(*(byte *)(extraout_EDX + -1) & 1);
      }
    }
  }
  else if (iVar2 == 0x200) {
    cVar1 = FUN_102838ad(param_2,param_4);
    if ((cVar1 != '\0') && (param_3 != 0x2d)) {
      return true;
    }
  }
  else if (((iVar2 == 0x100) && (cVar1 = FUN_102838ad(param_2,param_4), cVar1 != '\0')) &&
          (param_3 == 0x2d)) {
    return true;
  }
  return false;
}

