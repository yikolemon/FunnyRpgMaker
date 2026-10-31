/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d4dd3 */

void FUN_1400d4dd3(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  float **local_90;
  undefined4 local_88;
  undefined4 local_84;
  float *local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1400d30d4();
  local_60 = DAT_140211150;
  uStack_68 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) *
                       (float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20),
                       (float)*(undefined8 *)(param_1 + 0x30) *
                       (float)*(undefined8 *)(param_1 + 0x28));
  local_70 = 0;
  (**(code **)(*param_2 + 0x160))(param_2,1);
  local_90 = local_80;
  local_98 = (undefined4 *)((ulonglong)local_98._4_4_ << 0x20);
  iVar1 = (**(code **)(*param_2 + 0x70))(param_2,*(undefined8 *)(lVar2 + 0x38),0,4);
  if (iVar1 == 0) {
    fVar3 = (float)*(undefined8 *)(param_1 + 0x20);
    fVar4 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
    fVar5 = (float)*(undefined8 *)(param_1 + 0x28) + fVar3;
    fVar6 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20) + fVar4;
    fVar9 = DAT_1402113a0 / (fVar4 - fVar6);
    auVar7._0_4_ = fVar3 + fVar5;
    auVar7._4_4_ = fVar4 + fVar6;
    auVar7._8_8_ = 0;
    auVar8._4_4_ = fVar6 - fVar4;
    auVar8._0_4_ = fVar3 - fVar5;
    auVar8._8_8_ = 0;
    auVar8 = divps(auVar7,auVar8);
    *local_80[0] = DAT_1402113a0 / (fVar5 - fVar3);
    local_80[0][1] = 0.0;
    local_80[0][2] = 0.0;
    local_80[0][3] = 0.0;
    local_80[0][4] = 0.0;
    local_80[0][5] = fVar9;
    local_80[0][6] = 0.0;
    local_80[0][7] = 0.0;
    local_80[0][8] = 0.0;
    local_80[0][9] = 0.0;
    local_80[0][10] = DAT_1401c86a0;
    local_80[0][0xb] = 0.0;
    local_80[0][0xc] = auVar8._0_4_;
    local_80[0][0xd] = auVar8._4_4_;
    *(undefined8 *)(local_80[0] + 0xe) = DAT_140211600;
    (**(code **)(*param_2 + 0x78))(param_2,*(undefined8 *)(lVar2 + 0x38),0);
  }
  local_84 = 0x14;
  local_88 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,*(undefined8 *)(lVar2 + 0x30));
  local_98 = &local_84;
  local_90 = (float **)&local_88;
  (**(code **)(*param_2 + 0x90))(param_2,0,1,lVar2 + 0x18);
  (**(code **)(*param_2 + 0x98))(param_2,*(undefined8 *)(lVar2 + 0x20),0x39,0);
  (**(code **)(*param_2 + 0xc0))(param_2,4);
  (**(code **)(*param_2 + 0x58))(param_2,*(undefined8 *)(lVar2 + 0x28),0,0);
  (**(code **)(*param_2 + 0x38))(param_2,0,1,(undefined8 *)(lVar2 + 0x38));
  (**(code **)(*param_2 + 0x48))(param_2,*(undefined8 *)(lVar2 + 0x40),0,0);
  (**(code **)(*param_2 + 0x50))(param_2,0,1,lVar2 + 0x48);
  (**(code **)(*param_2 + 0xb8))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x1e0))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x200))(param_2,0,0,0);
  (**(code **)(*param_2 + 0x228))(param_2,0,0,0);
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_2 + 0x118))(param_2,*(undefined8 *)(lVar2 + 0x60),&local_58,0xffffffff);
  (**(code **)(*param_2 + 0x120))(param_2,*(undefined8 *)(lVar2 + 0x68),0);
  (**(code **)(*param_2 + 0x158))(param_2,*(undefined8 *)(lVar2 + 0x58));
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_b8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_b8);
}

