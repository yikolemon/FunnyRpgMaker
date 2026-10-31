/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ed530 */

void FUN_1801ed530(longlong param_1)

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
    FUN_1801f68e0();
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
      puVar5 = &LAB_1801f6bae;
      pcVar6 = (code *)&LAB_1801f6b8a;
      goto LAB_1801f69b6;
    }
    if (iVar7 == 0x4000) {
      puVar5 = &LAB_1801f6be0;
      pcVar6 = (code *)&LAB_1801f6bbb;
      goto LAB_1801f69b6;
    }
  }
  puVar5 = &LAB_1801f6c89;
  pcVar6 = FUN_1801f6bee;
LAB_1801f69b6:
  *(code **)(param_1 + 0x2f0) = pcVar6;
  *(undefined1 **)(param_1 + 0x2f8) = puVar5;
  pcVar6 = FUN_18001c7c4;
  if (*(short *)(param_1 + 0x19c) == 0x4000) {
    *(code **)(param_1 + 0x2d8) = FUN_18001c7c4;
  }
  else {
    if (*(short *)(param_1 + 0x19e) == 0x4000) {
      puVar5 = &LAB_1801f6ceb;
    }
    else {
      puVar5 = &LAB_1801f6cef;
    }
    *(undefined1 **)(param_1 + 0x2d8) = puVar5;
  }
  if (*(short *)(param_1 + 0x198) != 0x4000) {
    if (*(short *)(param_1 + 0x19a) == 0x4000) {
      pcVar6 = (code *)&LAB_1801f6ceb;
    }
    else {
      pcVar6 = (code *)&LAB_1801f6d25;
    }
  }
  *(code **)(param_1 + 0x2e0) = pcVar6;
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

