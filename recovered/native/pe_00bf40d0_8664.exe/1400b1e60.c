/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400b1e60 */

int FUN_1400b1e60(WCHAR *param_1,WCHAR *param_2,longlong param_3,undefined8 *param_4)

{
  WCHAR WVar1;
  ushort uVar2;
  ushort extraout_AX;
  ushort uVar3;
  ushort extraout_AX_00;
  int iVar4;
  __acrt_ptd *p_Var5;
  ulonglong uVar6;
  undefined *puVar7;
  longlong local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  
  if ((param_1 != (WCHAR *)0x0) && (param_2 != (WCHAR *)0x0)) {
    if (param_3 != 0) {
      local_20 = '\0';
      if (param_4 == (undefined8 *)0x0) {
        if (DAT_140142c48 == 0) {
          local_30 = PTR_PTR_14013bd58;
          puStack_28 = PTR_DAT_14013bd60;
        }
        else {
          local_38 = FUN_1400a1528();
          local_30 = *(undefined **)(local_38 + 0x90);
          puStack_28 = *(undefined **)(local_38 + 0x88);
          __acrt_update_locale_info(local_38,(longlong *)&local_30);
          FUN_1400a1ad8(local_38,(longlong *)&puStack_28);
          if ((*(uint *)(local_38 + 0x3a8) & 2) == 0) {
            *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) | 2;
            local_20 = '\x01';
          }
        }
      }
      else {
        local_30 = (undefined *)*param_4;
        puStack_28 = (undefined *)param_4[1];
      }
      puVar7 = local_30;
      if (*(longlong *)(local_30 + 0x138) == 0) {
        iVar4 = FUN_1400b2040((ushort *)param_1,(ushort *)param_2,param_3);
      }
      else {
        do {
          WVar1 = *param_1;
          param_1 = param_1 + 1;
          if ((ushort)WVar1 < 0x100) {
            uVar6 = (ulonglong)(byte)WVar1;
            if (((&DAT_14010beb2)[uVar6 * 2] & 1) != 0) {
              uVar6 = (ulonglong)*(byte *)(uVar6 + *(longlong *)(puVar7 + 0x110));
            }
            uVar2 = (ushort)uVar6;
          }
          else {
            FUN_1400a9be4(WVar1,(__crt_locale_pointers *)&local_30);
            puVar7 = local_30;
            uVar2 = extraout_AX;
          }
          WVar1 = *param_2;
          param_2 = param_2 + 1;
          if ((ushort)WVar1 < 0x100) {
            uVar6 = (ulonglong)(byte)WVar1;
            if (((&DAT_14010beb2)[uVar6 * 2] & 1) != 0) {
              uVar6 = (ulonglong)*(byte *)(uVar6 + *(longlong *)(puVar7 + 0x110));
            }
            uVar3 = (ushort)uVar6;
          }
          else {
            FUN_1400a9be4(WVar1,(__crt_locale_pointers *)&local_30);
            puVar7 = local_30;
            uVar3 = extraout_AX_00;
          }
          iVar4 = (uint)uVar2 - (uint)uVar3;
        } while (((iVar4 == 0) && (uVar2 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
      }
      if (local_20 != '\0') {
        *(uint *)(local_38 + 0x3a8) = *(uint *)(local_38 + 0x3a8) & 0xfffffffd;
      }
      return iVar4;
    }
    return 0;
  }
  p_Var5 = FUN_140095e5c();
  *(undefined4 *)p_Var5 = 0x16;
  FUN_1400a0ea0();
  return 0x7fffffff;
}

