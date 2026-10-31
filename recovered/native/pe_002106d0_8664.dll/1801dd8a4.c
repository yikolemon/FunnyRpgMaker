/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801dd8a4 */

longlong FUN_1801dd8a4(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_180003216();
  FUN_1800181b0(param_1 + 0x20,param_2 + 0x20,param_3,param_4,param_1 + 0x20);
  FUN_1800181b0(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0xa0) = *(undefined1 *)(param_2 + 0xa0);
  FUN_1801ddc1a(param_1 + 0xa8,param_2 + 0xa8);
  FUN_1801ddc1a(param_1 + 0xf0,param_2 + 0xf0);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_2 + 0x158);
  uVar1 = *(undefined4 *)(param_2 + 0x138);
  uVar2 = *(undefined4 *)(param_2 + 0x13c);
  uVar3 = *(undefined4 *)(param_2 + 0x140);
  uVar4 = *(undefined4 *)(param_2 + 0x144);
  uVar5 = *(undefined4 *)(param_2 + 0x14c);
  uVar6 = *(undefined4 *)(param_2 + 0x150);
  uVar7 = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar5;
  *(undefined4 *)(param_1 + 0x150) = uVar6;
  *(undefined4 *)(param_1 + 0x154) = uVar7;
  *(undefined4 *)(param_1 + 0x138) = uVar1;
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  *(undefined4 *)(param_1 + 0x140) = uVar3;
  *(undefined4 *)(param_1 + 0x144) = uVar4;
  FUN_1801ddc1a(param_1 + 0x160,param_2 + 0x160);
  return param_1;
}

