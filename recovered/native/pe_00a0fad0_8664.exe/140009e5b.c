/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140009e5b */

undefined8 * FUN_140009e5b(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = param_3 + 2;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  puVar4 = (undefined8 *)FUN_14000b1f8(param_2,param_3,*puVar4);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  uVar3 = puVar4[3];
  param_1[2] = puVar4[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  *(undefined1 *)puVar4 = 0;
  return param_1;
}

