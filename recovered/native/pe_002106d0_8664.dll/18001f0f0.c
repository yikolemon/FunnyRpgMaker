/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001f0f0 */

void FUN_18001f0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = (int)param_3 - (int)param_2;
  puVar3 = *(uint **)param_4;
  if (puVar3 == (uint *)0x0) {
LAB_18001f14d:
    puVar3 = (uint *)0x0;
  }
  else {
    uVar1 = *puVar3;
    if (uVar4 < uVar1) {
      do {
        param_4 = puVar3;
        puVar3 = *(uint **)(param_4 + 6);
        if (puVar3 == (uint *)0x0) {
          param_4 = param_4 + 6;
          goto LAB_18001f14d;
        }
        uVar1 = *puVar3;
      } while (uVar4 < uVar1);
      param_4 = param_4 + 6;
    }
    if (uVar1 == uVar4) goto LAB_18001f184;
  }
  puVar2 = (uint *)FUN_180239630(0x20);
  *puVar2 = uVar4;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  *(uint **)param_4 = puVar2;
  *(uint **)(puVar2 + 6) = puVar3;
  puVar3 = *(uint **)param_4;
LAB_18001f184:
  FUN_18001f1d4(puVar3 + 2,param_2,param_3);
  return;
}

