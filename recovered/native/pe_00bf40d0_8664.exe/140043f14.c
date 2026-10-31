/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140043f14 */

void FUN_140043f14(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (int)*(short *)(param_1 + 0x1a0);
  iVar4 = (int)*(short *)(param_1 + 0x1a2);
  iVar5 = iVar4 * *(short *)(param_1 + 0x19e) + *(short *)(param_1 + 0x19c) * iVar1 + 0x2000 >> 0xe;
  if (iVar5 < 0x3ffe) {
    if (iVar5 + 0x3ffU < 0x7ff) {
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      iVar5 = 0;
    }
    else {
      *(int *)(param_1 + 0x2d0) = (iVar1 << 0x10) / iVar5;
      iVar5 = (iVar4 << 0x10) / iVar5;
    }
    *(int *)(param_1 + 0x2d4) = iVar5;
  }
  else {
    *(int *)(param_1 + 0x2d0) = iVar1 * 4;
    *(int *)(param_1 + 0x2d4) = iVar4 * 4;
    if (iVar1 == 0x4000) {
      puVar2 = &LAB_1400441e2;
      pcVar3 = (code *)&LAB_1400441be;
      goto LAB_140043fea;
    }
    if (iVar4 == 0x4000) {
      puVar2 = &LAB_140044214;
      pcVar3 = (code *)&LAB_1400441ef;
      goto LAB_140043fea;
    }
  }
  puVar2 = &LAB_1400442bd;
  pcVar3 = FUN_140044222;
LAB_140043fea:
  *(code **)(param_1 + 0x2f0) = pcVar3;
  *(undefined1 **)(param_1 + 0x2f8) = puVar2;
  pcVar3 = FUN_140017922;
  if (*(short *)(param_1 + 0x19c) == 0x4000) {
    *(code **)(param_1 + 0x2d8) = FUN_140017922;
  }
  else {
    if (*(short *)(param_1 + 0x19e) == 0x4000) {
      puVar2 = &LAB_14004431f;
    }
    else {
      puVar2 = &LAB_140044323;
    }
    *(undefined1 **)(param_1 + 0x2d8) = puVar2;
  }
  if (*(short *)(param_1 + 0x198) != 0x4000) {
    if (*(short *)(param_1 + 0x19a) == 0x4000) {
      pcVar3 = (code *)&LAB_14004431f;
    }
    else {
      pcVar3 = (code *)&LAB_140044359;
    }
  }
  *(code **)(param_1 + 0x2e0) = pcVar3;
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

