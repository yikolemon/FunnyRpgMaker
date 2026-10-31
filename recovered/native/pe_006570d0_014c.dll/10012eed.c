/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10012eed */

undefined4 * FUN_10012eed(undefined4 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  
  sVar4 = _strlen(param_2);
  puVar5 = (undefined4 *)FUN_10005f4c(0,param_2,sVar4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(puVar5 + 4);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  puVar5[4] = 0;
  puVar5[5] = 0xf;
  *(undefined1 *)puVar5 = 0;
  return param_1;
}

