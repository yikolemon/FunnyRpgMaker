/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180075e6b */

undefined8 * FUN_180075e6b(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar3 = FUN_18028ca30(param_2);
  puVar4 = (undefined8 *)FUN_180044d90(param_3,0,param_2,uVar3);
  uVar3 = *puVar4;
  uVar1 = puVar4[1];
  uVar2 = puVar4[3];
  param_1[2] = puVar4[2];
  param_1[3] = uVar2;
  *param_1 = uVar3;
  param_1[1] = uVar1;
  puVar4[2] = 0;
  puVar4[3] = 7;
  *(undefined2 *)puVar4 = 0;
  return param_1;
}

