/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c2460 */

int FUN_1401c2460(ushort *param_1,ushort *param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  
  if ((param_1 != (ushort *)0x0) && (param_2 != (ushort *)0x0)) {
    if (param_3 != 0) {
      local_20 = '\0';
      if (param_4 == (longlong *)0x0) {
        if (DAT_140f32750 == 0) {
          local_30 = CONCAT44(PTR_PTR_140f29798._4_4_,PTR_PTR_140f29798._0_4_);
          uStack_28 = CONCAT44(PTR_DAT_140f297a0._4_4_,PTR_DAT_140f297a0._0_4_);
        }
        else {
          local_38 = FUN_1401aecc8();
          local_30 = *(longlong *)(local_38 + 0x90);
          uStack_28 = *(longlong *)(local_38 + 0x88);
          __acrt_update_locale_info(local_38,&local_30);
          FUN_1401af278(local_38,&uStack_28);
          if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
            *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
            local_20 = '\x01';
          }
        }
      }
      else {
        local_30 = *param_4;
        uStack_28 = param_4[1];
      }
      lVar6 = local_30;
      if (*(longlong *)(local_30 + 0x138) == 0) {
        iVar3 = FUN_1401c2640(param_1,param_2,param_3);
      }
      else {
        do {
          uVar1 = *param_1;
          param_1 = param_1 + 1;
          if (uVar1 < 0x100) {
            uVar5 = (ulonglong)(byte)uVar1;
            if (((&DAT_140eb3122)[uVar5 * 2] & 1) != 0) {
              uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
            }
            uVar1 = (ushort)uVar5;
          }
          else {
            uVar1 = FUN_1401b9314(uVar1,&local_30);
            lVar6 = local_30;
          }
          uVar2 = *param_2;
          param_2 = param_2 + 1;
          if (uVar2 < 0x100) {
            uVar5 = (ulonglong)(byte)uVar2;
            if (((&DAT_140eb3122)[uVar5 * 2] & 1) != 0) {
              uVar5 = (ulonglong)*(byte *)(uVar5 + *(longlong *)(lVar6 + 0x110));
            }
            uVar2 = (ushort)uVar5;
          }
          else {
            uVar2 = FUN_1401b9314(uVar2,&local_30);
            lVar6 = local_30;
          }
          iVar3 = (uint)uVar1 - (uint)uVar2;
        } while (((iVar3 == 0) && (uVar1 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      }
      if (local_20 != '\0') {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
      }
      return iVar3;
    }
    return 0;
  }
  puVar4 = (undefined4 *)FUN_14019e8cc();
  *puVar4 = 0x16;
  FUN_1401ae640();
  return 0x7fffffff;
}

