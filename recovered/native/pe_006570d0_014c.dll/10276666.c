/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10276666 */

void FUN_10276666(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  BOOL BVar5;
  BYTE *pBVar6;
  wchar_t *pwVar7;
  int iVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  byte *pbVar13;
  uint uVar14;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar3 = getSystemCP(param_1);
  if (uVar3 != 0) {
    uVar14 = 0;
    uVar4 = 0;
    local_20 = 0;
LAB_1027669d:
    if (*(uint *)((int)&DAT_1039bae0 + uVar4) != uVar3) goto code_r0x102766a9;
    _memset((void *)(param_2 + 0x18),0,0x101);
    pbVar11 = (byte *)(local_20 * 0x30 + 0x1039baf0);
    do {
      bVar1 = *pbVar11;
      pbVar9 = pbVar11;
      while ((bVar1 != 0 && (pbVar9[1] != 0))) {
        uVar4 = (uint)*pbVar9;
        if (uVar4 <= pbVar9[1]) {
          pbVar13 = (byte *)(param_2 + 0x19 + uVar4);
          do {
            if (0xff < uVar4) break;
            *pbVar13 = *pbVar13 | (&DAT_1039bad8)[uVar14];
            uVar4 = uVar4 + 1;
            pbVar13 = pbVar13 + 1;
          } while (uVar4 <= pbVar9[1]);
        }
        pbVar9 = pbVar9 + 2;
        bVar1 = *pbVar9;
      }
      uVar14 = uVar14 + 1;
      pbVar11 = pbVar11 + 8;
    } while (uVar14 < 4);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 8) = 1;
    pwVar7 = CPtoLocaleName(uVar3);
    *(wchar_t **)(param_2 + 0x21c) = pwVar7;
    puVar10 = (undefined2 *)(param_2 + 0xc);
    puVar12 = (undefined2 *)(local_20 * 0x30 + 0x1039bae4);
    iVar8 = 6;
    do {
      uVar2 = *puVar12;
      puVar12 = puVar12 + 1;
      *puVar10 = uVar2;
      puVar10 = puVar10 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    goto LAB_1027684b;
  }
LAB_10276853:
  FUN_102768dc(param_2);
LAB_1027685c:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
code_r0x102766a9:
  local_20 = local_20 + 1;
  uVar4 = uVar4 + 0x30;
  if (0xef < uVar4) goto code_r0x102766b7;
  goto LAB_1027669d;
code_r0x102766b7:
  if ((uVar3 == 65000) || (BVar5 = IsValidCodePage(uVar3 & 0xffff), BVar5 == 0)) goto LAB_1027685c;
  if (uVar3 == 0xfde9) {
    *(undefined4 *)(param_2 + 4) = 0xfde9;
    *(undefined4 *)(param_2 + 0x21c) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar5 = GetCPInfo(uVar3,&local_1c);
    if (BVar5 == 0) {
      if (DAT_103a5458 == 0) goto LAB_1027685c;
      goto LAB_10276853;
    }
    _memset((void *)(param_2 + 0x18),0,0x101);
    *(uint *)(param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 0x21c) = 0;
    if (local_1c.MaxCharSize == 2) {
      pBVar6 = local_1c.LeadByte;
      while ((local_1c.LeadByte[0] != 0 && (bVar1 = pBVar6[1], bVar1 != 0))) {
        uVar3 = (uint)*pBVar6;
        if (uVar3 <= bVar1) {
          pbVar11 = (byte *)(param_2 + 0x19 + uVar3);
          iVar8 = (bVar1 - uVar3) + 1;
          do {
            *pbVar11 = *pbVar11 | 4;
            pbVar11 = pbVar11 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
        pBVar6 = pBVar6 + 2;
        local_1c.LeadByte[0] = *pBVar6;
      }
      pbVar11 = (byte *)(param_2 + 0x1a);
      iVar8 = 0xfe;
      do {
        *pbVar11 = *pbVar11 | 8;
        pbVar11 = pbVar11 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      pwVar7 = CPtoLocaleName(*(int *)(param_2 + 4));
      *(wchar_t **)(param_2 + 0x21c) = pwVar7;
      uVar14 = 1;
    }
  }
  *(uint *)(param_2 + 8) = uVar14;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
LAB_1027684b:
  FUN_10276bf5(param_2);
  goto LAB_1027685c;
}

