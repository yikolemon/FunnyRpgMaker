/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180206222 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_180206222(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
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
  undefined4 local_750;
  undefined4 local_748;
  undefined1 local_72b;
  longlong local_728;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int local_e4;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_7f8;
  lVar8 = *(longlong *)(param_1 + 8);
  iVar4 = 6;
  if (param_3 < *(uint *)(lVar8 + 0x10)) {
    lVar2 = *(longlong *)(lVar8 + 0xe0);
    uVar3 = param_4 | 3;
    if ((param_4 >> 10 & 1) == 0) {
      uVar3 = param_4;
    }
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x20);
    *(bool *)(param_1 + 0xf8) = (uVar3 & 3) == 0;
    *(byte *)(param_1 + 0xf9) = (byte)(uVar3 & 1) ^ 1;
    local_7c8 = (uVar3 & 3) == 0;
    local_7c0 = uVar3 >> 0x10 & 0xf;
    local_7b8 = FUN_180207b2c;
    local_7d8 = (undefined1  [16])0x0;
    iVar4 = (*(code *)**(undefined8 **)(lVar2 + 0x18))(local_788,lVar8,param_2,param_1);
    if (iVar4 == 0) {
      local_72b = (undefined1)((uVar3 & 0x400) >> 10);
      local_7ac = uVar3 & 1;
      iVar4 = FUN_180207b2c(local_788,param_3);
      if (iVar4 == 0) {
        local_7ae = *(char *)(param_1 + 0xf8);
        local_7ad = *(char *)(param_1 + 0xf9);
        local_798 = local_f8;
        uStack_790 = uStack_f0;
        (**(code **)(*(longlong *)(lVar2 + 0x18) + 8))();
        if ((uVar3 & 0x400) == 0) {
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          uVar5 = *(uint *)(param_1 + 0xb8) & 1;
          *(uint *)(param_1 + 0xb8) = uVar5 + 4;
          if (*(ushort *)(param_2 + 0x1a) < 0x18) {
            *(uint *)(param_1 + 0xb8) = uVar5 | 0x104;
          }
          lVar2 = param_1 + 0x98;
          iVar4 = FUN_1801cf464(local_748);
          *(int *)(param_1 + 0x40) = iVar4 >> 0x10;
          iVar4 = FUN_1801cf464();
          uVar5 = local_7ac;
          *(int *)(param_1 + 0x50) = iVar4 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          iVar4 = *(int *)(lVar8 + 0x154) - *(int *)(lVar8 + 0x14c) >> 0x10;
          *(int *)(param_1 + 0x4c) = iVar4;
          *(int *)(param_1 + 0x54) = iVar4;
          auVar9._0_4_ = -(uint)((int)local_798 == _DAT_1803296e0);
          auVar9._4_4_ = -(uint)(local_798._4_4_ == _UNK_1803296e4);
          auVar9._8_4_ = -(uint)((int)uStack_790 == _UNK_1803296e8);
          auVar9._12_4_ = -(uint)(uStack_790._4_4_ == _UNK_1803296ec);
          iVar7 = movmskps(local_748,auVar9);
          if (iVar7 != 0xf) {
            FUN_1801cb555(lVar2,&local_798);
            lVar8 = (longlong)*(int *)(param_1 + 0x40) * (longlong)(int)local_798;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
            lVar8 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)uStack_790._4_4_;
            iVar4 = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
            *(int *)(param_1 + 0x4c) = iVar4;
          }
          if (local_e8 != 0 || local_e4 != 0) {
            FUN_1801cb5a0(lVar2,local_e8,local_e4);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + local_e8;
            iVar4 = local_e4 + *(int *)(param_1 + 0x4c);
            *(int *)(param_1 + 0x4c) = iVar4;
          }
          if ((uVar5 == 0) || (local_7ad != '\0')) {
            iVar7 = *(int *)(param_1 + 0xfc);
            iVar1 = *(int *)(param_1 + 0x100);
            if ((local_7ae == '\0') || (local_728 == 0)) {
              if (*(ushort *)(local_768 + 2) != 0) {
                piVar6 = *(int **)(local_768 + 8);
                uVar5 = *(ushort *)(local_768 + 2) + 1;
                do {
                  lVar8 = (longlong)*piVar6 * (longlong)iVar7;
                  *piVar6 = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
                  lVar8 = (longlong)piVar6[1] * (longlong)iVar1;
                  piVar6[1] = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
                  piVar6 = piVar6 + 2;
                  uVar5 = uVar5 - 1;
                } while (1 < uVar5);
                iVar4 = *(int *)(param_1 + 0x4c);
              }
            }
            lVar8 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar7;
            *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
            lVar8 = (longlong)iVar4 * (longlong)iVar1;
            *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
          }
          FUN_1801caa83(lVar2,&local_7a8);
          *(ulonglong *)(param_1 + 0x30) = CONCAT44(iStack_79c - iStack_7a4,local_7a0 - local_7a8);
          *(ulonglong *)(param_1 + 0x38) = CONCAT44(iStack_79c,local_7a8);
          if ((uVar3 & 0x10) != 0) {
            FUN_1801cc280(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar8 = *(longlong *)(param_1 + 0xf0);
          iVar4 = FUN_1801cf464(local_750);
          *(int *)(param_1 + 0x38) = iVar4 >> 0x10;
          iVar4 = FUN_1801cf464(local_748);
          *(int *)(param_1 + 0x40) = iVar4 >> 0x10;
          *(undefined8 *)(lVar8 + 0x10) = local_798;
          *(undefined8 *)(lVar8 + 0x18) = uStack_790;
          *(int *)(lVar8 + 0x20) = local_e8;
          *(int *)(lVar8 + 0x24) = local_e4;
          *(undefined1 *)(lVar8 + 0xc) = 1;
        }
        iVar4 = 0;
      }
      else {
        (**(code **)(*(longlong *)(lVar2 + 0x18) + 8))(local_788);
      }
    }
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_7f8)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_7f8);
}

