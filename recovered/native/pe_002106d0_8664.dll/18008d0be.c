/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008d0be */

void FUN_18008d0be(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_180239630();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[3];
  puVar4[2] = param_1[2];
  puVar4[3] = uVar3;
  *puVar4 = uVar1;
  puVar4[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

