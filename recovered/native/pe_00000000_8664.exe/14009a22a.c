/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14009a22a */

void FUN_14009a22a(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  puVar1 = *(undefined4 **)(param_2 + 8);
  puVar2 = *(undefined4 **)(param_2 + 10);
  if ((*(byte *)(DAT_140f2a910 + 0x2acd) & 4) != 0) {
    uVar6 = 0;
    uVar7 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar7 = *puVar2;
    }
    if (puVar1 != (undefined4 *)0x0) {
      uVar6 = *puVar1;
    }
    FUN_1400772a6("[docking] DockNodeTreeMerge: 0x%08X + 0x%08X back into parent 0x%08X\n",uVar6,
                  uVar7,*param_2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  FUN_1400a8d9a(param_2,param_3);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_14009a0a2(param_2,puVar1);
    FUN_14009a17d(*puVar1,*param_2);
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_14009a0a2(param_2,puVar2);
    FUN_14009a17d(*puVar2,*param_2);
  }
  FUN_1400aaea7(param_2);
  param_2[0x34] = param_2[0x34] & 0xfffffe00;
  uVar4 = param_2[2] & 0xfffc078f;
  *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_3 + 0x98);
  *(undefined8 *)(param_2 + 0x16) = uVar3;
  param_2[2] = uVar4;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = uVar4 | puVar1[2] & 0x3f870;
  }
  param_2[2] = uVar4;
  if (puVar2 != (undefined4 *)0x0) {
    uVar4 = uVar4 | puVar2[2] & 0x3f870;
  }
  param_2[2] = uVar4;
  if (puVar1 == (undefined4 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puVar1[3];
  }
  if (puVar2 != (undefined4 *)0x0) {
    uVar5 = uVar5 | puVar2[3];
  }
  param_2[3] = uVar5;
  param_2[4] = uVar4 | param_2[1] | uVar5;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_140098412(param_1,puVar1);
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_140098412(param_1,puVar2);
    return;
  }
  return;
}

