/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033243e */

void FUN_14033243e(undefined8 param_1,undefined4 *param_2,longlong param_3)

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
  if ((*(byte *)(DAT_14062a630 + 0x2acd) & 4) != 0) {
    uVar6 = 0;
    uVar7 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      uVar7 = *puVar2;
    }
    if (puVar1 != (undefined4 *)0x0) {
      uVar6 = *puVar1;
    }
    FUN_14030f4ba(&DAT_14058eb46,uVar6,uVar7,*param_2);
  }
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  FUN_14034133a(param_2,param_3);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_1403322b6(param_2,puVar1);
    FUN_140332391(*puVar1,*param_2);
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_1403322b6(param_2,puVar2);
    FUN_140332391(*puVar2,*param_2);
  }
  FUN_140343447(param_2);
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
    FUN_140330626(param_1,puVar1);
  }
  if (puVar2 != (undefined4 *)0x0) {
    FUN_140330626(param_1,puVar2);
    return;
  }
  return;
}

