/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018dff6 */

undefined8 *
FUN_18018dff6(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 *puVar7;
  
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar2 = 0;
  puVar7 = param_1;
  FUN_1802a89a0(param_1,0,0x238,param_4,param_1,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  fVar5 = DAT_1802df114;
  fVar1 = DAT_1802dc410;
  do {
    fVar6 = (((float)(int)lVar2 + (float)(int)lVar2) * fVar5) / fVar1;
    uVar3 = FUN_18028a830(fVar6);
    uVar4 = FUN_180284590(fVar6);
    *(undefined4 *)(param_1 + lVar2 + 0xe) = uVar4;
    *(undefined4 *)((longlong)param_1 + lVar2 * 8 + 0x74) = uVar3;
    fVar6 = DAT_1802df114;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x30);
  fVar1 = *(float *)((longlong)param_1 + 0x2c);
  fVar5 = (float)FUN_180102463(DAT_1802dc410,DAT_1802df114);
  fVar5 = (float)FUN_180284590(fVar6 / fVar5);
  *(float *)(puVar7 + 0x3e) = fVar1 / (DAT_1802ac570 - fVar5);
  return puVar7;
}

