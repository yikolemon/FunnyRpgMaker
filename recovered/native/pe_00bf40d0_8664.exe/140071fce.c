/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140071fce */

ulonglong FUN_140071fce(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 extraout_var_00;
  uint uVar8;
  longlong lVar9;
  ushort uVar10;
  undefined1 auStackY_88 [32];
  ushort local_56;
  uint local_54;
  uint local_50;
  ushort local_4c;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar7 = param_2[6];
  local_56 = 0;
  local_44 = FUN_140020f72((longlong)param_2);
  local_50 = FUN_140020e0f(param_2,&local_54);
  uVar6 = (ulonglong)local_54;
  if (local_54 == 0) {
    local_54 = FUN_1400214cf(param_2,0x14010a000,(longlong)&local_50);
    uVar6 = CONCAT44(extraout_var,local_54);
    if (local_54 == 0) {
      if (local_50 == 0x4f54544f) {
        uVar1 = local_4c;
        uVar2 = 0x4f54544f;
        if (local_4c == 0) {
          uVar6 = 2;
          goto LAB_14007203f;
        }
      }
      else {
        uVar6 = FUN_140076815((longlong)&local_50,param_2,(short *)&local_56);
        local_54 = (uint)uVar6;
        uVar1 = local_56;
        uVar2 = local_50;
        if (local_54 != 0) goto LAB_14007203f;
      }
      *(ushort *)(param_1 + 0xf4) = uVar1;
      *(uint *)(param_1 + 0xf0) = uVar2;
      lVar7 = FUN_14001f231(lVar7,0x10,0,(uint)uVar1,0,(int *)&local_54);
      *(longlong *)(param_1 + 0xf8) = lVar7;
      uVar6 = (ulonglong)local_54;
      if (local_54 == 0) {
        uVar6 = FUN_140020a41((longlong)param_2,local_44 + 0xc);
        local_54 = (uint)uVar6;
        if (local_54 == 0) {
          local_54 = FUN_140021063(param_2,(uint)local_4c << 4);
          uVar6 = CONCAT44(extraout_var_00,local_54);
          if (local_54 == 0) {
            if (local_4c == 0) {
              uVar1 = 0;
            }
            else {
              uVar1 = 0;
              uVar10 = 0;
              do {
                uVar2 = FUN_14002120e((longlong)param_2);
                uVar3 = FUN_14002120e((longlong)param_2);
                uVar4 = FUN_14002120e((longlong)param_2);
                uVar5 = FUN_14002120e((longlong)param_2);
                uVar8 = *(uint *)(param_2 + 1) - uVar4;
                if (uVar4 <= *(uint *)(param_2 + 1)) {
                  if (uVar8 < uVar5) {
                    if ((uVar2 != 0x686d7478) && (uVar2 != 0x766d7478)) goto LAB_1400721c0;
                    uVar5 = uVar8 & 0xfffffffc;
                  }
                  lVar7 = *(longlong *)(param_1 + 0xf8);
                  if (uVar1 == 0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = (uint)uVar1;
                    lVar9 = 0;
                    do {
                      if (*(uint *)(lVar7 + lVar9) == uVar2) goto LAB_1400721c0;
                      lVar9 = lVar9 + 0x10;
                    } while ((ulonglong)uVar1 * 0x10 != lVar9);
                  }
                  uVar1 = uVar1 + 1;
                  uVar6 = (ulonglong)(uVar8 << 4);
                  *(uint *)(lVar7 + uVar6) = uVar2;
                  *(uint *)(lVar7 + 4 + uVar6) = uVar3;
                  *(uint *)(lVar7 + 8 + uVar6) = uVar4;
                  *(uint *)(lVar7 + 0xc + uVar6) = uVar5;
                }
LAB_1400721c0:
                uVar10 = uVar10 + 1;
              } while (uVar10 < local_4c);
            }
            *(ushort *)(param_1 + 0xf4) = uVar1;
            FUN_140021187(param_2);
            uVar6 = 2;
            if (uVar1 != 0) {
              uVar6 = (ulonglong)local_54;
            }
          }
        }
      }
    }
  }
LAB_14007203f:
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStackY_88);
  }
  return uVar6;
}

