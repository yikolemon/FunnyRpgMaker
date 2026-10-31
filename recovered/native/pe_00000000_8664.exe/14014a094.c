/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014a094 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14014a094(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  undefined1 auVar12 [16];
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
  undefined4 local_750;
  undefined4 local_748;
  undefined4 local_744;
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_818;
  lVar3 = *(longlong *)(param_1 + 8);
  local_789 = '\0';
  puVar4 = *(undefined8 **)(*(longlong *)(lVar3 + 0x2a0) + 0x18);
  if ((param_3 < *(uint *)(lVar3 + 0x10)) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x50) != 0)) {
    uVar6 = param_4 | 3;
    if ((param_4 >> 10 & 1) == 0) {
      uVar6 = param_4;
    }
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0x10000;
      uVar7 = 0x10000;
    }
    else {
      *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x1c);
      uVar7 = *(undefined4 *)(param_2 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x100) = uVar7;
    *(bool *)(param_1 + 0xf8) = (uVar6 & 3) == 0;
    *(byte *)(param_1 + 0xf9) = (byte)(uVar6 & 1) ^ 1;
    local_7f8 = *(undefined8 *)(lVar3 + 0x248);
    local_7f0 = *(undefined8 *)(lVar3 + 0x2e0);
    local_7e8 = (uVar6 & 3) == 0;
    local_7e0 = uVar6 >> 0x10 & 0xf;
    local_7d8 = FUN_14014c081;
    iVar8 = (*(code *)*puVar4)(local_788,lVar3,param_2,param_1);
    if (iVar8 == 0) {
      local_72b = (undefined1)((uVar6 & 0x400) >> 10);
      local_114 = *(undefined4 *)(lVar3 + 0x220);
      local_110 = *(undefined8 *)(lVar3 + 0x228);
      local_108 = *(undefined8 *)(lVar3 + 0x230);
      local_100 = *(undefined8 *)(lVar3 + 0x238);
      local_68 = *(undefined8 *)(lVar3 + 0x2f8);
      local_60 = *(undefined4 *)(lVar3 + 0x2f0);
      local_7cc = uVar6 & 1;
      iVar8 = FUN_14014c0fd(local_788,param_3,&local_7b8,&local_789);
      if (iVar8 == 0) {
        local_7cd = *(char *)(param_1 + 0xf8);
        local_7a8 = local_f8;
        uStack_7a0 = uStack_f0;
        (*(code *)puVar4[1])();
        if ((uVar6 & 0x400) == 0) {
          uVar9 = *(uint *)(param_1 + 0xb8) & 1;
          *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
          *(uint *)(param_1 + 0xb8) = uVar9 + 4;
          if ((param_2 != 0) && (*(ushort *)(param_2 + 0x1a) < 0x18)) {
            *(uint *)(param_1 + 0xb8) = uVar9 | 0x104;
          }
          iVar8 = FUN_14012e438(local_748);
          *(int *)(param_1 + 0x40) = iVar8 >> 0x10;
          iVar8 = FUN_14012e438(local_748);
          uVar9 = local_7cc;
          *(int *)(param_1 + 0x50) = iVar8 >> 0x10;
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + 0xc) = 0;
          if ((uVar6 & 0x10) == 0) {
            iVar8 = FUN_14012e438(local_744);
            *(int *)(param_1 + 0x4c) = iVar8 >> 0x10;
            iVar8 = FUN_14012e438(local_744);
            iVar8 = iVar8 >> 0x10;
          }
          else {
            iVar8 = *(int *)(lVar3 + 0x288) - *(int *)(lVar3 + 0x280) >> 0x10;
            *(int *)(param_1 + 0x4c) = iVar8;
          }
          lVar1 = param_1 + 0x98;
          *(int *)(param_1 + 0x54) = iVar8;
          auVar12._0_4_ = -(uint)((int)local_7a8 == _DAT_140e94ee0);
          auVar12._4_4_ = -(uint)(local_7a8._4_4_ == _UNK_140e94ee4);
          auVar12._8_4_ = -(uint)((int)uStack_7a0 == _UNK_140e94ee8);
          auVar12._12_4_ = -(uint)(uStack_7a0._4_4_ == _UNK_140e94eec);
          iVar8 = movmskps(iVar8,auVar12);
          if (iVar8 != 0xf) {
            FUN_14012a529(lVar1,&local_7a8);
            lVar10 = (longlong)*(int *)(param_1 + 0x40) * (longlong)(int)local_7a8;
            *(int *)(param_1 + 0x40) =
                 (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
            lVar10 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)uStack_7a0._4_4_;
            *(int *)(param_1 + 0x4c) =
                 (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
          }
          if (local_e8 != 0 || local_e4 != 0) {
            FUN_14012a574(lVar1,local_e8,local_e4);
            *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + local_e8;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + local_e4;
          }
          if ((uVar9 == 0) || (local_789 != '\0')) {
            iVar8 = *(int *)(param_1 + 0xfc);
            iVar2 = *(int *)(param_1 + 0x100);
            if ((local_7cd == '\0') || (local_728 == 0)) {
              if (*(ushort *)(local_768 + 2) != 0) {
                piVar11 = *(int **)(local_768 + 8);
                uVar9 = *(ushort *)(local_768 + 2) + 1;
                do {
                  lVar10 = (longlong)*piVar11 * (longlong)iVar8;
                  *piVar11 = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
                  lVar10 = (longlong)piVar11[1] * (longlong)iVar2;
                  piVar11[1] = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
                  piVar11 = piVar11 + 2;
                  uVar9 = uVar9 - 1;
                } while (1 < uVar9);
              }
            }
            lVar10 = (longlong)*(int *)(param_1 + 0x40) * (longlong)iVar8;
            *(int *)(param_1 + 0x40) =
                 (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
            lVar10 = (longlong)*(int *)(param_1 + 0x4c) * (longlong)iVar2;
            *(int *)(param_1 + 0x4c) =
                 (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
          }
          FUN_140129a57(lVar1,&local_7c8);
          *(ulonglong *)(param_1 + 0x30) = CONCAT44(iStack_7bc - iStack_7c4,local_7c0 - local_7c8);
          *(ulonglong *)(param_1 + 0x38) = CONCAT44(iStack_7bc,local_7c8);
          if ((uVar6 & 0x10) != 0) {
            FUN_14012b254(param_1 + 0x30,*(undefined4 *)(param_1 + 0x4c));
          }
        }
        else {
          lVar1 = *(longlong *)(param_1 + 0xf0);
          iVar8 = FUN_14012e438(local_750);
          *(int *)(param_1 + 0x38) = iVar8 >> 0x10;
          iVar8 = FUN_14012e438(local_748);
          *(int *)(param_1 + 0x40) = iVar8 >> 0x10;
          *(undefined8 *)(lVar1 + 0x10) = local_7a8;
          *(undefined8 *)(lVar1 + 0x18) = uStack_7a0;
          *(int *)(lVar1 + 0x20) = local_e8;
          *(int *)(lVar1 + 0x24) = local_e4;
          *(undefined1 *)(lVar1 + 0xc) = 1;
        }
        *(undefined8 *)(param_1 + 0xd0) = local_7b8;
        *(undefined4 *)(param_1 + 0xd8) = local_7b0;
        plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0xd0) + 0x50);
        iVar8 = 0;
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
    iVar8 = 6;
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_818)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_818);
}

