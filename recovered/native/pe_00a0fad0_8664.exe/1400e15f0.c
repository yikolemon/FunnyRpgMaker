/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400e15f0 */

undefined8 * FUN_1400e15f0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined1 local_68 [24];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_38 [48];
  
  *(undefined4 *)(param_1 + 1) = param_3;
  *param_1 = std::ctype<unsigned_short>::vftable;
  puVar12 = (undefined4 *)FUN_1400da3e0(local_68);
  uVar1 = puVar12[1];
  uVar2 = puVar12[2];
  uVar3 = puVar12[3];
  uVar4 = puVar12[4];
  uVar5 = puVar12[5];
  uVar6 = puVar12[6];
  uVar7 = puVar12[7];
  *(undefined4 *)(param_1 + 2) = *puVar12;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
  puVar13 = (undefined8 *)FUN_1400da4c0(local_38);
  uVar8 = puVar13[2];
  uVar9 = *(undefined8 *)((longlong)puVar13 + 0x1c);
  uVar10 = *(undefined8 *)((longlong)puVar13 + 0x24);
  uVar11 = puVar13[1];
  uStack_50 = (undefined4)puVar13[3];
  param_1[6] = *puVar13;
  param_1[7] = uVar11;
  uStack_4c = (undefined4)uVar9;
  param_1[8] = uVar8;
  param_1[9] = CONCAT44(uStack_4c,uStack_50);
  *(undefined8 *)((longlong)param_1 + 0x4c) = uVar9;
  *(undefined8 *)((longlong)param_1 + 0x54) = uVar10;
  return param_1;
}

