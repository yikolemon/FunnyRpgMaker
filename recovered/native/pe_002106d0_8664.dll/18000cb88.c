/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000cb88 */

undefined8 FUN_18000cb88(byte *param_1,byte param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *param_1;
  if (bVar1 == 2) {
    if (param_2 != 0) {
      if (param_2 < 3) {
        return 1;
      }
      goto LAB_18000cbc1;
    }
    param_2 = 1;
  }
  else {
    if (bVar1 == 1) {
      if (param_2 < 2) {
        return 0;
      }
      uVar2 = 1;
      if (param_2 == 2) goto LAB_18000cbc5;
    }
    else if (bVar1 == 0) {
      uVar2 = 0;
      if (param_2 != 0) {
        return 0;
      }
      param_2 = 1;
      goto LAB_18000cbc5;
    }
LAB_18000cbc1:
    param_2 = 0;
  }
  uVar2 = 0;
LAB_18000cbc5:
  *param_1 = param_2;
  return uVar2;
}

