/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802809a0 */

int FUN_1802809a0(ushort *param_1,ushort *param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    local_20 = '\0';
    if (param_3 == (longlong *)0x0) {
      if (DAT_18042116c == 0) {
        local_30 = CONCAT44(PTR_PTR_180415ff8._4_4_,PTR_PTR_180415ff8._0_4_);
        uStack_28 = CONCAT44(PTR_DAT_180416000._4_4_,PTR_DAT_180416000._0_4_);
      }
      else {
        local_38 = FUN_1802910d8();
        local_30 = *(longlong *)(local_38 + 0x90);
        uStack_28 = *(longlong *)(local_38 + 0x88);
        __acrt_update_locale_info(local_38,&local_30);
        FUN_1802916d8(local_38,&uStack_28);
        if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
          *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
          local_20 = '\x01';
        }
      }
    }
    else {
      local_30 = *param_3;
      uStack_28 = param_3[1];
    }
    lVar6 = local_30;
    if (*(longlong *)(local_30 + 0x138) == 0) {
      iVar3 = FUN_180280b70(param_1,param_2);
    }
    else {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar8 = (uint)uVar2;
        uVar7 = (uint)uVar1;
        if (uVar1 != uVar2) {
          if (uVar1 < 0x100) {
            uVar5 = (ulonglong)uVar1 & 0xff;
            if (((&DAT_18034edf2)[uVar5 * 2] & 1) != 0) {
              uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
            }
            uVar1 = (ushort)uVar5;
          }
          else {
            uVar1 = FUN_180299414(uVar1,&local_30);
            lVar6 = local_30;
          }
          uVar8 = (uint)uVar2;
          uVar7 = (uint)uVar1;
          if (uVar1 != uVar2) {
            if (uVar2 < 0x100) {
              uVar5 = (ulonglong)uVar2 & 0xff;
              if (((&DAT_18034edf2)[uVar5 * 2] & 1) != 0) {
                uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
              }
              uVar2 = (ushort)uVar5;
            }
            else {
              uVar2 = FUN_180299414(uVar2,&local_30);
              lVar6 = local_30;
            }
            uVar8 = (uint)uVar2;
            uVar7 = (uint)uVar1;
          }
        }
        iVar3 = uVar7 - uVar8;
      } while ((iVar3 == 0) && (uVar7 != 0));
    }
    if (local_20 != '\0') {
      *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
    }
    return iVar3;
  }
  puVar4 = (undefined4 *)FUN_18027e66c();
  *puVar4 = 0x16;
  FUN_180290a50();
  return 0x7fffffff;
}

