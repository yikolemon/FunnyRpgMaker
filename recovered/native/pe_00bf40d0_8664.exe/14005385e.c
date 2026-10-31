/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005385e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14005385e(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_7f8 [32];
  undefined1 local_7d8 [16];
  undefined1 local_7c8;
  uint local_7c0;
  code *local_7b8;
  char local_7ae;
  char local_7ad;
  uint local_7ac;
  int local_7a8;
  int iStack_7a4;
  int local_7a0;
  int iStack_79c;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined1 local_788 [32];
  longlong local_768;
  int local_750;
  int local_748;
  undefined1 local_72b;
  longlong local_728;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int local_e4;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_7f8;
  lVar9 = *(longlong *)(param_1 + 8);
  iVar3 = 6;
  if (param_3 < *(uint *)(lVar9 + 0x10)) {
    lVar2 = *(longlong *)(lVar9 + 0xe0);
    uVar6 = param_4 | 3;
    if ((param_4 >> 10 & 1) == 0) {
      uVar6 = param_4;
    }
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x20);
    *(bool *)(param_1 + 0xf8) = (uVar6 & 3) == 0;
    *(byte *)(param_1 + 0xf9) = (byte)(uVar6 & 1) ^ 1;
    local_7c8 = (uVar6 & 3) == 0;
    local_7c0 = uVar6 >> 0x10 & 0xf;
    local_7b8 = FUN_140055168;
    local_7d8 = (undefined1  [16])0x0;
    iVar3 = (*(code *)**(undefined8 **)(lVar2 + 0x18))(local_788,lVar9,param_2,param_1);
    if (iVar3 == 0) {
      local_72b = (undefined1)((uVar6 & 0x400) >> 10);
      local_7ac = uVar6 & 1;
      iVar3 = FUN_140055168((longlong)local_788,param_3);
      if (iVar3 == 0) {
        local_7ae = *(char *)(param_1 + 0xf8);
        local_7ad = *(char *)(param_1 + 0xf9);
        local_798 = local_f8;
        uStack_790 = uStack_f0;
        (**(code **)(*(longlong *)(lVar2 + 0x18) + 8))();
        if ((uVar6 & 0x400) == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          uVar4 = *(uint *)(param_1 + 0xb8) & 1;
          *(uint *)(param_1 + 0xb8) = uVar4 + 4;
          if (*(ushort *)(param_2 + 0x1a) < 0x18) {
            *(uint *)(param_1 + 0xb8) = uVar4 | 0x104;
          }
          lVar2 = param_1 + 0x98;
          uVar4 = FUN_140021867(local_748);
          *(int *)(param_1 + 0x40) = (int)uVar4 >> 0x10;
          uVar5 = FUN_140021867(local_748);
          uVar4 = local_7ac;
          *(int *)(param_1 + 0x50) = (int)uVar5 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          iVar3 = *(int *)(lVar9 + 0x154) - *(int *)(lVar9 + 0x14c) >> 0x10;
          *(int *)(param_1 + 0x4c) = iVar3;
          *(int *)(param_1 + 0x54) = iVar3;
          auVar10._0_4_ = -(uint)((int)local_798 == _DAT_1400e6830);
          auVar10._4_4_ = -(uint)(local_798._4_4_ == _UNK_1400e6834);
          auVar10._8_4_ = -(uint)((int)uStack_790 == _UNK_1400e6838);
          auVar10._12_4_ = -(uint)(uStack_790._4_4_ == _UNK_1400e683c);
          iVar8 = movmskps(local_748,auVar10);
          if (iVar8 != 0xf) {
            FUN_14001df2d(lVar2,(int *)&local_798);
            lVar9 = (longlong)*(int *)(param_1 + 0x40) * (longlong)(int)local_798;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
            lVar9 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)uStack_790._4_4_;
            iVar3 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
            *(int *)(param_1 + 0x4c) = iVar3;
          }
          if (local_e8 != 0 || local_e4 != 0) {
            FUN_14001df78(lVar2,local_e8,local_e4);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + local_e8;
            iVar3 = local_e4 + *(int *)(param_1 + 0x4c);
            *(int *)(param_1 + 0x4c) = iVar3;
          }
          if ((uVar4 == 0) || (local_7ad != '\0')) {
            iVar8 = *(int *)(param_1 + 0xfc);
            iVar1 = *(int *)(param_1 + 0x100);
            if ((local_7ae == '\0') || (local_728 == 0)) {
              if (*(ushort *)(local_768 + 2) != 0) {
                piVar7 = *(int **)(local_768 + 8);
                uVar4 = *(ushort *)(local_768 + 2) + 1;
                do {
                  lVar9 = (longlong)*piVar7 * (longlong)iVar8;
                  *piVar7 = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
                  lVar9 = (longlong)piVar7[1] * (longlong)iVar1;
                  piVar7[1] = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
                  piVar7 = piVar7 + 2;
                  uVar4 = uVar4 - 1;
                } while (1 < uVar4);
                iVar3 = *(int *)(param_1 + 0x4c);
              }
            }
            lVar9 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar8;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
            lVar9 = (longlong)iVar3 * (longlong)iVar1;
            *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
          }
          FUN_14001d45b(lVar2,&local_7a8);
          *(ulonglong *)(param_1 + 0x30) = CONCAT44(iStack_79c - iStack_7a4,local_7a0 - local_7a8);
          *(ulonglong *)(param_1 + 0x38) = CONCAT44(iStack_79c,local_7a8);
          if ((uVar6 & 0x10) != 0) {
            FUN_14001ebdb(param_1 + 0x30,*(int *)(param_1 + 0x4c));
          }
        }
        else {
          lVar9 = *(longlong *)(param_1 + 0xf0);
          uVar6 = FUN_140021867(local_750);
          *(int *)(param_1 + 0x38) = (int)uVar6 >> 0x10;
          uVar6 = FUN_140021867(local_748);
          *(int *)(param_1 + 0x40) = (int)uVar6 >> 0x10;
          *(undefined8 *)(lVar9 + 0x10) = local_798;
          *(undefined8 *)(lVar9 + 0x18) = uStack_790;
          *(int *)(lVar9 + 0x20) = local_e8;
          *(int *)(lVar9 + 0x24) = local_e4;
          *(undefined1 *)(lVar9 + 0xc) = 1;
        }
        iVar3 = 0;
      }
      else {
        (**(code **)(*(longlong *)(lVar2 + 0x18) + 8))(local_788);
      }
    }
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_7f8)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_7f8);
}

