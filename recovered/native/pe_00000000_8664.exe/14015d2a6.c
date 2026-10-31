/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015d2a6 */

int FUN_14015d2a6(uint *param_1,uint param_2)

{
  longlong lVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_118 [44];
  uint local_ec;
  ulonglong local_e8;
  ulonglong local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_c8 [4];
  int local_c4;
  undefined1 local_c0 [4];
  uint local_bc;
  int local_b8;
  uint local_b4;
  undefined1 local_b0 [12];
  ushort local_a4;
  ushort local_a2;
  undefined1 local_a0 [12];
  ushort local_94;
  ushort local_92;
  undefined1 local_90 [12];
  ushort local_84;
  ushort local_82;
  int local_80;
  short local_7c;
  ushort local_7a;
  short local_78;
  short local_76;
  int local_74;
  short local_6a;
  ushort local_68;
  ushort local_66;
  short local_64;
  ushort local_62;
  int local_60;
  undefined1 local_5c [8];
  int local_54;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_118;
  uVar7 = *(undefined8 *)(param_1 + 0x26);
  lVar1 = *(longlong *)(param_1 + 0x28);
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  uVar10 = -param_2;
  if ((int)-param_2 < 0) {
    uVar10 = param_2;
  }
  local_60 = FUN_14012d612(lVar1,0);
  if ((local_60 != 0) || (iVar5 = FUN_14012e0a0(lVar1,&DAT_140e9fc70,&local_64), iVar5 != 0)) {
    local_60 = 2;
    iVar5 = local_60;
    goto LAB_14015d32e;
  }
  local_60 = 2;
  if (local_64 == 0x5a4d) {
    local_60 = FUN_14012d612(lVar1,local_62);
    iVar5 = local_60;
    if ((local_60 != 0) || (iVar5 = FUN_14012e0a0(lVar1,&DAT_140e9fc90,&local_6a), iVar5 != 0))
    goto LAB_14015d32e;
    uVar10 = uVar10 & 0xffff;
    local_60 = 2;
    if (local_6a == 0x4550) {
      local_60 = FUN_14012d612(lVar1,local_62);
      iVar5 = local_60;
      if ((local_60 == 0) && (iVar5 = FUN_14012e0a0(lVar1,&DAT_140e9fcb0,&local_80), iVar5 == 0)) {
        if ((local_80 == 0x4550) &&
           ((((local_7c == 0x14c && (local_78 == 0xe0)) && (local_76 == 0x10b)) &&
            (*param_1 = 0, local_7a != 0)))) {
          uVar2 = 0;
          do {
            local_60 = 0;
            local_60 = FUN_14012e0a0(lVar1,&DAT_140e9fcf0,local_5c);
            iVar5 = local_60;
            if (local_60 != 0) goto LAB_14015d32e;
            if (local_74 == local_54) {
              local_60 = FUN_14012d612(lVar1,local_4c);
              iVar5 = local_60;
              if ((local_60 != 0) ||
                 (local_60 = FUN_14012e0a0(lVar1,&DAT_140e9fd10,local_90), iVar5 = local_60,
                 local_60 != 0)) goto LAB_14015d32e;
              if (local_82 == 0 && local_84 == 0) goto LAB_14015da80;
              local_e0 = (ulonglong)local_4c;
              local_e8 = (ulonglong)(local_4c + 0x10);
              local_ec = 0;
              uVar6 = 0;
              local_60 = 0;
              goto LAB_14015d798;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < local_7a);
        }
LAB_14015d54b:
        local_60 = 3;
        iVar5 = local_60;
      }
      goto LAB_14015d32e;
    }
    if (local_6a == 0x454e) {
      local_60 = FUN_14012d612(lVar1,(uint)local_68 + (uint)local_62);
      iVar5 = local_60;
      if ((local_60 != 0) ||
         (local_60 = FUN_14012dc34(lVar1,(uint)local_66 - (uint)local_68), iVar5 = local_60,
         local_60 != 0)) goto LAB_14015d32e;
      uVar2 = FUN_14012ddc1(lVar1);
      if (0x10 < uVar2) {
        local_60 = 3;
        FUN_14012dd58(lVar1);
        iVar5 = local_60;
        goto LAB_14015d32e;
      }
      sVar3 = FUN_14012ddc1(lVar1);
      while (sVar3 != 0) {
        uVar4 = FUN_14012ddc1(lVar1);
        if (sVar3 == -0x7ff8) {
          iVar5 = FUN_14012db43(lVar1);
          iVar9 = iVar5 + (*(int *)(lVar1 + 0x38) - *(int *)(lVar1 + 0x40)) + 4;
          goto LAB_14015d602;
        }
        *(ulonglong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + (ulonglong)uVar4 * 0xc + 4;
        sVar3 = FUN_14012ddc1(lVar1);
      }
      iVar9 = 0;
      uVar4 = 0;
LAB_14015d602:
      FUN_14012dd58(lVar1);
      iVar5 = 3;
      if ((((uVar4 == 0) || (iVar9 == 0)) || (*(uint *)(lVar1 + 8) < (uint)uVar4 * 0x76)) ||
         ((*param_1 = (uint)uVar4, iVar5 = local_60, (int)param_2 < 0 ||
          (iVar5 = 6, uVar4 <= uVar10)))) goto LAB_14015d32e;
      uVar7 = FUN_140128a1f(uVar7,0xb8,&local_60);
      *(undefined8 *)(param_1 + 0x36) = uVar7;
      iVar5 = local_60;
      if (local_60 != 0) goto LAB_14015d32e;
      local_60 = FUN_14012d612(lVar1,iVar9 + uVar10 * 0xc);
      if ((local_60 != 0) || (local_60 = FUN_14012dc34(lVar1,0xc), local_60 != 0))
      goto LAB_14015d575;
      uVar4 = FUN_14012ddc1(lVar1);
      **(int **)(param_1 + 0x36) = (uint)uVar4 << ((byte)uVar2 & 0x1f);
      uVar4 = FUN_14012ddc1(lVar1);
      *(uint *)(*(longlong *)(param_1 + 0x36) + 0xa8) = (uint)uVar4 << ((byte)uVar2 & 0x1f);
      *(longlong *)(lVar1 + 0x38) = *(longlong *)(lVar1 + 0x38) + 8;
      FUN_14012dd58(lVar1);
      local_60 = FUN_14015da98(*(undefined8 *)(param_1 + 0x36),lVar1);
      bVar13 = local_60 == 0;
    }
    else {
      bVar13 = false;
    }
    goto LAB_14015d55d;
  }
  goto LAB_14015d575;
  while( true ) {
    if (-1 < (int)local_b4) goto LAB_14015d54b;
    local_b4 = local_b4 & 0x7fffffff;
    iVar9 = local_b4 + local_4c;
    local_60 = FUN_14012d612(lVar1,iVar9);
    iVar5 = local_60;
    if ((local_60 != 0) ||
       (local_60 = FUN_14012e0a0(lVar1,&DAT_140e9fd10,local_a0), iVar5 = local_60, local_60 != 0))
    goto LAB_14015d32e;
    if (local_92 != 0 || local_94 != 0) {
      uVar11 = 0;
      uVar6 = 0;
      local_60 = 0;
      do {
        local_60 = FUN_14012d612(lVar1,iVar9 + 0x10 + uVar6 * 8);
        iVar5 = local_60;
        if ((local_60 != 0) ||
           (local_60 = FUN_14012e0a0(lVar1,&DAT_140e9fd30,local_c0), iVar5 = local_60, local_60 != 0
           )) goto LAB_14015d32e;
        if (-1 < (int)local_bc) goto LAB_14015d54b;
        local_bc = local_bc & 0x7fffffff;
        iVar12 = local_bc + local_4c;
        local_60 = FUN_14012d612(lVar1,iVar12);
        iVar5 = local_60;
        if ((local_60 != 0) ||
           (local_60 = FUN_14012e0a0(lVar1,&DAT_140e9fd10,local_b0), iVar5 = local_60, local_60 != 0
           )) goto LAB_14015d32e;
        if (local_a2 != 0 || local_a4 != 0) {
          uVar6 = 0;
          uVar2 = 1;
          local_60 = 0;
          do {
            local_60 = FUN_14012d612(lVar1,iVar12 + 0x10 + uVar6 * 8);
            iVar5 = local_60;
            if ((local_60 != 0) ||
               (local_60 = FUN_14012e0a0(lVar1,&DAT_140e9fd30,local_c8), iVar5 = local_60,
               local_60 != 0)) goto LAB_14015d32e;
            if ((int)local_bc < 0) goto LAB_14015d54b;
            if (local_b8 == 8) {
              local_60 = FUN_14012d612(lVar1,local_c4 + (int)local_e0);
              iVar5 = local_60;
              if ((local_60 != 0) ||
                 (local_60 = FUN_14012e0a0(lVar1,&DAT_140e9fd40,&local_d8), iVar5 = local_60,
                 local_60 != 0)) goto LAB_14015d32e;
              uVar6 = *param_1;
              if (uVar10 == uVar6) {
                piVar8 = (int *)FUN_140128a1f(uVar7,0xb8,&local_60);
                *(int **)(param_1 + 0x36) = piVar8;
                iVar5 = local_60;
                if (local_60 != 0) goto LAB_14015d32e;
                *piVar8 = (local_d8 + local_4c) - local_54;
                *(undefined4 *)(*(longlong *)(param_1 + 0x36) + 0xa8) = local_d4;
                local_60 = FUN_14015da98(*(undefined8 *)(param_1 + 0x36),lVar1);
                if (local_60 != 0) goto LAB_14015d575;
                uVar6 = *param_1;
              }
              *param_1 = uVar6 + 1;
            }
            uVar6 = (uint)uVar2;
            uVar2 = uVar2 + 1;
          } while (uVar6 < (uint)local_a2 + (uint)local_a4);
        }
        uVar11 = uVar11 + 1;
        uVar6 = uVar11 & 0xffff;
      } while (uVar6 < (uint)local_92 + (uint)local_94);
    }
    local_ec = local_ec + 1;
    uVar6 = local_ec & 0xffff;
    if ((uint)local_82 + (uint)local_84 <= uVar6) break;
LAB_14015d798:
    local_60 = FUN_14012d612(lVar1,(int)local_e8 + uVar6 * 8);
    iVar5 = local_60;
    if ((local_60 != 0) ||
       (local_60 = FUN_14012e0a0(lVar1,&DAT_140e9fd30,&local_b8), iVar5 = local_60, local_60 != 0))
    goto LAB_14015d32e;
  }
LAB_14015da80:
  bVar13 = true;
LAB_14015d55d:
  if (*param_1 == 0) {
    iVar5 = 3;
    goto LAB_14015d32e;
  }
  iVar5 = 6;
  if (((int)*param_1 <= (int)uVar10) || (iVar5 = local_60, bVar13)) goto LAB_14015d32e;
LAB_14015d575:
  FUN_14015db5e(param_1);
  iVar5 = local_60;
LAB_14015d32e:
  local_60 = iVar5;
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_118)) {
    return local_60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_118);
}

