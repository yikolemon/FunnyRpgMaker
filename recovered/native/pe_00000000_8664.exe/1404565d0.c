/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404565d0 */

undefined8 * FUN_1404565d0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38 [48];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = &DAT_1404ca0d8;
  puVar5 = (undefined8 *)FUN_14044e840(local_38);
  uVar1 = puVar5[2];
  uVar2 = *(undefined8 *)((longlong)puVar5 + 0x1c);
  uVar3 = *(undefined8 *)((longlong)puVar5 + 0x24);
  uVar4 = puVar5[1];
  uStack_50 = (undefined4)puVar5[3];
  param_1[2] = *puVar5;
  param_1[3] = uVar4;
  uStack_4c = (undefined4)uVar2;
  param_1[4] = uVar1;
  param_1[5] = CONCAT44(uStack_4c,uStack_50);
  *(undefined8 *)((longlong)param_1 + 0x2c) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x34) = uVar3;
  return param_1;
}

