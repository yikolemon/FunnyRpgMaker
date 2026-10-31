/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008f1e5 */

undefined8 *
thunk_FUN_14008f1ea(undefined8 *param_1,undefined8 param_2,undefined2 *param_3,undefined2 *param_4,
                   undefined8 param_5,undefined8 *param_6,uint param_7)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [16];
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined2 *puStack_a0;
  undefined2 *puStack_98;
  undefined8 uStack_70;
  undefined8 auStack_68 [2];
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  undefined4 uVar8;
  
  uStack_48 = 0xfffffffffffffffe;
  puStack_50 = param_1;
  FUN_14008f3d0(auStack_c8);
  uVar4 = 0;
  uVar6 = param_7;
  while( true ) {
    puVar7 = param_3;
    cVar3 = FUN_14008f43f(param_3,param_4,auStack_c8,param_5,uVar4 | uVar6,param_3);
    puVar2 = puStack_98;
    uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20);
    if (cVar3 == '\0') break;
    puVar1 = puStack_a0;
    if ((param_7 >> 0xb & 1) == 0) {
      for (; uVar8 = (undefined4)((ulonglong)puVar7 >> 0x20), puVar1 != puVar2; puVar1 = puVar1 + 1)
      {
        FUN_1400089b8(param_2,*puVar1);
      }
    }
    puVar5 = param_6;
    if (7 < (ulonglong)param_6[3]) {
      puVar5 = (undefined8 *)*param_6;
    }
    FUN_14008f6d0(auStack_c8,&uStack_58,param_2,puVar5,(longlong)puVar5 + param_6[2] * 2,
                  CONCAT44(uVar8,uVar6));
    puVar5 = puStack_b8 + 1;
    if (puStack_b0 == puStack_b8) {
      puVar5 = auStack_68;
    }
    param_3 = (undefined2 *)*puVar5;
    param_2 = uStack_58;
    if (((param_7 >> 0xc & 1) != 0) || (param_3 == param_4)) break;
    puVar5 = puStack_b8;
    if (puStack_b0 == puStack_b8) {
      puVar5 = &uStack_70;
    }
    if ((undefined2 *)*puVar5 != param_3) {
      uVar6 = uVar6 | 0x100;
    }
    uVar4 = (uint)((undefined2 *)*puVar5 == param_3) << 0xd;
  }
  if ((param_7 >> 0xb & 1) == 0) {
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      FUN_1400089b8(param_2,*param_3);
    }
  }
  *puStack_50 = param_2;
  FUN_140016e5c(&puStack_b8);
  return puStack_50;
}

