/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004bcce */

undefined8 FUN_14004bcce(byte *param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *param_1;
  if (bVar1 == 2) {
    if (param_2 != 0) {
      if (param_2 < 3) {
        return 1;
      }
      goto LAB_14004bd07;
    }
    param_2 = 1;
  }
  else {
    if (bVar1 == 1) {
      if (param_2 < 2) {
        return 0;
      }
      uVar2 = 1;
      if (param_2 == 2) goto LAB_14004bd0b;
    }
    else if (bVar1 == 0) {
      uVar2 = 0;
      if (param_2 != 0) {
        return 0;
      }
      param_2 = 1;
      goto LAB_14004bd0b;
    }
LAB_14004bd07:
    param_2 = 0;
  }
  uVar2 = 0;
LAB_14004bd0b:
  *param_1 = param_2;
  return uVar2;
}

