/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140021f1a */

undefined8 *
FUN_140021f1a(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_14000b166(param_1,param_3);
  *param_1 = CLI::Error::vftable;
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 6) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 7) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar2;
  *(undefined4 *)(param_1 + 5) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_1400017de(param_2);
  FUN_1400017de(param_3);
  return param_1;
}

