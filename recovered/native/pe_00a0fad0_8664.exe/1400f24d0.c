/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400f24d0 */

undefined8 *
FUN_1400f24d0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,uint *param_6,longlong param_7)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_1400f3eb0(param_3,param_4,0,*(undefined8 *)(param_1 + 0x10),0);
  if (iVar2 < 0) {
    *param_6 = *param_6 | 2;
  }
  else {
    *(int *)(param_7 + 0x18) = iVar2 >> 1;
  }
  uVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar1;
  return param_2;
}

