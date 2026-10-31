/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14023203a */

undefined8 * FUN_14023203a(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined8 *puVar5;
  
  sVar4 = strlen(param_3);
  puVar5 = (undefined8 *)FUN_1402147d0(param_2,param_3,sVar4);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar3 = puVar5[3];
  param_1[2] = puVar5[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  puVar5[2] = 0;
  puVar5[3] = 0xf;
  *(undefined1 *)puVar5 = 0;
  return param_1;
}

