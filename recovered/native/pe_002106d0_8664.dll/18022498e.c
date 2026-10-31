/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022498e */

ulonglong FUN_18022498e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint *local_60;
  ushort local_56;
  uint local_54;
  int local_50;
  ushort local_4c;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  local_56 = 0;
  local_44 = FUN_1801ceb6f(param_2);
  local_50 = FUN_1801cea0c(param_2,&local_54);
  uVar7 = (ulonglong)local_54;
  if (local_54 == 0) {
    uVar7 = FUN_1801cf0cc(param_2,&DAT_18034ced0,&local_50);
    local_54 = (uint)uVar7;
    if (local_54 == 0) {
      if (local_50 == 0x4f54544f) {
        uVar2 = local_4c;
        iVar3 = 0x4f54544f;
        if (local_4c == 0) {
          uVar7 = 2;
          goto LAB_1802249ff;
        }
      }
      else {
        uVar7 = FUN_1802291d5(&local_50,param_2,&local_56);
        local_54 = (uint)uVar7;
        uVar2 = local_56;
        iVar3 = local_50;
        if (local_54 != 0) goto LAB_1802249ff;
      }
      *(ushort *)(param_1 + 0xf4) = uVar2;
      *(int *)(param_1 + 0xf0) = iVar3;
      local_68 = 0;
      local_60 = &local_54;
      uVar8 = FUN_1801cc8d6(uVar8,0x10,0);
      *(undefined8 *)(param_1 + 0xf8) = uVar8;
      uVar7 = (ulonglong)local_54;
      if (local_54 == 0) {
        uVar7 = FUN_1801ce63e(param_2,local_44 + 0xc);
        local_54 = (uint)uVar7;
        if (local_54 == 0) {
          uVar7 = FUN_1801cec60(param_2);
          local_54 = (uint)uVar7;
          if (local_54 == 0) {
            if (local_4c == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = 0;
              uVar11 = 0;
              do {
                iVar3 = FUN_1801cee0b(param_2);
                uVar4 = FUN_1801cee0b(param_2);
                uVar5 = FUN_1801cee0b(param_2);
                uVar6 = FUN_1801cee0b(param_2);
                uVar9 = *(uint *)(param_2 + 8) - uVar5;
                if (uVar5 <= *(uint *)(param_2 + 8)) {
                  if (uVar9 < uVar6) {
                    if ((iVar3 != 0x686d7478) && (iVar3 != 0x766d7478)) goto LAB_180224b80;
                    uVar6 = uVar9 & 0xfffffffc;
                  }
                  lVar1 = *(longlong *)(param_1 + 0xf8);
                  if (uVar2 == 0) {
                    uVar9 = 0;
                  }
                  else {
                    uVar9 = (uint)uVar2;
                    lVar10 = 0;
                    do {
                      if (*(int *)(lVar1 + lVar10) == iVar3) goto LAB_180224b80;
                      lVar10 = lVar10 + 0x10;
                    } while ((ulonglong)uVar2 * 0x10 != lVar10);
                  }
                  uVar2 = uVar2 + 1;
                  uVar7 = (ulonglong)(uVar9 << 4);
                  *(int *)(lVar1 + uVar7) = iVar3;
                  *(undefined4 *)(lVar1 + 4 + uVar7) = uVar4;
                  *(uint *)(lVar1 + 8 + uVar7) = uVar5;
                  *(uint *)(lVar1 + 0xc + uVar7) = uVar6;
                }
LAB_180224b80:
                uVar11 = uVar11 + 1;
              } while (uVar11 < local_4c);
            }
            *(ushort *)(param_1 + 0xf4) = uVar2;
            FUN_1801ced84(param_2);
            uVar7 = 2;
            if (uVar2 != 0) {
              uVar7 = (ulonglong)local_54;
            }
          }
        }
      }
    }
  }
LAB_1802249ff:
  if (DAT_180402640 != (local_40 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_40 ^ (ulonglong)auStack_88);
  }
  return uVar7;
}

