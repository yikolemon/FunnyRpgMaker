/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f68e0 */

void FUN_1801f68e0(longlong param_1)

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
      puVar2 = &LAB_1801f6bae;
      pcVar3 = (code *)&LAB_1801f6b8a;
      goto LAB_1801f69b6;
    }
    if (iVar4 == 0x4000) {
      puVar2 = &LAB_1801f6be0;
      pcVar3 = (code *)&LAB_1801f6bbb;
      goto LAB_1801f69b6;
    }
  }
  puVar2 = &LAB_1801f6c89;
  pcVar3 = FUN_1801f6bee;
LAB_1801f69b6:
  *(code **)(param_1 + 0x2f0) = pcVar3;
  *(undefined1 **)(param_1 + 0x2f8) = puVar2;
  pcVar3 = FUN_18001c7c4;
  if (*(short *)(param_1 + 0x19c) == 0x4000) {
    *(code **)(param_1 + 0x2d8) = FUN_18001c7c4;
  }
  else {
    if (*(short *)(param_1 + 0x19e) == 0x4000) {
      puVar2 = &LAB_1801f6ceb;
    }
    else {
      puVar2 = &LAB_1801f6cef;
    }
    *(undefined1 **)(param_1 + 0x2d8) = puVar2;
  }
  if (*(short *)(param_1 + 0x198) != 0x4000) {
    if (*(short *)(param_1 + 0x19a) == 0x4000) {
      pcVar3 = (code *)&LAB_1801f6ceb;
    }
    else {
      pcVar3 = (code *)&LAB_1801f6d25;
    }
  }
  *(code **)(param_1 + 0x2e0) = pcVar3;
  *(undefined4 *)(param_1 + 0x180) = 0;
  return;
}

