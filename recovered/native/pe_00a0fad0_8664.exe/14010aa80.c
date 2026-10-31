/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010aa80 */

void FUN_14010aa80(longlong *param_1)

{
  UINT *pUVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  BYTE *pBVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  UINT *local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 *local_68;
  uint local_60;
  longlong *local_58;
  undefined8 local_50;
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_b8;
  puVar14 = (undefined8 *)0x0;
  local_50 = 0;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  local_58 = param_1;
  if (param_1[0x27] == 0) {
    piVar3 = (int *)param_1[0x20];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    param_1[0x20] = 0;
    *param_1 = (longlong)&DAT_140166570;
    param_1[0x22] = (longlong)&DAT_1401667f0;
    param_1[0x23] = (longlong)&DAT_140166970;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    goto LAB_14010b093;
  }
  pUVar1 = (UINT *)((longlong)param_1 + 0xc);
  local_68 = (undefined4 *)0x0;
  if ((*pUVar1 == 0) &&
     (local_98 = pUVar1, iVar5 = FUN_140123088(&local_58,0,param_1[0x27],0x1004), puVar10 = puVar14,
     puVar11 = puVar14, puVar9 = puVar14, puVar8 = puVar14, iVar5 != 0)) {
LAB_14010b017:
    FUN_1401212e0(local_68);
    FUN_1401212e0(puVar8);
    FUN_1401212e0(puVar9);
    FUN_1401212e0(puVar10);
  }
  else {
    local_68 = (undefined4 *)_calloc_base(1,4);
    FUN_1401212e0(0);
    puVar8 = (undefined8 *)_calloc_base(0x180,2);
    FUN_1401212e0(0);
    puVar9 = (undefined8 *)_calloc_base(0x180,1);
    FUN_1401212e0(0);
    puVar10 = (undefined8 *)_calloc_base(0x180,1);
    FUN_1401212e0(0);
    puVar11 = (undefined8 *)_calloc_base(0x101,1);
    FUN_1401212e0(0);
    if ((local_68 == (undefined4 *)0x0) ||
       ((((puVar8 == (undefined8 *)0x0 || (puVar11 == (undefined8 *)0x0)) ||
         (puVar9 == (undefined8 *)0x0)) || (puVar16 = puVar11, puVar10 == (undefined8 *)0x0))))
    goto LAB_14010b017;
    do {
      *(char *)puVar16 = (char)puVar14;
      uVar6 = (int)puVar14 + 1;
      puVar14 = (undefined8 *)(ulonglong)uVar6;
      puVar16 = (undefined8 *)((longlong)puVar16 + 1);
    } while ((int)uVar6 < 0x100);
    BVar7 = GetCPInfo(*pUVar1,&local_48);
    if ((BVar7 == 0) || (5 < local_48.MaxCharSize)) goto LAB_14010b017;
    local_60 = (uint)(ushort)local_48.MaxCharSize;
    if (1 < (ushort)local_48.MaxCharSize) {
      if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
        FUN_1401366a0(puVar11 + 0x10,0x20,0x80);
      }
      else {
        pBVar15 = local_48.LeadByte;
        bVar2 = local_48.LeadByte[0];
        while ((bVar2 != 0 && (pBVar15[1] != 0))) {
          uVar6 = (uint)*pBVar15;
          if (*pBVar15 <= pBVar15[1]) {
            do {
              lVar12 = (longlong)(int)uVar6;
              uVar6 = uVar6 + 1;
              *(undefined1 *)(lVar12 + (longlong)puVar11) = 0x20;
            } while ((int)uVar6 <= (int)(uint)pBVar15[1]);
          }
          pBVar15 = pBVar15 + 2;
          bVar2 = *pBVar15;
        }
      }
    }
    local_80 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_90 = (longlong)puVar9 + 0x81;
    local_78 = 0;
    local_88 = 0xff;
    local_98 = (UINT *)CONCAT44(local_98._4_4_,0xff);
    iVar5 = __acrt_LCMapStringA(0,param_1[0x27],0x100,(longlong)puVar11 + 1);
    if (iVar5 == 0) goto LAB_14010b017;
    local_80 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_90 = (longlong)puVar10 + 0x81;
    local_78 = 0;
    local_88 = 0xff;
    local_98 = (UINT *)CONCAT44(local_98._4_4_,0xff);
    iVar5 = __acrt_LCMapStringA(0,param_1[0x27],0x200,(longlong)puVar11 + 1);
    if (iVar5 == 0) goto LAB_14010b017;
    local_98 = (UINT *)(puVar8 + 0x20);
    local_88 = 0;
    local_90 = CONCAT44(local_90._4_4_,*(undefined4 *)((longlong)param_1 + 0xc));
    iVar5 = FUN_1401233cc(0,1,puVar11,0x100);
    uVar6 = local_60;
    if (iVar5 == 0) goto LAB_14010b017;
    *(undefined2 *)((longlong)puVar8 + 0xfe) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x7f) = 0;
    *(undefined1 *)((longlong)puVar10 + 0x7f) = 0;
    *(undefined1 *)(puVar9 + 0x10) = 0;
    *(undefined1 *)(puVar10 + 0x10) = 0;
    if (1 < local_60) {
      if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
        puVar14 = puVar10 + 0x20;
        puVar16 = puVar8 + 0x40;
        iVar5 = 0x80;
        do {
          uVar4 = 0;
          if (iVar5 - 0xc2U < 0x33) {
            uVar4 = 0x8000;
          }
          *(undefined2 *)puVar16 = uVar4;
          puVar16 = (undefined8 *)((longlong)puVar16 + 2);
          *(char *)(((longlong)puVar9 - (longlong)puVar10) + (longlong)puVar14) = (char)iVar5;
          *(char *)puVar14 = (char)iVar5;
          iVar5 = iVar5 + 1;
          puVar14 = (undefined8 *)((longlong)puVar14 + 1);
        } while (iVar5 < 0x100);
      }
      else {
        pBVar15 = local_48.LeadByte;
        bVar2 = local_48.LeadByte[0];
        while ((bVar2 != 0 && (pBVar15[1] != 0))) {
          uVar13 = (uint)*pBVar15;
          if (*pBVar15 <= pBVar15[1]) {
            do {
              lVar12 = (longlong)(int)uVar13;
              *(undefined2 *)((longlong)puVar8 + lVar12 * 2 + 0x100) = 0x8000;
              *(char *)(lVar12 + 0x80 + (longlong)puVar9) = (char)uVar13;
              *(char *)(lVar12 + 0x80 + (longlong)puVar10) = (char)uVar13;
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 <= (int)(uint)pBVar15[1]);
          }
          pBVar15 = pBVar15 + 2;
          bVar2 = *pBVar15;
        }
      }
    }
    *puVar8 = puVar8[0x40];
    puVar8[1] = puVar8[0x41];
    puVar8[2] = puVar8[0x42];
    puVar8[3] = puVar8[0x43];
    puVar8[4] = puVar8[0x44];
    puVar8[5] = puVar8[0x45];
    puVar8[6] = puVar8[0x46];
    puVar8[7] = puVar8[0x47];
    puVar8[8] = puVar8[0x48];
    puVar8[9] = puVar8[0x49];
    puVar8[10] = puVar8[0x4a];
    puVar8[0xb] = puVar8[0x4b];
    puVar8[0xc] = puVar8[0x4c];
    puVar8[0xd] = puVar8[0x4d];
    puVar8[0xe] = puVar8[0x4e];
    puVar8[0xf] = puVar8[0x4f];
    puVar8[0x10] = puVar8[0x50];
    puVar8[0x11] = puVar8[0x51];
    puVar8[0x12] = puVar8[0x52];
    puVar8[0x13] = puVar8[0x53];
    puVar8[0x14] = puVar8[0x54];
    puVar8[0x15] = puVar8[0x55];
    puVar8[0x16] = puVar8[0x56];
    puVar8[0x17] = puVar8[0x57];
    puVar8[0x18] = puVar8[0x58];
    puVar8[0x19] = puVar8[0x59];
    puVar8[0x1a] = puVar8[0x5a];
    puVar8[0x1b] = puVar8[0x5b];
    puVar8[0x1c] = puVar8[0x5c];
    puVar8[0x1d] = puVar8[0x5d];
    puVar8[0x1e] = puVar8[0x5e];
    *(undefined4 *)(puVar8 + 0x1f) = *(undefined4 *)(puVar8 + 0x5f);
    *(undefined2 *)((longlong)puVar8 + 0xfc) = *(undefined2 *)((longlong)puVar8 + 0x2fc);
    *puVar9 = puVar9[0x20];
    puVar9[1] = puVar9[0x21];
    puVar9[2] = puVar9[0x22];
    puVar9[3] = puVar9[0x23];
    puVar9[4] = puVar9[0x24];
    puVar9[5] = puVar9[0x25];
    puVar9[6] = puVar9[0x26];
    puVar9[7] = puVar9[0x27];
    puVar9[8] = puVar9[0x28];
    puVar9[9] = puVar9[0x29];
    puVar9[10] = puVar9[0x2a];
    puVar9[0xb] = puVar9[0x2b];
    puVar9[0xc] = puVar9[0x2c];
    puVar9[0xd] = puVar9[0x2d];
    puVar9[0xe] = puVar9[0x2e];
    *(undefined4 *)(puVar9 + 0xf) = *(undefined4 *)(puVar9 + 0x2f);
    *(undefined2 *)((longlong)puVar9 + 0x7c) = *(undefined2 *)((longlong)puVar9 + 0x17c);
    *(undefined1 *)((longlong)puVar9 + 0x7e) = *(undefined1 *)((longlong)puVar9 + 0x17e);
    *puVar10 = puVar10[0x20];
    puVar10[1] = puVar10[0x21];
    puVar10[2] = puVar10[0x22];
    puVar10[3] = puVar10[0x23];
    puVar10[4] = puVar10[0x24];
    puVar10[5] = puVar10[0x25];
    puVar10[6] = puVar10[0x26];
    puVar10[7] = puVar10[0x27];
    puVar10[8] = puVar10[0x28];
    puVar10[9] = puVar10[0x29];
    puVar10[10] = puVar10[0x2a];
    puVar10[0xb] = puVar10[0x2b];
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 0x2c);
    *(undefined4 *)((longlong)puVar10 + 100) = *(undefined4 *)((longlong)puVar10 + 0x164);
    *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 0x2d);
    *(undefined4 *)((longlong)puVar10 + 0x6c) = *(undefined4 *)((longlong)puVar10 + 0x16c);
    puVar10[0xe] = puVar10[0x2e];
    *(undefined4 *)(puVar10 + 0xf) = *(undefined4 *)(puVar10 + 0x2f);
    *(undefined2 *)((longlong)puVar10 + 0x7c) = *(undefined2 *)((longlong)puVar10 + 0x17c);
    *(undefined1 *)((longlong)puVar10 + 0x7e) = *(undefined1 *)((longlong)puVar10 + 0x17e);
    piVar3 = (int *)param_1[0x20];
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FUN_1401212e0(param_1[0x21] + -0xfe);
        FUN_1401212e0(param_1[0x22] + -0x80);
        FUN_1401212e0(param_1[0x23] + -0x80);
        FUN_1401212e0(param_1[0x20]);
      }
    }
    *local_68 = 1;
    param_1[0x20] = (longlong)local_68;
    *param_1 = (longlong)(puVar8 + 0x20);
    param_1[0x21] = (longlong)puVar8 + 0xfe;
    param_1[0x22] = (longlong)(puVar9 + 0x10);
    param_1[0x23] = (longlong)(puVar10 + 0x10);
    *(uint *)(param_1 + 1) = uVar6;
  }
  FUN_1401212e0(puVar11);
LAB_14010b093:
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_b8);
}

