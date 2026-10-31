/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fc315 */

ulonglong FUN_1800fc315(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
                       undefined8 *param_5)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  BOOL BVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  byte *local_80;
  undefined8 *local_78;
  longlong *local_70;
  byte *local_68;
  undefined8 *local_60;
  byte *local_58;
  DWORD local_4c [3];
  
  local_4c[1] = 0xfffffffe;
  local_4c[2] = 0xffffffff;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  DVar5 = DAT_180418ff0;
  if (param_2 == 0) {
    uVar16 = 0x57;
    goto LAB_1800fc540;
  }
  local_78 = param_4;
  local_70 = param_1;
  DVar6 = GetCurrentThreadId();
  uVar16 = 0x10dd;
  if (((DVar5 != DVar6) || (uVar16 = DAT_180419010, DAT_180419010 != 0)) ||
     (uVar16 = 6, local_70 == (longlong *)0x0)) goto LAB_1800fc540;
  if (*local_70 == 0) {
    DAT_180419010 = 6;
    DAT_180419008 = local_70;
    goto LAB_1800fc540;
  }
  uVar16 = 0;
  pbVar9 = (byte *)FUN_1800fba6b(*local_70,0);
  pbVar10 = (byte *)FUN_1800fba6b(param_2,0);
  if (pbVar10 == pbVar9) {
    if (DAT_180418fe8 == 0) {
      local_58 = (byte *)0x0;
      local_60 = (undefined8 *)0x0;
      DVar5 = uVar16;
      goto LAB_1800fc6de;
    }
  }
  else {
    if (local_78 != (undefined8 *)0x0) {
      *local_78 = pbVar9;
    }
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = pbVar10;
    }
    local_60 = (undefined8 *)FUN_180239630(0x30);
    pbVar11 = (byte *)FUN_1800fc7b4(pbVar9);
    if (pbVar11 == (byte *)0x0) {
      uVar16 = 8;
      local_58 = (byte *)0x0;
      DVar5 = uVar16;
    }
    else {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = pbVar11;
      }
      pbVar11[0x40] = 0;
      pbVar11[0x41] = 0;
      pbVar11[0x42] = 0;
      pbVar11[0x43] = 0;
      pbVar11[0x44] = 0;
      pbVar11[0x45] = 0;
      pbVar11[0x46] = 0;
      pbVar11[0x47] = 0;
      local_80 = pbVar11 + 0x1e;
      lVar4 = 0;
      local_68 = pbVar9;
      local_58 = pbVar11;
      do {
        lVar15 = lVar4;
        local_4c[0] = 0;
        pbVar12 = (byte *)FUN_18019db94(pbVar11,&local_80,pbVar9,0,local_4c);
        pbVar11 = pbVar12 + (longlong)(pbVar11 + ((longlong)(int)local_4c[0] - (longlong)pbVar9));
        uVar17 = (longlong)pbVar12 - (longlong)local_68;
        uVar14 = (longlong)pbVar11 - (longlong)local_58;
        bVar3 = (byte)uVar14;
        local_58[lVar15 + 0x40] = bVar3 * '\b' | (byte)uVar17 & 7;
        if (lVar15 == 7) {
          lVar15 = 7;
          break;
        }
        uVar16 = *pbVar9 - 0x26;
        if ((uVar16 < 0x40) && ((0xc000000001010101U >> ((ulonglong)uVar16 & 0x3f) & 1) != 0)) {
          if (pbVar9[1] == 0xff) {
            bVar1 = pbVar9[2];
joined_r0x0001800fc504:
            if (bVar1 == 0x25) break;
          }
        }
        else {
          uVar16 = *pbVar9 - 0xc2;
          uVar13 = (ulonglong)uVar16;
          if (uVar16 < 0x3e) {
            if (uVar13 == 0x31) {
              if (pbVar9[1] == 0xc3) break;
            }
            else {
              if (uVar13 == 0x3d) {
                bVar1 = pbVar9[1];
                goto joined_r0x0001800fc504;
              }
              if ((0x28040000403U >> (uVar13 & 0x3f) & 1) != 0) break;
            }
          }
        }
        lVar4 = lVar15 + 1;
        pbVar9 = pbVar12;
      } while ((uint)uVar17 < 5);
      do {
        pbVar9 = local_68;
        if (4 < (uint)uVar17) {
          if ((uint)lVar15 < 8) {
            if (local_80 < pbVar11) {
              pcVar2 = (code *)swi(3);
              uVar14 = (*pcVar2)();
              return uVar14;
            }
            local_58[0x1e] = bVar3;
            local_58[0x3e] = (byte)uVar17;
            uVar13 = uVar17 & 0xffffffff;
            FUN_1802a82f0(local_58 + 0x20,local_68,uVar13);
            uVar16 = 6;
            DVar5 = uVar16;
            if (0x19 < (uint)uVar17) goto LAB_1800fc6de;
            *(byte **)(local_58 + 0x48) = pbVar9 + uVar13;
            *(byte **)(local_58 + 0x50) = pbVar10;
            uVar14 = uVar14 & 0xff;
            pbVar10 = local_58 + uVar14 + 6;
            (local_58 + uVar14)[0] = 0xff;
            (local_58 + uVar14)[1] = 0x25;
            iVar7 = 0x42 - (int)uVar14;
            *(int *)(local_58 + uVar14 + 2) = iVar7;
            if (pbVar10 < local_80) {
              FUN_1802a89a0(pbVar10,CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),0xcc),
                            (longlong)local_80 - (longlong)pbVar10);
            }
            local_4c[0] = 0;
            BVar8 = VirtualProtect(pbVar9,uVar13,0x40,local_4c);
            if (BVar8 != 0) {
              *(undefined4 *)(local_60 + 1) = 0;
              local_60[2] = local_70;
              local_60[4] = local_58;
              local_60[3] = pbVar9;
              *(DWORD *)(local_60 + 5) = local_4c[0];
              *local_60 = DAT_180418ff8;
              uVar16 = 0;
              DAT_180418ff8 = local_60;
              goto LAB_1800fc540;
            }
            uVar16 = GetLastError();
            DVar5 = uVar16;
            goto LAB_1800fc6de;
          }
          break;
        }
        iVar7 = FUN_1800fc96d(pbVar12);
        pbVar12 = pbVar12 + iVar7;
        uVar17 = (ulonglong)(uint)((int)pbVar12 - (int)local_68);
      } while (iVar7 != 0);
      if (DAT_180418fe8 == 0) {
        uVar16 = 9;
        DVar5 = uVar16;
      }
      else {
        uVar16 = 9;
        DVar5 = DAT_180419010;
      }
    }
LAB_1800fc6de:
    DAT_180419010 = DVar5;
    if ((local_58 != (byte *)0x0) && (FUN_1800fbd46(), param_3 != (undefined8 *)0x0)) {
      *param_3 = 0;
    }
    if (local_60 != (undefined8 *)0x0) {
      thunk_FUN_1802464a0(local_60,0x30);
    }
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
  }
  if (local_78 != (undefined8 *)0x0) {
    *local_78 = 0;
  }
  DAT_180419008 = local_70;
LAB_1800fc540:
  return (ulonglong)uVar16;
}

