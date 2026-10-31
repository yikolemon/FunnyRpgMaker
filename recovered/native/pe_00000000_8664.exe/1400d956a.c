/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d956a */

undefined8 *
FUN_1400d956a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1401c5830(param_1,0,0x238,param_4,param_1,0xfffffffffffffffe);
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  fVar5 = DAT_140e8c6d0;
  fVar1 = DAT_140211e84;
  do {
    fVar6 = (((float)(int)lVar2 + (float)(int)lVar2) * fVar1) / fVar5;
    uVar3 = FUN_1401a86e0(fVar6);
    uVar4 = FUN_1401a27d0(fVar6);
    *(undefined4 *)(param_1 + lVar2 + 0xe) = uVar4;
    *(undefined4 *)((longlong)param_1 + lVar2 * 8 + 0x74) = uVar3;
    fVar6 = DAT_140211e84;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x30);
  fVar1 = *(float *)((longlong)param_1 + 0x2c);
  fVar5 = (float)FUN_14007b71f(DAT_140e8c6d0,DAT_140211e84);
  fVar5 = (float)FUN_1401a27d0(fVar6 / fVar5);
  *(float *)(puVar7 + 0x3e) = fVar1 / (DAT_1401c86c8 - fVar5);
  return puVar7;
}

