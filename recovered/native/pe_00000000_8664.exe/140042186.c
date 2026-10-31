/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140042186 */

undefined8 * FUN_140042186(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  *(undefined4 *)(param_1 + 2) = param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)param_1 = uVar1;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0xf;
  *(undefined1 *)param_2 = 0;
  FUN_140004bf8(param_1 + 4,0);
  return param_1;
}

