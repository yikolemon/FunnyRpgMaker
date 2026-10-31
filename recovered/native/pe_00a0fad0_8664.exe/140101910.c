/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140101910 */

undefined8 *
FUN_140101910(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,uint *param_6,longlong param_7)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_1400d9140(param_3,param_4,0,*(undefined8 *)(param_1 + 0x18),0);
  if (iVar2 < 0) {
    *param_6 = *param_6 | 2;
  }
  else {
    *(int *)(param_7 + 0x10) = iVar2 >> 1;
  }
  uVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  return param_2;
}

