/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801eda6b */

void FUN_1801eda6b(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  if (*param_2 == 0) {
    lVar9 = 0x120;
  }
  else {
    if (*param_2 != 1) {
      if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
      }
      return;
    }
    lVar9 = 0xe8;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30 + lVar9);
  *(undefined8 *)(param_1 + 0x70) = uVar2;
  uVar3 = *(undefined8 *)(param_1 + lVar9);
  uVar4 = ((undefined8 *)(param_1 + lVar9))[1];
  puVar1 = (undefined8 *)(param_1 + 0x10 + lVar9);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  puVar1 = (undefined8 *)(param_1 + 0x20 + lVar9);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  *(undefined8 *)(param_1 + 0x60) = uVar7;
  *(undefined8 *)(param_1 + 0x68) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x58) = uVar6;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = uVar5;
  *(undefined8 *)(param_1 + 0x90) = uVar6;
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  *(undefined8 *)(param_1 + 0xa0) = uVar8;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  *(undefined8 *)(param_1 + 0xc0) = uVar5;
  *(undefined8 *)(param_1 + 200) = uVar6;
  *(undefined8 *)(param_1 + 0xd0) = uVar7;
  *(undefined8 *)(param_1 + 0xd8) = uVar8;
  *(undefined8 *)(param_1 + 0xe0) = uVar2;
  *(short *)(param_1 + 0x192) = (short)*param_2;
  *(short *)(param_1 + 0x194) = (short)*param_2;
  *(short *)(param_1 + 0x196) = (short)*param_2;
  return;
}

