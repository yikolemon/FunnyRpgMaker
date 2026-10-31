/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003ae98 */

undefined8 * FUN_18003ae98(undefined8 *param_1,int param_2,int *param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[3] = &DAT_18037bd6c;
  param_1[4] = 0x40;
  iVar2 = *param_3;
  uVar1 = iVar2 - param_2;
  *(uint *)(param_1 + 2) = uVar1;
  if (uVar1 != 0 && param_2 <= iVar2) {
    if (param_3[2] == 2) {
      FUN_180018bde(param_4,&DAT_18037bd6c,&DAT_18037bd6c + (uVar1 >> 1));
      iVar2 = (uVar1 & 1) + (uVar1 >> 1);
    }
    else {
      if (param_3[2] != 0) {
        return param_1;
      }
      FUN_180018bde(param_4,&DAT_18037bd6c,&DAT_18037bd6c + uVar1);
      iVar2 = 0;
    }
    *(int *)(param_1 + 2) = iVar2;
  }
  return param_1;
}

