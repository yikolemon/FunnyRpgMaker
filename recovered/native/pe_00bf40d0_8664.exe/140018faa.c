/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018faa */

undefined8 * FUN_140018faa(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = 0;
  lVar2 = FUN_1400863a0(0x20);
  param_1[1] = lVar2;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  if (param_3[1] == 0) {
    uVar3 = 0;
  }
  else {
    LOCK();
    piVar1 = (int *)(param_3[1] + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar3 = param_3[1];
  }
  *(undefined8 *)(lVar2 + 0x10) = *param_3;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  return param_1;
}

