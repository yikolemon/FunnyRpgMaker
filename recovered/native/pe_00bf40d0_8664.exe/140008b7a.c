/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140008b7a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140008b7a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             ushort param_5,double param_6)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  byte *pbVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  double dVar9;
  ulonglong uVar10;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98 [2];
  undefined8 *local_90;
  undefined1 local_88 [16];
  longlong local_78;
  ulonglong local_70;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_88 = (undefined1  [16])0x0;
  local_78 = 0;
  local_70 = 0xf;
  uVar7 = *(uint *)(param_4 + 0x18) & 0x3000;
  uVar10 = 0xffffffffffffffff;
  if (uVar7 != 0x3000) {
    uVar10 = *(ulonglong *)(param_4 + 0x20);
  }
  uVar4 = uVar10;
  local_90 = param_3;
  uVar2 = FUN_14000a409(uVar10,uVar7);
  lVar6 = (longlong)(int)uVar2;
  dVar9 = ABS(param_6);
  if ((((ulonglong)dVar9 < 0x7ff0000000000000) &&
      (_DAT_1400b6b10 < (double)(_DAT_1400b6b00 & (ulonglong)param_6))) && (uVar7 == 0x2000)) {
    local_98[0] = 0;
    FUN_140098f30(uVar4,local_98);
    iVar3 = -local_98[0];
    if (-local_98[0] < 0) {
      iVar3 = local_98[0];
    }
    lVar6 = lVar6 + (ulonglong)((uint)(iVar3 * 0x7597) >> 5) / 0xc35;
  }
  FUN_140003ed0((undefined8 *)local_88,lVar6 + 0x32,0);
  uVar7 = *(uint *)(param_4 + 0x18) & 0xffffffef;
  if ((ulonglong)dVar9 < 0x7ff0000000000000) {
    uVar7 = *(uint *)(param_4 + 0x18);
  }
  FUN_14000a42e(param_1,(undefined1 *)local_98,'L',uVar7);
  puVar8 = (undefined8 *)local_88;
  if (0xf < local_70) {
    puVar8 = (undefined8 *)local_88._0_8_;
  }
  uVar7 = FUN_140009707((undefined1 *)puVar8,local_78,(longlong)local_98,uVar10 & 0xffffffff);
  if ((int)uVar7 < 0) {
    uVar1 = local_90[1];
    *param_2 = *local_90;
    param_2[1] = uVar1;
  }
  else {
    if (local_70 < 0x10) {
      pbVar5 = local_88;
    }
    else {
      pbVar5 = (byte *)local_88._0_8_;
    }
    local_a8 = *local_90;
    uStack_a0 = local_90[1];
    FUN_14000a492(param_1,(undefined1 *)param_2,(undefined1 *)&local_a8,param_4,param_5,pbVar5,
                  (ulonglong)uVar7,(ulonglong)dVar9 < 0x7ff0000000000000);
  }
  FUN_1400021ea((longlong *)local_88);
  return param_2;
}

