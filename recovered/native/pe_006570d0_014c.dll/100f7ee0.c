/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7ee0 */

DWORD FUN_100f7ee0(int *param_1,int param_2,int *param_3,undefined4 *param_4,undefined4 *param_5)

{
  byte bVar1;
  code *pcVar2;
  void *pvVar3;
  DWORD DVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  BOOL BVar10;
  uint dwSize;
  DWORD DVar11;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  uint local_38;
  byte *local_34;
  byte *local_30;
  DWORD local_2c;
  undefined4 *local_28;
  byte *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  pvVar3 = ExceptionList;
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100f89c0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  DVar11 = DAT_1039d6c0;
  if (param_2 == 0) {
    ExceptionList = pvVar3;
    return 0x57;
  }
  DVar4 = GetCurrentThreadId();
  if (DVar11 != DVar4) {
    ExceptionList = local_1c;
    return 0x10dd;
  }
  if (DAT_1039d6d0 != 0) {
    ExceptionList = local_1c;
    return DAT_1039d6d0;
  }
  if (param_1 == (int *)0x0) {
    ExceptionList = local_1c;
    return 6;
  }
  if (*param_1 == 0) {
    DAT_1039d6cc = param_1;
    DAT_1039d6d0 = 6;
    ExceptionList = local_1c;
    return 6;
  }
  DVar11 = 0;
  pbVar5 = (byte *)FUN_100f76e7(*param_1,0);
  local_40 = (byte *)FUN_100f76e7(param_2,0);
  if (local_40 == pbVar5) {
    if (DAT_1039d6b8 != 0) goto LAB_100f82ba;
    local_24 = (byte *)0x0;
    local_28 = (undefined4 *)0x0;
    DVar4 = DVar11;
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = pbVar5;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = local_40;
    }
    local_28 = (undefined4 *)FUN_10228350(0x18);
    local_14 = 0xffffffff;
    pbVar6 = (byte *)FUN_100f8318();
    if (pbVar6 == (byte *)0x0) {
      DVar11 = 8;
      local_24 = (byte *)0x0;
      DVar4 = DVar11;
    }
    else {
      if (param_3 != (int *)0x0) {
        *param_3 = (int)pbVar6;
      }
      pbVar6[0x3c] = 0;
      pbVar6[0x3d] = 0;
      pbVar6[0x3e] = 0;
      pbVar6[0x3f] = 0;
      pbVar6[0x38] = 0;
      pbVar6[0x39] = 0;
      pbVar6[0x3a] = 0;
      pbVar6[0x3b] = 0;
      local_3c = pbVar6 + 0x1e;
      uVar7 = 0;
      local_34 = pbVar5;
      local_24 = pbVar6;
      while( true ) {
        local_2c = 0;
        local_44 = pbVar5;
        local_38 = uVar7;
        local_30 = pbVar6;
        pbVar8 = (byte *)FUN_101962cc(pbVar6,&local_3c,pbVar5,0,&local_2c);
        pbVar6 = local_30 + (int)(pbVar8 + (local_2c - (int)pbVar5));
        dwSize = (int)pbVar8 - (int)local_34;
        local_30 = (byte *)((int)pbVar6 - (int)local_24);
        local_24[local_38 + 0x38] = (char)local_30 << 3 | (byte)dwSize & 7;
        if (local_38 == 7) break;
        uVar7 = (uint)*local_44;
        if (uVar7 < 100) {
          if ((uVar7 - 0x26 < 0x19) && ((0x1010101U >> (uVar7 - 0x26 & 0x1f) & 1) != 0)) {
code_r0x100f80b4:
            if (local_44[1] == 0xff) {
              bVar1 = local_44[2];
joined_r0x100f80da:
              if (bVar1 == 0x25) break;
            }
          }
        }
        else if (uVar7 < 0xeb) {
          if (uVar7 - 100 < 2) goto code_r0x100f80b4;
          if (((uVar7 - 0xc2 < 0x1f) && ((0x40000403U >> (uVar7 - 0xc2 & 0x1f) & 1) != 0)) ||
             (uVar7 == 0xe9)) break;
        }
        else if (uVar7 == 0xf3) {
          if (local_44[1] == 0xc3) break;
        }
        else {
          if (uVar7 == 0xff) {
            bVar1 = local_44[1];
            goto joined_r0x100f80da;
          }
          if (uVar7 == 0xeb) break;
        }
        uVar7 = local_38 + 1;
        pbVar5 = pbVar8;
        if (4 < dwSize) break;
      }
      do {
        pbVar5 = local_34;
        if (4 < dwSize) {
          if (local_38 < 8) {
            if (local_3c < pbVar6) {
              pcVar2 = (code *)swi(3);
              DVar11 = (*pcVar2)();
              return DVar11;
            }
            local_24[0x1e] = (byte)local_30;
            local_24[0x36] = (byte)dwSize;
            FUN_1025b2d0(local_24 + 0x20,local_34,dwSize);
            DVar11 = 6;
            DVar4 = DVar11;
            if (dwSize < 0x1a) {
              *(byte **)(local_24 + 0x40) = pbVar5 + dwSize;
              *(byte **)(local_24 + 0x44) = local_40;
              uVar7 = (uint)local_30 & 0xff;
              pbVar6 = local_24 + uVar7 + 5;
              local_24[uVar7] = 0xe9;
              *(int *)(local_24 + uVar7 + 1) = (int)(pbVar5 + dwSize) - (int)pbVar6;
              if (pbVar6 < local_3c) {
                _memset(pbVar6,0xcc,(int)local_3c - (int)pbVar6);
              }
              pbVar5 = local_34;
              local_2c = 0;
              local_14 = 0xffffffff;
              BVar10 = VirtualProtect(local_34,dwSize,0x40,&local_2c);
              if (BVar10 != 0) {
                local_28[1] = 0;
                local_28[2] = param_1;
                local_28[4] = local_24;
                local_28[3] = pbVar5;
                local_28[5] = local_2c;
                *local_28 = DAT_1039d6c4;
                DAT_1039d6c4 = local_28;
                ExceptionList = local_1c;
                return 0;
              }
              DVar11 = GetLastError();
              DVar4 = DVar11;
            }
            goto LAB_100f827a;
          }
          break;
        }
        iVar9 = FUN_100f8464(pbVar8);
        pbVar8 = pbVar8 + iVar9;
        dwSize = (int)pbVar8 - (int)local_34;
      } while (iVar9 != 0);
      if (DAT_1039d6b8 == 0) {
        DVar11 = 9;
        DVar4 = DVar11;
      }
      else {
        DVar11 = 9;
        DVar4 = DAT_1039d6d0;
      }
    }
  }
LAB_100f827a:
  DAT_1039d6d0 = DVar4;
  if ((local_24 != (byte *)0x0) && (FUN_100f7976(), param_3 != (int *)0x0)) {
    *param_3 = 0;
  }
  if (local_28 != (undefined4 *)0x0) {
    local_14 = 0xffffffff;
    FUN_102283a0(local_28,0x18);
  }
LAB_100f82ba:
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  DAT_1039d6cc = param_1;
  ExceptionList = local_1c;
  return DVar11;
}

