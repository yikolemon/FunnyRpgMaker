/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140491e40 */

/* WARNING: Removing unreachable block (ram,0x000140491ead) */

ulonglong FUN_140491e40(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  
  if (DAT_14063263c != 0) {
    if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
      local_20 = '\0';
      if (DAT_14063263c == 0) {
        local_30 = CONCAT44(s___AV__collate_G_std___1406274c8._4_4_,
                            s___AV__collate_G_std___1406274c8._0_4_);
        uStack_28 = CONCAT44(s___AV__collate_G_std___1406274c8._12_4_,
                             s___AV__collate_G_std___1406274c8._8_4_);
      }
      else {
        local_38 = FUN_1404a25a8();
        local_30 = *(longlong *)(local_38 + 0x90);
        uStack_28 = *(undefined8 *)(local_38 + 0x88);
        __acrt_update_locale_info(local_38,&local_30);
        FUN_1404a2ba8(local_38,&uStack_28);
        if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
          *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
          local_20 = '\x01';
        }
      }
      lVar6 = local_30;
      if (*(longlong *)(local_30 + 0x138) == 0) {
        uVar3 = FUN_140492040(param_1,param_2);
      }
      else {
        do {
          uVar1 = *param_1;
          param_1 = param_1 + 1;
          uVar2 = *param_2;
          param_2 = param_2 + 1;
          uVar3 = (uint)uVar2;
          uVar7 = (uint)uVar1;
          if (uVar1 != uVar2) {
            if (uVar1 < 0x100) {
              uVar4 = (ulonglong)uVar1 & 0xff;
              if (((&DAT_1405602c2)[uVar4 * 2] & 1) != 0) {
                uVar4 = (ulonglong)*(byte *)(uVar4 + *(longlong *)(lVar6 + 0x110));
              }
              uVar1 = (ushort)uVar4;
            }
            else {
              uVar1 = FUN_1404aa8e4(uVar1,&local_30);
              lVar6 = local_30;
            }
            uVar3 = (uint)uVar2;
            uVar7 = (uint)uVar1;
            if (uVar1 != uVar2) {
              if (uVar2 < 0x100) {
                uVar4 = (ulonglong)uVar2 & 0xff;
                if (((&DAT_1405602c2)[uVar4 * 2] & 1) != 0) {
                  uVar4 = (ulonglong)*(byte *)(uVar4 + *(longlong *)(lVar6 + 0x110));
                }
                uVar2 = (ushort)uVar4;
              }
              else {
                uVar2 = FUN_1404aa8e4(uVar2,&local_30);
                lVar6 = local_30;
              }
              uVar3 = (uint)uVar2;
              uVar7 = (uint)uVar1;
            }
          }
          uVar3 = uVar7 - uVar3;
        } while ((uVar3 == 0) && (uVar7 != 0));
      }
      if (local_20 != '\0') {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
      }
      return (ulonglong)uVar3;
    }
    puVar5 = (undefined4 *)FUN_14048fb3c();
    *puVar5 = 0x16;
    FUN_1404a1f20();
    return 0x7fffffff;
  }
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    do {
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      param_1 = param_1 + 1;
      uVar2 = *param_2;
      param_2 = param_2 + 1;
      uVar7 = (uint)uVar2;
      if ((uint)uVar1 != (uint)uVar2) {
        uVar3 = uVar1 + 0x20;
        if (0x19 < uVar1 - 0x41) {
          uVar3 = (uint)uVar1;
        }
        uVar7 = uVar2 + 0x20;
        if (0x19 < uVar2 - 0x41) {
          uVar7 = (uint)uVar2;
        }
      }
    } while ((uVar3 - uVar7 == 0) && (uVar3 != 0));
    return (ulonglong)(uVar3 - uVar7);
  }
  uVar4 = FUN_140491d80();
  return uVar4;
}

