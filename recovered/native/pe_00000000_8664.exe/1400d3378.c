/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d3378 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d3378(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar5;
  undefined1 auVar4 [16];
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_e8 [40];
  float local_c0;
  undefined1 local_bc [16];
  float local_ac;
  undefined1 local_a8 [16];
  ulonglong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_7c [16];
  undefined4 local_6c;
  undefined1 auStack_68 [12];
  undefined1 local_5c [16];
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  ulonglong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_e8;
  puVar2 = (undefined8 *)FUN_1400d30d4();
  local_40 = 0;
  fVar8 = (float)*(undefined8 *)(param_1 + 0x28);
  iVar6 = (int)fVar8;
  fVar3 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  iVar7 = (int)fVar3;
  local_38 = CONCAT44((int)(fVar3 - _UNK_140e82124),(int)(fVar8 - _DAT_140e82120)) &
             CONCAT44(iVar7 >> 0x1f,iVar6 >> 0x1f) | CONCAT44(iVar7,iVar6);
  uStack_30 = DAT_140211150;
  plVar1 = (longlong *)*puVar2;
  (**(code **)(*plVar1 + 0x178))(plVar1);
  (**(code **)(*plVar1 + 0x358))(plVar1,0);
  (**(code **)(*plVar1 + 0x2e0))(plVar1,0);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,8,3);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,9,2);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0xe,0);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0xf,0);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x16,1);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,7,0);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x1b,1);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0xab,1);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x13,5);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x14,6);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0xce,1);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0xcf,2);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0xd0,6);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0xae,1);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x1c,0);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x30,0);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x1d,0);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x34,0);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x88,1);
  (**(code **)(*plVar1 + 0x1c8))(plVar1,0x89,0);
  (**(code **)(*plVar1 + 0x218))(plVar1,0,1,4);
  (**(code **)(*plVar1 + 0x218))(plVar1,0,2,2);
  (**(code **)(*plVar1 + 0x218))(plVar1,0,3,0);
  (**(code **)(*plVar1 + 0x218))(plVar1,0,4,4);
  (**(code **)(*plVar1 + 0x218))(plVar1,0,5,2);
  (**(code **)(*plVar1 + 0x218))(plVar1,0,6,0);
  (**(code **)(*plVar1 + 0x218))(plVar1,1,1,1);
  (**(code **)(*plVar1 + 0x218))(plVar1,1,4,1);
  (**(code **)(*plVar1 + 0x228))(plVar1,0,6,2);
  (**(code **)(*plVar1 + 0x228))(plVar1,0,5,2);
  (**(code **)(*plVar1 + 0x228))(plVar1,0,1,3);
  (**(code **)(*plVar1 + 0x228))(plVar1,0,2,3);
  local_4c = 0;
  local_7c = (undefined1  [16])0x0;
  local_80 = 0x3f800000;
  auStack_68 = SUB1612((undefined1  [16])0x0,4);
  local_6c = 0x3f800000;
  local_5c = ZEXT816(0x3f80000000000000);
  local_44 = 0x3f800000;
  local_bc = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (ulonglong)DAT_1401c86a0;
  fVar8 = (float)*(undefined8 *)(param_1 + 0x20);
  fVar9 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  fVar3 = fVar8 + (float)DAT_1401c8640;
  fVar5 = fVar9 + DAT_1401c8640._4_4_;
  fVar8 = (float)*(undefined8 *)(param_1 + 0x28) + fVar8 + (float)DAT_1401c8640;
  fVar9 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + fVar9 + DAT_1401c8640._4_4_;
  local_c0 = DAT_1402113a0 / (fVar8 - fVar3);
  auVar10._0_4_ = fVar3 + fVar8;
  auVar10._4_4_ = fVar5 + fVar9;
  auVar10._8_4_ = _UNK_1401c8648 + 0.0 + _UNK_1401c8648 + 0.0;
  auVar10._12_4_ = _UNK_1401c864c + 0.0 + _UNK_1401c864c + 0.0;
  auVar11._0_4_ = fVar3 - fVar8;
  auVar4._4_4_ = fVar5 - fVar9;
  auVar4._0_4_ = auVar11._0_4_;
  local_ac = DAT_1402113a0 / (fVar5 - fVar9);
  auVar4._8_4_ = auVar4._4_4_;
  auVar4._12_4_ = fVar9;
  auVar11._8_8_ = auVar4._8_8_;
  auVar11._4_4_ = fVar9 - fVar5;
  auVar11 = divps(auVar10,auVar11);
  local_90 = auVar11._0_8_;
  uStack_88 = DAT_140211600;
  (**(code **)(*plVar1 + 0x160))(plVar1,0x100,&local_80);
  (**(code **)(*plVar1 + 0x160))(plVar1,2,&local_80);
  (**(code **)(*plVar1 + 0x160))(plVar1,3,&local_c0);
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_e8);
}

