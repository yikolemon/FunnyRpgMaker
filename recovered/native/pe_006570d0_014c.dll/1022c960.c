/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c960 */

uint FUN_1022c960(byte *param_1,int param_2,byte *param_3,int param_4,UINT *param_5)

{
  uint uVar1;
  wchar_t **ppwVar2;
  UINT UVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  wchar_t *pwVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  uVar9 = param_2 - (int)param_1;
  uVar8 = param_4 - (int)param_3;
  if (param_5 == (UINT *)0x0) {
    ppwVar2 = ____lc_locale_name_func();
    pwVar7 = ppwVar2[1];
    UVar3 = ____lc_collate_cp_func();
  }
  else {
    pwVar7 = (wchar_t *)param_5[1];
    UVar3 = *param_5;
  }
  if (pwVar7 != (wchar_t *)0x0) {
    iVar5 = FUN_10234d30(pwVar7,0x1000,param_1,uVar9,param_3,uVar8,UVar3);
    if (iVar5 != 0) {
      return iVar5 - 2;
    }
    puVar6 = (undefined4 *)FUN_10268ffd();
    *puVar6 = 0x16;
    return 0x7fffffff;
  }
  uVar4 = uVar8;
  if ((int)uVar9 < (int)uVar8) {
    uVar4 = uVar9;
  }
  while (uVar1 = uVar4 - 4, 3 < uVar4) {
    if (*(int *)param_1 != *(int *)param_3) goto LAB_1022c9c6;
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
    uVar4 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_1022c9c6:
    bVar10 = *param_1 < *param_3;
    if ((*param_1 != *param_3) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar10 = param_1[1] < param_3[1], param_1[1] != param_3[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar10 = param_1[2] < param_3[2], param_1[2] != param_3[2] ||
           ((uVar1 != 0xffffffff && (bVar10 = param_1[3] < param_3[3], param_1[3] != param_3[3])))))
          ))))))) {
      uVar4 = -(uint)bVar10 | 1;
      goto LAB_1022c9fc;
    }
  }
  uVar4 = 0;
LAB_1022c9fc:
  if ((uVar4 == 0) && (uVar9 != uVar8)) {
    return (uint)((int)uVar8 <= (int)uVar9) * 2 - 1;
  }
  return uVar4;
}

