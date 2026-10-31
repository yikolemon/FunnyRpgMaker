/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140096346 */

void FUN_140096346(undefined8 param_1,longlong param_2,longlong param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = *(uint **)param_4;
  uVar4 = (uint)((ulonglong)(param_3 - param_2) >> 1);
  if (puVar3 == (uint *)0x0) {
LAB_1400963a6:
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
          goto LAB_1400963a6;
        }
        uVar1 = *puVar3;
      } while (uVar4 < uVar1);
      param_4 = param_4 + 6;
    }
    if (uVar1 == uVar4) goto LAB_1400963dd;
  }
  puVar2 = (uint *)FUN_1400d3680(0x20);
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
LAB_1400963dd:
  FUN_14009642e(puVar3 + 2,param_2,param_3);
  return;
}

