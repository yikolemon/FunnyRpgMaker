/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047fdc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140047fdc(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_818 [32];
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined1 local_7e8;
  uint local_7e0;
  code *local_7d8;
  char local_7cd;
  uint local_7cc;
  int local_7c8;
  int iStack_7c4;
  int local_7c0;
  int iStack_7bc;
  undefined8 local_7b8;
  undefined4 local_7b0;
  undefined8 local_7a8;
  undefined8 uStack_7a0;
  char local_789;
  undefined1 local_788 [32];
  longlong local_768;
  int local_750;
  int local_748;
  int local_744;
  undefined1 local_72b;
  longlong local_728;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  int local_e8;
  int local_e4;
  undefined8 local_68;
  undefined4 local_60;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_818;
  lVar3 = *(longlong *)(param_1 + 8);
  local_789 = '\0';
  puVar4 = *(undefined8 **)(*(longlong *)(lVar3 + 0x2a0) + 0x18);
  if ((param_3 < *(uint *)(lVar3 + 0x10)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x50) != 0)) {
    uVar10 = param_4 | 3;
    if ((param_4 >> 10 & 1) == 0) {
      uVar10 = param_4;
    }
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0x10000;
      uVar6 = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
      uVar6 = *(undefined4 *)(param_2 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x100) = uVar6;
    *(bool *)(param_1 + 0xf8) = (uVar10 & 3) == 0;
    *(byte *)(param_1 + 0xf9) = (byte)(uVar10 & 1) ^ 1;
    local_7f8 = *(undefined8 *)(lVar3 + 0x248);
    local_7f0 = *(undefined8 *)(lVar3 + 0x2e0);
    local_7e8 = (uVar10 & 3) == 0;
    local_7e0 = uVar10 >> 0x10 & 0xf;
    local_7d8 = FUN_140049fcf;
    iVar7 = (*(code *)*puVar4)(local_788,lVar3,param_2,param_1);
    if (iVar7 == 0) {
      local_72b = (undefined1)((uVar10 & 0x400) >> 10);
      local_114 = *(undefined4 *)(lVar3 + 0x220);
      local_110 = *(undefined8 *)(lVar3 + 0x228);
      local_108 = *(undefined8 *)(lVar3 + 0x230);
      local_100 = *(undefined8 *)(lVar3 + 0x238);
      local_68 = *(undefined8 *)(lVar3 + 0x2f8);
      local_60 = *(undefined4 *)(lVar3 + 0x2f0);
      local_7cc = uVar10 & 1;
      iVar7 = FUN_14004a04b((longlong)local_788,param_3,&local_7b8,&local_789);
      if (iVar7 == 0) {
        local_7cd = *(char *)(param_1 + 0xf8);
        local_7a8 = local_f8;
        uStack_7a0 = uStack_f0;
        (*(code *)puVar4[1])();
        if ((uVar10 & 0x400) == 0) {
          uVar8 = *(uint *)(param_1 + 0xb8) & 1;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          *(uint *)(param_1 + 0xb8) = uVar8 + 4;
          if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
            *(uint *)(param_1 + 0xb8) = uVar8 | 0x104;
          }
          uVar8 = FUN_140021867(local_748);
          *(int *)(param_1 + 0x40) = (int)uVar8 >> 0x10;
          uVar9 = FUN_140021867(local_748);
          uVar8 = local_7cc;
          *(int *)(param_1 + 0x50) = (int)uVar9 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          if ((uVar10 & 0x10) == 0) {
            uVar9 = FUN_140021867(local_744);
            *(int *)(param_1 + 0x4c) = (int)uVar9 >> 0x10;
            uVar9 = FUN_140021867(local_744);
            iVar7 = (int)uVar9 >> 0x10;
          }
          else {
            iVar7 = *(int *)(lVar3 + 0x288) - *(int *)(lVar3 + 0x280) >> 0x10;
            *(int *)(param_1 + 0x4c) = iVar7;
          }
          lVar1 = param_1 + 0x98;
          *(int *)(param_1 + 0x54) = iVar7;
          auVar13._0_4_ = -(uint)((int)local_7a8 == _DAT_1400e6830);
          auVar13._4_4_ = -(uint)(local_7a8._4_4_ == _UNK_1400e6834);
          auVar13._8_4_ = -(uint)((int)uStack_7a0 == _UNK_1400e6838);
          auVar13._12_4_ = -(uint)(uStack_7a0._4_4_ == _UNK_1400e683c);
          iVar7 = movmskps(iVar7,auVar13);
          if (iVar7 != 0xf) {
            FUN_14001df2d(lVar1,(int *)&local_7a8);
            lVar11 = (longlong)*(int *)(param_1 + 0x40) * (longlong)(int)local_7a8;
            *(int *)(param_1 + 0x40) =
                 (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
            lVar11 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)uStack_7a0._4_4_;
            *(int *)(param_1 + 0x4c) =
                 (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
          }
          if (local_e8 != 0 || local_e4 != 0) {
            FUN_14001df78(lVar1,local_e8,local_e4);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + local_e8;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + local_e4;
          }
          if ((uVar8 == 0) || (local_789 != '\0')) {
            iVar7 = *(int *)(param_1 + 0xfc);
            iVar2 = *(int *)(param_1 + 0x100);
            if ((local_7cd == '\0') || (local_728 == 0)) {
              if (*(ushort *)(local_768 + 2) != 0) {
                piVar12 = *(int **)(local_768 + 8);
                uVar8 = *(ushort *)(local_768 + 2) + 1;
                do {
                  lVar11 = (longlong)*piVar12 * (longlong)iVar7;
                  *piVar12 = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
                  lVar11 = (longlong)piVar12[1] * (longlong)iVar2;
                  piVar12[1] = (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
                  piVar12 = piVar12 + 2;
                  uVar8 = uVar8 - 1;
                } while (1 < uVar8);
              }
            }
            lVar11 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar7;
            *(int *)(param_1 + 0x40) =
                 (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
            lVar11 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iVar2;
            *(int *)(param_1 + 0x4c) =
                 (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
          }
          FUN_14001d45b(lVar1,&local_7c8);
          *(ulonglong *)(param_1 + 0x30) = CONCAT44(iStack_7bc - iStack_7c4,local_7c0 - local_7c8);
          *(ulonglong *)(param_1 + 0x38) = CONCAT44(iStack_7bc,local_7c8);
          if ((uVar10 & 0x10) != 0) {
            FUN_14001ebdb(param_1 + 0x30,*(int *)(param_1 + 0x4c));
          }
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0xf0);
          uVar10 = FUN_140021867(local_750);
          *(int *)(param_1 + 0x38) = (int)uVar10 >> 0x10;
          uVar10 = FUN_140021867(local_748);
          *(int *)(param_1 + 0x40) = (int)uVar10 >> 0x10;
          *(undefined8 *)(lVar1 + 0x10) = local_7a8;
          *(undefined8 *)(lVar1 + 0x18) = uStack_7a0;
          *(int *)(lVar1 + 0x20) = local_e8;
          *(int *)(lVar1 + 0x24) = local_e4;
          *(undefined1 *)(lVar1 + 0xc) = 1;
        }
        *(undefined8 *)(param_1 + 0xd0) = local_7b8;
        *(undefined4 *)(param_1 + 0xd8) = local_7b0;
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0xd0) + 0x50);
        iVar7 = 0;
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5[1],&local_7b8);
          *(undefined8 *)(param_1 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 0xd8) = 0;
        }
      }
      else {
        (*(code *)puVar4[1])(local_788);
      }
    }
  }
  else {
    iVar7 = 6;
  }
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_818)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_818);
}

