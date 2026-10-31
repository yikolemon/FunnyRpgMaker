/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802058da */

void FUN_1802058da(uint *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 6);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (param_1[5] != 0) {
    uVar1 = 0;
    do {
      FUN_1801c9b65(param_2,*(undefined8 *)(*(longlong *)(param_1 + 6) + uVar1 * 8));
      *(undefined8 *)(*(longlong *)(param_1 + 6) + uVar1 * 8) = 0;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1[5]);
    lVar2 = *(longlong *)(param_1 + 6);
  }
  FUN_1801c9b65(param_2,lVar2);
  param_1[6] = 0;
  param_1[7] = 0;
  lVar2 = *(longlong *)(param_1 + 2);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else if (*param_1 != 0) {
    lVar2 = 8;
    uVar1 = 0;
    do {
      FUN_1801c9b65(param_2,*(undefined8 *)(*(longlong *)(param_1 + 2) + lVar2));
      *(undefined8 *)(*(longlong *)(param_1 + 2) + lVar2) = 0;
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x10;
    } while (uVar1 < *param_1);
    lVar2 = *(longlong *)(param_1 + 2);
  }
  FUN_1801c9b65(param_2,lVar2);
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

