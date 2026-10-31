/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000d83c */

undefined4 __thiscall FUN_1000d83c(byte *param_1,byte param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *param_1;
  if (bVar1 == 2) {
    if (param_2 != 0) {
      if (param_2 < 3) {
        return 1;
      }
      goto LAB_1000d87c;
    }
    param_2 = 1;
  }
  else {
    if (bVar1 == 1) {
      if (param_2 < 2) {
        return 0;
      }
      uVar2 = 1;
      if (param_2 == 2) goto LAB_1000d880;
    }
    else if (bVar1 == 0) {
      uVar2 = 0;
      if (param_2 != 0) {
        return 0;
      }
      param_2 = 1;
      goto LAB_1000d880;
    }
LAB_1000d87c:
    param_2 = 0;
  }
  uVar2 = 0;
LAB_1000d880:
  *param_1 = param_2;
  return uVar2;
}

