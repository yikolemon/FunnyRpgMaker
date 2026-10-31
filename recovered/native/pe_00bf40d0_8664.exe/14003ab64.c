/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003ab64 */

void FUN_14003ab64(longlong param_1)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined1 *puVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = *(uint *)(param_1 + 0x1f0);
  uVar2 = (ushort)((uVar1 & 1) << 0xe);
  uVar3 = uVar2 ^ 0x4000;
  if ((byte)uVar1 < 4) {
    *(ushort *)(param_1 + 0x19c) = uVar2;
    *(ushort *)(param_1 + 0x19e) = uVar3;
    *(ushort *)(param_1 + 0x198) = uVar2;
    *(ushort *)(param_1 + 0x19a) = uVar3;
  }
  if ((uVar1 & 2) == 0) {
    *(ushort *)(param_1 + 0x1a0) = uVar2;
    *(ushort *)(param_1 + 0x1a2) = uVar3;
    FUN_140043f14(param_1);
    return;
  }
  iVar4 = (int)*(short *)(param_1 + 0x1a0);
  iVar7 = (int)*(short *)(param_1 + 0x1a2);
  iVar8 = iVar7 * *(short *)(param_1 + 0x19e) + *(short *)(param_1 + 0x19c) * iVar4 + 0x2000 >> 0xe;
  if (iVar8 < 0x3ffe) {
    if (iVar8 + 0x3ffU < 0x7ff) {
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      iVar8 = 0;
    }
    else {
      *(int *)(param_1 + 0x2d0) = (iVar4 << 0x10) / iVar8;
      iVar8 = (iVar7 << 0x10) / iVar8;
    }
    *(int *)(param_1 + 0x2d4) = iVar8;
  }
  else {
    *(int *)(param_1 + 0x2d0) = iVar4 * 4;
    *(int *)(param_1 + 0x2d4) = iVar7 * 4;
    if (iVar4 == 0x4000) {
      puVar5 = &LAB_1400441e2;
      pcVar6 = (code *)&LAB_1400441be;
      goto LAB_140043fea;
    }
    if (iVar7 == 0x4000) {
      puVar5 = &LAB_140044214;
      pcVar6 = (code *)&LAB_1400441ef;
      goto LAB_140043fea;
    }
  }
  puVar5 = &LAB_1400442bd;
  pcVar6 = FUN_140044222;
LAB_140043fea:
  *(code **)(param_1 + 0x2f0) = pcVar6;
  *(undefined1 **)(param_1 + 0x2f8) = puVar5;
  pcVar6 = FUN_140017922;
  if (*(short *)(param_1 + 0x19c) == 0x4000) {
    *(code **)(param_1 + 0x2d8) = FUN_140017922;
  }
  else {
    if (*(short *)(param_1 + 0x19e) == 0x4000) {
      puVar5 = &LAB_14004431f;
    }
    else {
      puVar5 = &LAB_140044323;
    }
    *(undefined1 **)(param_1 + 0x2d8) = puVar5;
  }
  if (*(short *)(param_1 + 0x198) != 0x4000) {
    if (*(short *)(param_1 + 0x19a) == 0x4000) {
      pcVar6 = (code *)&LAB_14004431f;
    }
    else {
      pcVar6 = (code *)&LAB_140044359;
    }
  }
  *(code **)(param_1 + 0x2e0) = pcVar6;
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

