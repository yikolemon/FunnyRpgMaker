/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180179619 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180179619(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = _UNK_1802e1318;
  if (param_2 != 0) {
    return;
  }
  if (*param_1 != 0x20) {
    if (*param_1 == 0x10) {
      param_1[3] = 0x7c00;
      param_1[4] = 0x3e0;
      param_1[5] = 0x1f;
      return;
    }
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    return;
  }
  *(undefined8 *)(param_1 + 3) = _DAT_1802e1310;
  *(undefined8 *)(param_1 + 5) = uVar1;
  param_1[7] = 0;
  return;
}

