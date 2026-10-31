/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180042d2a */

undefined4 *
FUN_180042d2a(undefined4 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  
  uVar13 = 0xfffffffffffffffe;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0xffffffff;
  *param_1 = 2;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  puVar10 = param_1 + 0x16;
  puVar11 = param_1;
  FUN_180044980(param_2);
  puVar12 = param_2;
  pbVar9 = (byte *)FUN_1800188ac(param_2 + 0x14);
  bVar1 = *pbVar9;
  pbVar9 = (byte *)FUN_1800188ac(param_1 + 0x14);
  LOCK();
  *pbVar9 = bVar1 & 1;
  UNLOCK();
  uVar2 = param_2[0x16];
  uVar3 = param_2[0x17];
  uVar4 = param_2[0x18];
  uVar5 = param_2[0x19];
  uVar6 = param_2[0x1b];
  uVar7 = param_2[0x1c];
  uVar8 = param_2[0x1d];
  param_1[0x1a] = param_2[0x1a];
  param_1[0x1b] = uVar6;
  param_1[0x1c] = uVar7;
  param_1[0x1d] = uVar8;
  param_1[0x16] = uVar2;
  param_1[0x17] = uVar3;
  param_1[0x18] = uVar4;
  param_1[0x19] = uVar5;
  if (param_1 != param_2) {
    FUN_180042ea0(param_1 + 0x1e,*(longlong *)(puVar12 + 0x1e),
                  (*(longlong *)(puVar12 + 0x20) - *(longlong *)(puVar12 + 0x1e) >> 7) *
                  -0x5555555555555555,param_4,puVar10,puVar11,puVar12,uVar13);
  }
  FUN_18023d6e0(puVar12);
  return param_1;
}

