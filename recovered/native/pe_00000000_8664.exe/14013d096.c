/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013d096 */

void FUN_14013d096(longlong param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*param_2 == 0) {
    lVar7 = 0x120;
  }
  else {
    if (*param_2 != 1) {
      if (*(char *)(param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 0x20) = 0x86;
      }
      return;
    }
    lVar7 = 0xe8;
  }
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x30 + lVar7);
  uVar2 = *(undefined8 *)(param_1 + lVar7);
  uVar3 = ((undefined8 *)(param_1 + lVar7))[1];
  puVar1 = (undefined8 *)(param_1 + 0x10 + lVar7);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  puVar1 = (undefined8 *)(param_1 + 0x20 + lVar7);
  uVar6 = puVar1[1];
  *(undefined8 *)(param_1 + 0x98) = *puVar1;
  *(undefined8 *)(param_1 + 0xa0) = uVar6;
  *(undefined8 *)(param_1 + 0x88) = uVar4;
  *(undefined8 *)(param_1 + 0x90) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  *(undefined8 *)(param_1 + 0x80) = uVar3;
  *(short *)(param_1 + 0x194) = (short)*param_2;
  return;
}

