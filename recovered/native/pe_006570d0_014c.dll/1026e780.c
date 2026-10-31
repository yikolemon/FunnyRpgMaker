/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026e780 */

float10 FUN_1026e780(uint param_1,uint param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  double local_14;
  double local_c;
  
  local_14 = (double)CONCAT44(param_2,param_1);
  if (local_14 != 0.0) {
    if (((param_2 & 0x7ff00000) == 0) && (param_1 != 0 || (param_2 & 0xfffff) != 0)) {
      param_2 = param_2 & 0xfffff;
      iVar1 = 0x1f;
      if (param_2 != 0) {
        for (; param_2 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      if (param_2 == 0) {
        iVar1 = 0x1f;
        if (param_1 != 0) {
          for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
          }
        }
      }
      else {
        iVar1 = iVar1 + 0x20;
      }
      uVar2 = __allshl();
      param_2 = (uint)((ulonglong)uVar2 >> 0x20) & 0xffefffff;
      if (local_14 < 0.0) {
        param_2 = param_2 | 0x80000000;
      }
      iVar1 = iVar1 + -0x431;
      local_14 = (double)CONCAT44(param_2,(int)uVar2);
    }
    else {
      iVar1 = (param_2 >> 0x14 & 0x7ff) - 0x3fe;
    }
    local_c = (double)(CONCAT44(param_2,SUB84(local_14,0)) & 0xbfefffffffffffff | 0x3fe0000000000000
                      );
    *param_3 = iVar1;
    return (float10)local_c;
  }
  *param_3 = 0;
  return (float10)0.0;
}

