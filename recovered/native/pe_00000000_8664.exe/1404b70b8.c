/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b70b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1404b70b8(undefined4 *param_1,uint *param_2,undefined8 param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  ulonglong uStack_b8;
  ulonglong local_b0;
  byte local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined4 local_8c;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined1 local_48 [32];
  
  puVar6 = (ulonglong *)FUN_1404b7654(local_48,param_4,param_5,param_6);
  local_c0 = *puVar6;
  uStack_b8 = puVar6[1];
  local_b0 = puVar6[2];
  uVar11 = puVar6[1] >> 0x20;
  local_88 = local_b0;
  local_78 = uVar11;
  local_68 = local_c0;
  uStack_60 = uStack_b8;
  if ((int)(puVar6[1] >> 0x20) == -1) {
    puVar7 = (undefined4 *)FUN_14048fb60();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    goto LAB_1404b7137;
  }
  uVar3 = _alloc_osfhnd();
  *param_2 = uVar3;
  if (uVar3 == 0xffffffff) {
    puVar7 = (undefined4 *)FUN_14048fb60();
    *puVar7 = 0;
    *param_2 = 0xffffffff;
    puVar7 = (undefined4 *)FUN_14048fb3c();
    *puVar7 = 0x18;
    goto LAB_1404b7137;
  }
  local_c4 = (undefined4)uStack_60;
  *param_1 = 1;
  uVar3 = (uint)(local_b0 >> 0x20) | (uint)local_b0;
  local_80 = (ulonglong)uVar3;
  local_90 = ~(param_4 >> 7) & 1;
  local_a0 = 0x18;
  local_8c = 0;
  local_98 = 0;
  lVar9 = (*(code *)s_GetDateFormatW_14059dda8._0_8_)
                    (param_3,local_68 >> 0x20,uVar11,&local_a0,local_c4,uVar3,0);
  if (lVar9 == -1) {
    uVar2 = (uint)(local_68 >> 0x20);
    if (((uVar2 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
      local_c0 = CONCAT44(uVar2,(undefined4)local_c0) & 0x7fffffffffffffff;
      lVar9 = (*(code *)s_GetDateFormatW_14059dda8._0_8_)
                        (param_3,local_c0 >> 0x20,uVar11,&local_a0,local_c4,uVar3,0);
      uVar3 = uVar2 & 0x7fffffff;
      if (lVar9 != -1) goto LAB_1404b7271;
    }
    pbVar1 = (byte *)((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    uVar4 = (*_DAT_14059df60)();
    FUN_14048fb84(uVar4);
  }
  else {
    uVar3 = local_c0._4_4_;
LAB_1404b7271:
    iVar5 = (*ram0x00014059df48)(lVar9);
    if (iVar5 != 0) {
      if (iVar5 == 2) {
        bVar10 = (byte)local_c0 | 0x40;
      }
      else {
        bVar10 = (byte)local_c0;
        if (iVar5 == 3) {
          bVar10 = (byte)local_c0 | 8;
        }
      }
      FUN_1404aa634(*param_2,lVar9);
      local_a8 = bVar10 | 1;
      local_c0 = CONCAT71(local_c0._1_7_,bVar10) | 1;
      *(byte *)((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x38 +
               (ulonglong)(*param_2 & 0x3f) * 0x48) = local_a8;
      *(undefined1 *)
       ((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x39 + (ulonglong)(*param_2 & 0x3f) * 0x48)
           = 0;
      if (((param_4 & 2) == 0) || (iVar5 = truncate_ctrl_z_if_present(*param_2), iVar5 == 0)) {
        local_68 = local_c0;
        uStack_60 = uStack_b8;
        local_c8[0] = 0;
        local_58 = local_88;
        iVar5 = FUN_1404b792c(*param_2,&local_68,param_4,local_c8);
        uVar2 = *param_2;
        if (iVar5 == 0) {
          *(undefined1 *)
           ((&DAT_1406328d0)[(longlong)(int)uVar2 >> 6] + 0x39 + (ulonglong)(uVar2 & 0x3f) * 0x48) =
               local_c8[0];
          uVar11 = (ulonglong)(*param_2 & 0x3f);
          pbVar1 = (byte *)((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x3d + uVar11 * 0x48);
          *pbVar1 = *pbVar1 ^ ((byte)(param_4 >> 0x10) ^
                              *(byte *)((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x3d +
                                       uVar11 * 0x48)) & 1;
          if (((local_a8 & 0x48) == 0) && ((param_4 & 8) != 0)) {
            pbVar1 = (byte *)((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x38 +
                             (ulonglong)(*param_2 & 0x3f) * 0x48);
            *pbVar1 = *pbVar1 | 0x20;
          }
          if (((uVar3 & 0xc0000000) == 0xc0000000) && ((param_4 & 1) != 0)) {
            (*ram0x00014059dd60)(lVar9);
            local_c0 = CONCAT44(uVar3,(undefined4)local_c0) & 0x7fffffffffffffff;
            lVar9 = (*(code *)s_GetDateFormatW_14059dda8._0_8_)
                              (param_3,local_c0 >> 0x20,local_78 & 0xffffffff,&local_a0,local_c4,
                               (int)local_80,0);
            if (lVar9 == -1) {
              uVar4 = (*_DAT_14059df60)();
              FUN_14048fb84(uVar4);
              pbVar1 = (byte *)((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x38 +
                               (ulonglong)(*param_2 & 0x3f) * 0x48);
              *pbVar1 = *pbVar1 & 0xfe;
              FUN_1404aa578(*param_2);
              goto LAB_1404b7137;
            }
            *(longlong *)
             ((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x28 +
             (ulonglong)(*param_2 & 0x3f) * 0x48) = lVar9;
          }
          return 0;
        }
      }
      else {
        uVar2 = *param_2;
      }
      FUN_1404aee50(uVar2);
      return iVar5;
    }
    iVar5 = (*_DAT_14059df60)();
    FUN_14048fb84(iVar5);
    pbVar1 = (byte *)((&DAT_1406328d0)[(longlong)(int)*param_2 >> 6] + 0x38 +
                     (ulonglong)(*param_2 & 0x3f) * 0x48);
    *pbVar1 = *pbVar1 & 0xfe;
    (*ram0x00014059dd60)(lVar9);
    if (iVar5 == 0) {
      puVar7 = (undefined4 *)FUN_14048fb3c();
      *puVar7 = 0xd;
    }
  }
LAB_1404b7137:
  piVar8 = (int *)FUN_14048fb3c();
  return *piVar8;
}

