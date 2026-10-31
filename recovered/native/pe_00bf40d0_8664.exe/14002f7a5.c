/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f7a5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14002f7a5(uint param_1,longlong *param_2,ushort *param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  byte bVar11;
  bool bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStackY_b8 [32];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  iVar3 = FUN_1400311b1(param_2,param_3);
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_2 + 0x22f);
    if ((uVar4 & 1) == 0) {
      iVar3 = FUN_140035c9f(param_2,*(int *)(param_4 + 0x4c),param_4 + 0x50,0);
      if (iVar3 != 0) goto LAB_14002f7e7;
      uVar4 = *(uint *)(param_2 + 0x22f);
    }
    uVar10 = 0;
    iVar5 = 0;
    if ((uVar4 & 2) == 0) {
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      puVar7 = (uint *)FUN_14001ccf2(param_1,*(longlong *)(param_4 + 0x38));
      auVar15 = _DAT_1400f4360;
      bVar2 = true;
      if ((puVar7 == (uint *)0x0) || (uVar4 = FUN_140035ce9(*puVar7), uVar4 == 0)) {
        bVar11 = 0;
        bVar12 = true;
      }
      else {
        bVar11 = (byte)(uVar4 >> 0xc) & 1;
        auVar14._0_4_ = -(uint)(_DAT_1400f4370 == (uVar4 & _DAT_1400f4370));
        auVar14._4_4_ = -(uint)(_UNK_1400f4374 == (uVar4 & _UNK_1400f4374));
        auVar14._8_4_ = -(uint)(_UNK_1400f4378 == (uVar4 & _UNK_1400f4378));
        auVar14._12_4_ = -(uint)(_UNK_1400f437c == (uVar4 & _UNK_1400f437c));
        auVar15._0_4_ = -(uint)((uVar4 & _DAT_1400f4380) == 0);
        auVar15._4_4_ = -(uint)((uVar4 & _UNK_1400f4384) == 0);
        auVar15._8_4_ = -(uint)((uVar4 & _UNK_1400f4388) == 0);
        auVar15._12_4_ = -(uint)((uVar4 & _UNK_1400f438c) == 0);
        auVar15 = packssdw(auVar14,auVar15);
        auVar13._0_4_ = -(uint)((uVar4 & _DAT_1400f4370) == 0);
        auVar13._4_4_ = -(uint)((uVar4 & _UNK_1400f4374) == 0);
        auVar13._8_4_ = -(uint)((uVar4 & _UNK_1400f4378) == 0);
        auVar13._12_4_ = -(uint)((uVar4 & _UNK_1400f437c) == 0);
        iVar3 = movmskps(uVar4,auVar13);
        bVar12 = iVar3 == 0xf;
        bVar2 = false;
      }
      if (!bVar12) {
        FUN_140035d23((longlong)param_2);
      }
      if ((auVar15._4_2_ & 1) != 0) {
        uVar8 = FUN_140035d88((longlong)param_2);
        iVar3 = (int)uVar8;
        iVar5 = FUN_140035de6((longlong)param_2,iVar3);
        iVar6 = FUN_140035f16((longlong)param_2,iVar3);
        FUN_140035f7c((longlong)param_2,*(int *)(param_2[7] + (longlong)iVar3 * 4),iVar5 + iVar6);
      }
      if ((auVar15._6_2_ & 1) != 0) {
        uVar8 = FUN_140035fd4((longlong)param_2);
        iVar3 = (int)uVar8;
        iVar5 = FUN_140036032((longlong)param_2,iVar3);
        iVar6 = FUN_140036162((longlong)param_2,iVar3);
        FUN_1400361c8((longlong)param_2,*(int *)(param_2[8] + (longlong)iVar3 * 4),iVar5 - iVar6);
      }
      if ((auVar15._0_4_ & 1) != 0) {
        uVar8 = FUN_140036228((longlong)param_2);
        FUN_140035de6((longlong)param_2,(int)uVar8);
        FUN_140035f16((longlong)param_2,(int)uVar8);
      }
      if ((auVar15._0_4_ >> 0x10 & 1) != 0) {
        uVar8 = FUN_140036278((longlong)param_2);
        FUN_140036032((longlong)param_2,(int)uVar8);
        FUN_140036162((longlong)param_2,(int)uVar8);
      }
      iVar3 = FUN_140035c9f(param_2,*(int *)(param_4 + 0x250),param_4 + 0x254,1);
      iVar5 = 0;
      if (!bVar2) {
        FUN_1400362c8((longlong)param_2,'\x01',&local_68,&local_70);
        iVar5 = 0;
        FUN_1400362c8((longlong)param_2,'\0',&local_78,&local_80);
        if (bVar11 == 0) {
          if (local_80 == 0 || local_78 == 0) {
            if (local_70 == 0 || local_68 == 0) {
              lVar9 = ((ulonglong)(uint)(*(int *)(param_4 + 0x40) << 2) / 10) *
                      (longlong)*(int *)(param_4 + 0x14);
              iVar5 = (int)((ulonglong)(lVar9 + (lVar9 >> 0x3f) + 0x8000) >> 0x10);
            }
            else {
              iVar5 = (*(int *)(local_68 + 0x10) - *(int *)(local_70 + 0x10)) / 2;
            }
          }
          else {
            iVar5 = ((*(int *)(local_78 + 0x10) - *(int *)(local_80 + 0x10)) * 2) / 3;
          }
        }
      }
      lVar1 = local_68;
      lVar9 = local_70;
      if (local_70 != 0 && local_68 != 0) {
        if ((auVar15._8_2_ & 1) == 0) {
          FUN_140036351((longlong)param_2,local_68,local_70);
        }
        if ((auVar15._10_2_ & 1) == 0) {
          FUN_140036382((longlong)param_2,lVar1,lVar9);
        }
      }
      lVar1 = local_78;
      lVar9 = local_80;
      if (local_80 != 0 && local_78 != 0) {
        if ((auVar15._12_2_ & 1) == 0) {
          FUN_140036351((longlong)param_2,local_78,local_80);
        }
        if ((auVar15._14_2_ & 1) == 0) {
          FUN_140036382((longlong)param_2,lVar1,lVar9);
        }
      }
      if (iVar3 != 0) goto LAB_14002f7e7;
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_4 + 0x30) + 0x10) + 1 +
                    (ulonglong)param_1 * 2) & 0x40) == 0) {
        FUN_1400363b3((longlong)param_2,param_4);
      }
    }
    bVar2 = true;
    do {
      bVar12 = bVar2;
      if (bVar12) {
        if ((*(uint *)(param_2 + 0x22f) & 1) == 0) goto LAB_14002fba8;
      }
      else {
        if ((*(uint *)(param_2 + 0x22f) & 2) != 0) break;
LAB_14002fba8:
        FUN_140036596((longlong)param_2,uVar10);
        FUN_140036dc4((longlong)param_2,uVar10);
        FUN_140032e63((longlong)param_2,uVar10);
        FUN_140033060((longlong)param_2,uVar10);
        FUN_140036e62((longlong)param_2,uVar10,param_1,iVar5,*(longlong *)(param_4 + 0x38));
      }
      uVar10 = 1;
      bVar2 = false;
    } while (bVar12);
    FUN_140033214((longlong)param_2,(longlong)param_3);
    iVar3 = 0;
  }
LAB_14002f7e7:
  if (DAT_14012ea80 != (local_60 ^ (ulonglong)auStackY_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_60 ^ (ulonglong)auStackY_b8);
  }
  return iVar3;
}

