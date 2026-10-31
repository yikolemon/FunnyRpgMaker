/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008e1b4 */

void FUN_14008e1b4(longlong *param_1)

{
  UINT *pUVar1;
  byte bVar2;
  int *piVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  BOOL BVar7;
  LPCSTR pCVar8;
  LPCSTR pCVar9;
  LPCSTR pCVar10;
  LPCSTR pCVar11;
  longlong lVar12;
  uint uVar13;
  LPCSTR pCVar14;
  BYTE *pBVar15;
  LPCSTR pCVar16;
  undefined1 auStackY_b8 [32];
  undefined4 *local_68;
  longlong *local_58;
  undefined8 local_50;
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_b8;
  pCVar14 = (LPCSTR)0x0;
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
  if ((ushort *)param_1[0x27] == (ushort *)0x0) {
    piVar3 = (int *)param_1[0x20];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    param_1[0x20] = 0;
    *param_1 = (longlong)&DAT_14010b9b0;
    param_1[0x22] = (longlong)&DAT_14010bc30;
    param_1[0x23] = (longlong)&DAT_14010bdb0;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    goto LAB_14008e7c7;
  }
  pUVar1 = (UINT *)((longlong)param_1 + 0xc);
  local_68 = (undefined4 *)0x0;
  if ((*pUVar1 == 0) &&
     (iVar5 = FUN_1400a27d8((__crt_locale_pointers *)&local_58,0,(ushort *)param_1[0x27],0x1004,
                            (longlong *)pUVar1), pCVar10 = pCVar14, pCVar11 = pCVar14,
     pCVar9 = pCVar14, pCVar8 = pCVar14, iVar5 != 0)) {
LAB_14008e74b:
    FUN_1400a1290(local_68);
    FUN_1400a1290(pCVar8);
    FUN_1400a1290(pCVar9);
    FUN_1400a1290(pCVar10);
  }
  else {
    local_68 = _calloc_base(1,4);
    FUN_1400a1290((LPVOID)0x0);
    pCVar8 = _calloc_base(0x180,2);
    FUN_1400a1290((LPVOID)0x0);
    pCVar9 = _calloc_base(0x180,1);
    FUN_1400a1290((LPVOID)0x0);
    pCVar10 = _calloc_base(0x180,1);
    FUN_1400a1290((LPVOID)0x0);
    pCVar11 = _calloc_base(0x101,1);
    FUN_1400a1290((LPVOID)0x0);
    if (((local_68 == (undefined4 *)0x0) ||
        (((pCVar8 == (LPCSTR)0x0 || (pCVar11 == (LPCSTR)0x0)) || (pCVar9 == (LPCSTR)0x0)))) ||
       (pCVar16 = pCVar11, pCVar10 == (LPCSTR)0x0)) goto LAB_14008e74b;
    do {
      *pCVar16 = (CHAR)pCVar14;
      uVar6 = (int)pCVar14 + 1;
      pCVar14 = (LPCSTR)(ulonglong)uVar6;
      pCVar16 = pCVar16 + 1;
    } while ((int)uVar6 < 0x100);
    BVar7 = GetCPInfo(*pUVar1,&local_48);
    if ((BVar7 == 0) || (5 < local_48.MaxCharSize)) goto LAB_14008e74b;
    uVar6 = (uint)(ushort)local_48.MaxCharSize;
    if (1 < (ushort)local_48.MaxCharSize) {
      if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
        FUN_1400b3c00((undefined1 (*) [32])(pCVar11 + 0x80),0x20,0x80);
      }
      else {
        pBVar15 = local_48.LeadByte;
        bVar2 = local_48.LeadByte[0];
        while ((bVar2 != 0 && (pBVar15[1] != 0))) {
          uVar13 = (uint)*pBVar15;
          if (*pBVar15 <= pBVar15[1]) {
            do {
              lVar12 = (longlong)(int)uVar13;
              uVar13 = uVar13 + 1;
              pCVar11[lVar12] = ' ';
            } while ((int)uVar13 <= (int)(uint)pBVar15[1]);
          }
          pBVar15 = pBVar15 + 2;
          bVar2 = *pBVar15;
        }
      }
    }
    iVar5 = __acrt_LCMapStringA((__crt_locale_pointers *)0x0,(ushort *)param_1[0x27],0x100,
                                pCVar11 + 1,0xff,pCVar9 + 0x81,0xff,
                                *(UINT *)((longlong)param_1 + 0xc),0);
    if (((iVar5 == 0) ||
        (iVar5 = __acrt_LCMapStringA((__crt_locale_pointers *)0x0,(ushort *)param_1[0x27],0x200,
                                     pCVar11 + 1,0xff,pCVar10 + 0x81,0xff,
                                     *(UINT *)((longlong)param_1 + 0xc),0), iVar5 == 0)) ||
       (iVar5 = FUN_1400a2b1c((__crt_locale_pointers *)0x0,1,pCVar11,0x100,(LPWORD)(pCVar8 + 0x100),
                              *(UINT *)((longlong)param_1 + 0xc),0), iVar5 == 0))
    goto LAB_14008e74b;
    pCVar8[0xfe] = '\0';
    pCVar8[0xff] = '\0';
    pCVar9[0x7f] = '\0';
    pCVar10[0x7f] = '\0';
    pCVar9[0x80] = '\0';
    pCVar10[0x80] = '\0';
    if (1 < uVar6) {
      if (*(int *)((longlong)param_1 + 0xc) == 0xfde9) {
        pCVar14 = pCVar10 + 0x100;
        pCVar16 = pCVar8 + 0x200;
        iVar5 = 0x80;
        do {
          uVar4 = 0;
          if (iVar5 - 0xc2U < 0x33) {
            uVar4 = 0x8000;
          }
          *(undefined2 *)pCVar16 = uVar4;
          pCVar16 = pCVar16 + 2;
          pCVar14[(longlong)pCVar9 - (longlong)pCVar10] = (CHAR)iVar5;
          *pCVar14 = (CHAR)iVar5;
          iVar5 = iVar5 + 1;
          pCVar14 = pCVar14 + 1;
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
              (pCVar8 + lVar12 * 2 + 0x100)[0] = '\0';
              (pCVar8 + lVar12 * 2 + 0x100)[1] = -0x80;
              pCVar9[lVar12 + 0x80] = (CHAR)uVar13;
              pCVar10[lVar12 + 0x80] = (CHAR)uVar13;
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 <= (int)(uint)pBVar15[1]);
          }
          pBVar15 = pBVar15 + 2;
          bVar2 = *pBVar15;
        }
      }
    }
    *(undefined8 *)pCVar8 = *(undefined8 *)(pCVar8 + 0x200);
    *(undefined8 *)(pCVar8 + 8) = *(undefined8 *)(pCVar8 + 0x208);
    *(undefined8 *)(pCVar8 + 0x10) = *(undefined8 *)(pCVar8 + 0x210);
    *(undefined8 *)(pCVar8 + 0x18) = *(undefined8 *)(pCVar8 + 0x218);
    *(undefined8 *)(pCVar8 + 0x20) = *(undefined8 *)(pCVar8 + 0x220);
    *(undefined8 *)(pCVar8 + 0x28) = *(undefined8 *)(pCVar8 + 0x228);
    *(undefined8 *)(pCVar8 + 0x30) = *(undefined8 *)(pCVar8 + 0x230);
    *(undefined8 *)(pCVar8 + 0x38) = *(undefined8 *)(pCVar8 + 0x238);
    *(undefined8 *)(pCVar8 + 0x40) = *(undefined8 *)(pCVar8 + 0x240);
    *(undefined8 *)(pCVar8 + 0x48) = *(undefined8 *)(pCVar8 + 0x248);
    *(undefined8 *)(pCVar8 + 0x50) = *(undefined8 *)(pCVar8 + 0x250);
    *(undefined8 *)(pCVar8 + 0x58) = *(undefined8 *)(pCVar8 + 600);
    *(undefined8 *)(pCVar8 + 0x60) = *(undefined8 *)(pCVar8 + 0x260);
    *(undefined8 *)(pCVar8 + 0x68) = *(undefined8 *)(pCVar8 + 0x268);
    *(undefined8 *)(pCVar8 + 0x70) = *(undefined8 *)(pCVar8 + 0x270);
    *(undefined8 *)(pCVar8 + 0x78) = *(undefined8 *)(pCVar8 + 0x278);
    *(undefined8 *)(pCVar8 + 0x80) = *(undefined8 *)(pCVar8 + 0x280);
    *(undefined8 *)(pCVar8 + 0x88) = *(undefined8 *)(pCVar8 + 0x288);
    *(undefined8 *)(pCVar8 + 0x90) = *(undefined8 *)(pCVar8 + 0x290);
    *(undefined8 *)(pCVar8 + 0x98) = *(undefined8 *)(pCVar8 + 0x298);
    *(undefined8 *)(pCVar8 + 0xa0) = *(undefined8 *)(pCVar8 + 0x2a0);
    *(undefined8 *)(pCVar8 + 0xa8) = *(undefined8 *)(pCVar8 + 0x2a8);
    *(undefined8 *)(pCVar8 + 0xb0) = *(undefined8 *)(pCVar8 + 0x2b0);
    *(undefined8 *)(pCVar8 + 0xb8) = *(undefined8 *)(pCVar8 + 0x2b8);
    *(undefined8 *)(pCVar8 + 0xc0) = *(undefined8 *)(pCVar8 + 0x2c0);
    *(undefined8 *)(pCVar8 + 200) = *(undefined8 *)(pCVar8 + 0x2c8);
    *(undefined8 *)(pCVar8 + 0xd0) = *(undefined8 *)(pCVar8 + 0x2d0);
    *(undefined8 *)(pCVar8 + 0xd8) = *(undefined8 *)(pCVar8 + 0x2d8);
    *(undefined8 *)(pCVar8 + 0xe0) = *(undefined8 *)(pCVar8 + 0x2e0);
    *(undefined8 *)(pCVar8 + 0xe8) = *(undefined8 *)(pCVar8 + 0x2e8);
    *(undefined8 *)(pCVar8 + 0xf0) = *(undefined8 *)(pCVar8 + 0x2f0);
    *(undefined4 *)(pCVar8 + 0xf8) = *(undefined4 *)(pCVar8 + 0x2f8);
    *(undefined2 *)(pCVar8 + 0xfc) = *(undefined2 *)(pCVar8 + 0x2fc);
    *(undefined8 *)pCVar9 = *(undefined8 *)(pCVar9 + 0x100);
    *(undefined8 *)(pCVar9 + 8) = *(undefined8 *)(pCVar9 + 0x108);
    *(undefined8 *)(pCVar9 + 0x10) = *(undefined8 *)(pCVar9 + 0x110);
    *(undefined8 *)(pCVar9 + 0x18) = *(undefined8 *)(pCVar9 + 0x118);
    *(undefined8 *)(pCVar9 + 0x20) = *(undefined8 *)(pCVar9 + 0x120);
    *(undefined8 *)(pCVar9 + 0x28) = *(undefined8 *)(pCVar9 + 0x128);
    *(undefined8 *)(pCVar9 + 0x30) = *(undefined8 *)(pCVar9 + 0x130);
    *(undefined8 *)(pCVar9 + 0x38) = *(undefined8 *)(pCVar9 + 0x138);
    *(undefined8 *)(pCVar9 + 0x40) = *(undefined8 *)(pCVar9 + 0x140);
    *(undefined8 *)(pCVar9 + 0x48) = *(undefined8 *)(pCVar9 + 0x148);
    *(undefined8 *)(pCVar9 + 0x50) = *(undefined8 *)(pCVar9 + 0x150);
    *(undefined8 *)(pCVar9 + 0x58) = *(undefined8 *)(pCVar9 + 0x158);
    *(undefined8 *)(pCVar9 + 0x60) = *(undefined8 *)(pCVar9 + 0x160);
    *(undefined8 *)(pCVar9 + 0x68) = *(undefined8 *)(pCVar9 + 0x168);
    *(undefined8 *)(pCVar9 + 0x70) = *(undefined8 *)(pCVar9 + 0x170);
    *(undefined4 *)(pCVar9 + 0x78) = *(undefined4 *)(pCVar9 + 0x178);
    *(undefined2 *)(pCVar9 + 0x7c) = *(undefined2 *)(pCVar9 + 0x17c);
    pCVar9[0x7e] = pCVar9[0x17e];
    *(undefined8 *)pCVar10 = *(undefined8 *)(pCVar10 + 0x100);
    *(undefined8 *)(pCVar10 + 8) = *(undefined8 *)(pCVar10 + 0x108);
    *(undefined8 *)(pCVar10 + 0x10) = *(undefined8 *)(pCVar10 + 0x110);
    *(undefined8 *)(pCVar10 + 0x18) = *(undefined8 *)(pCVar10 + 0x118);
    *(undefined8 *)(pCVar10 + 0x20) = *(undefined8 *)(pCVar10 + 0x120);
    *(undefined8 *)(pCVar10 + 0x28) = *(undefined8 *)(pCVar10 + 0x128);
    *(undefined8 *)(pCVar10 + 0x30) = *(undefined8 *)(pCVar10 + 0x130);
    *(undefined8 *)(pCVar10 + 0x38) = *(undefined8 *)(pCVar10 + 0x138);
    *(undefined8 *)(pCVar10 + 0x40) = *(undefined8 *)(pCVar10 + 0x140);
    *(undefined8 *)(pCVar10 + 0x48) = *(undefined8 *)(pCVar10 + 0x148);
    *(undefined8 *)(pCVar10 + 0x50) = *(undefined8 *)(pCVar10 + 0x150);
    *(undefined8 *)(pCVar10 + 0x58) = *(undefined8 *)(pCVar10 + 0x158);
    *(undefined8 *)(pCVar10 + 0x60) = *(undefined8 *)(pCVar10 + 0x160);
    *(undefined8 *)(pCVar10 + 0x68) = *(undefined8 *)(pCVar10 + 0x168);
    *(undefined8 *)(pCVar10 + 0x70) = *(undefined8 *)(pCVar10 + 0x170);
    *(undefined4 *)(pCVar10 + 0x78) = *(undefined4 *)(pCVar10 + 0x178);
    *(undefined2 *)(pCVar10 + 0x7c) = *(undefined2 *)(pCVar10 + 0x17c);
    pCVar10[0x7e] = pCVar10[0x17e];
    piVar3 = (int *)param_1[0x20];
    if (piVar3 != (int *)0x0) {
      LOCK();
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        FUN_1400a1290((LPVOID)(param_1[0x21] + -0xfe));
        FUN_1400a1290((LPVOID)(param_1[0x22] + -0x80));
        FUN_1400a1290((LPVOID)(param_1[0x23] + -0x80));
        FUN_1400a1290((LPVOID)param_1[0x20]);
      }
    }
    *local_68 = 1;
    param_1[0x20] = (longlong)local_68;
    *param_1 = (longlong)(pCVar8 + 0x100);
    param_1[0x21] = (longlong)(pCVar8 + 0xfe);
    param_1[0x22] = (longlong)(pCVar9 + 0x80);
    param_1[0x23] = (longlong)(pCVar10 + 0x80);
    *(uint *)(param_1 + 1) = uVar6;
  }
  FUN_1400a1290(pCVar11);
LAB_14008e7c7:
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStackY_b8);
}

