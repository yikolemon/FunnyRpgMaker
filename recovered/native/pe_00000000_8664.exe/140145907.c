/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145907 */

void FUN_140145907(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar7 = (longlong)*(int *)(param_1 + 5) * 4 + param_1[6];
  param_1[0x54] = lVar7;
  param_1[0x40] = lVar7 + (ulonglong)*(ushort *)(param_1 + 0x53) * 4;
  FUN_140128b39(param_1[2],param_1[0x44]);
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_3 + 0x84);
  uVar2 = *(undefined8 *)(param_3 + 0x6c);
  param_1[0x2f] = *(undefined8 *)(param_3 + 100);
  param_1[0x30] = uVar2;
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_3 + 0x74);
  puVar1 = *(undefined8 **)(param_3 + 0x40);
  uVar2 = puVar1[1];
  uVar3 = *(undefined8 *)((longlong)puVar1 + 0xc);
  uVar4 = *(undefined8 *)((longlong)puVar1 + 0x14);
  *(undefined8 *)((longlong)param_1 + 0x15c) = *puVar1;
  *(undefined8 *)((longlong)param_1 + 0x164) = uVar2;
  param_1[0x2d] = uVar3;
  param_1[0x2e] = uVar4;
  param_1[0x2a] = *(undefined8 *)(param_3 + 0x108);
  uVar2 = *(undefined8 *)(param_3 + 0xe0);
  uVar3 = *(undefined8 *)(param_3 + 0xe8);
  uVar4 = *(undefined8 *)(param_3 + 0xf0);
  uVar5 = *(undefined8 *)(param_3 + 0xf8);
  uVar6 = *(undefined8 *)(param_3 + 0x100);
  param_1[0x24] = *(undefined8 *)(param_3 + 0xd8);
  param_1[0x25] = uVar2;
  param_1[0x26] = uVar3;
  param_1[0x27] = uVar4;
  param_1[0x28] = uVar5;
  param_1[0x29] = uVar6;
  return;
}

