/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049791d */

void FUN_0049791d(UINT param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  UINT CodePage;
  uint uVar3;
  BOOL BVar4;
  BYTE *pBVar5;
  wchar_t *pwVar6;
  int iVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  byte *pbVar10;
  undefined2 *puVar11;
  byte *pbVar12;
  uint uVar13;
  int local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  CodePage = FUN_00497b22(param_1);
  if (CodePage != 0) {
    uVar13 = 0;
    uVar3 = 0;
    local_20 = 0;
LAB_00497954:
    if (*(UINT *)((int)&DAT_0051b548 + uVar3) != CodePage) goto code_r0x00497960;
    _memset((void *)(param_2 + 0x18),0,0x101);
    pbVar10 = (byte *)(local_20 * 0x30 + 0x51b558);
    do {
      bVar1 = *pbVar10;
      pbVar8 = pbVar10;
      while ((bVar1 != 0 && (pbVar8[1] != 0))) {
        uVar3 = (uint)*pbVar8;
        if (uVar3 <= pbVar8[1]) {
          pbVar12 = (byte *)(param_2 + 0x19 + uVar3);
          do {
            if (0xff < uVar3) break;
            *pbVar12 = *pbVar12 | (&DAT_0051b540)[uVar13];
            uVar3 = uVar3 + 1;
            pbVar12 = pbVar12 + 1;
          } while (uVar3 <= pbVar8[1]);
        }
        pbVar8 = pbVar8 + 2;
        bVar1 = *pbVar8;
      }
      uVar13 = uVar13 + 1;
      pbVar10 = pbVar10 + 8;
    } while (uVar13 < 4);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 8) = 1;
    pwVar6 = FUN_00497e6e(CodePage);
    *(wchar_t **)(param_2 + 0x21c) = pwVar6;
    puVar9 = (undefined2 *)(param_2 + 0xc);
    puVar11 = (undefined2 *)(local_20 * 0x30 + 0x51b54c);
    iVar7 = 6;
    do {
      uVar2 = *puVar11;
      puVar11 = puVar11 + 1;
      *puVar9 = uVar2;
      puVar9 = puVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    goto LAB_00497b02;
  }
LAB_00497b0a:
  FUN_00497b93(param_2);
LAB_00497b13:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
code_r0x00497960:
  local_20 = local_20 + 1;
  uVar3 = uVar3 + 0x30;
  if (0xef < uVar3) goto code_r0x0049796e;
  goto LAB_00497954;
code_r0x0049796e:
  if ((CodePage == 65000) || (BVar4 = IsValidCodePage(CodePage & 0xffff), BVar4 == 0))
  goto LAB_00497b13;
  if (CodePage == 0xfde9) {
    *(undefined4 *)(param_2 + 4) = 0xfde9;
    *(undefined4 *)(param_2 + 0x21c) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar4 = GetCPInfo(CodePage,&local_1c);
    if (BVar4 == 0) {
      if (DAT_00521ed8 == 0) goto LAB_00497b13;
      goto LAB_00497b0a;
    }
    _memset((void *)(param_2 + 0x18),0,0x101);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 0x21c) = 0;
    if (local_1c.MaxCharSize == 2) {
      pBVar5 = local_1c.LeadByte;
      while ((local_1c.LeadByte[0] != 0 && (bVar1 = pBVar5[1], bVar1 != 0))) {
        uVar3 = (uint)*pBVar5;
        if (uVar3 <= bVar1) {
          pbVar10 = (byte *)(param_2 + 0x19 + uVar3);
          iVar7 = (bVar1 - uVar3) + 1;
          do {
            *pbVar10 = *pbVar10 | 4;
            pbVar10 = pbVar10 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        pBVar5 = pBVar5 + 2;
        local_1c.LeadByte[0] = *pBVar5;
      }
      pbVar10 = (byte *)(param_2 + 0x1a);
      iVar7 = 0xfe;
      do {
        *pbVar10 = *pbVar10 | 8;
        pbVar10 = pbVar10 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      pwVar6 = FUN_00497e6e(*(int *)(param_2 + 4));
      *(wchar_t **)(param_2 + 0x21c) = pwVar6;
      uVar13 = 1;
    }
  }
  *(uint *)(param_2 + 8) = uVar13;
  *(undefined4 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined4 *)(param_2 + 0x14) = 0;
LAB_00497b02:
  FUN_00497eac(param_2);
  goto LAB_00497b13;
}

