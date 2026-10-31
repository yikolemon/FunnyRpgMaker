/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022bf80 */

UINT * FUN_1022bf80(UINT *param_1)

{
  wchar_t *pwVar1;
  UINT UVar2;
  wchar_t **ppwVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  
  _memset(param_1,0,0x2c);
  UVar2 = ____lc_codepage_func();
  *param_1 = UVar2;
  UVar2 = ____mb_cur_max_func();
  param_1[1] = UVar2;
  ppwVar3 = ____lc_locale_name_func();
  pwVar1 = ppwVar3[2];
  param_1[2] = (uint)(pwVar1 == (wchar_t *)0x0);
  if (pwVar1 != (wchar_t *)0x0) {
    puVar4 = ___pctype_func();
    uVar5 = 0;
    do {
      if ((short)puVar4[uVar5] < 0) {
        *(byte *)((uVar5 >> 3) + 0xc + (int)param_1) =
             *(byte *)((uVar5 >> 3) + 0xc + (int)param_1) | (byte)(1 << (uVar5 & 7));
      }
      if ((short)puVar4[uVar5 + 1] < 0) {
        iVar6 = (int)(uVar5 + 1) >> 3;
        *(byte *)(iVar6 + 0xc + (int)param_1) =
             *(byte *)(iVar6 + 0xc + (int)param_1) | (byte)(1 << (uVar5 + 1 & 7));
      }
      if ((short)puVar4[uVar5 + 2] < 0) {
        iVar6 = (int)(uVar5 + 2) >> 3;
        *(byte *)(iVar6 + 0xc + (int)param_1) =
             *(byte *)(iVar6 + 0xc + (int)param_1) | (byte)(1 << (uVar5 + 2 & 7));
      }
      if ((short)puVar4[uVar5 + 3] < 0) {
        iVar6 = (int)(uVar5 + 3) >> 3;
        *(byte *)(iVar6 + 0xc + (int)param_1) =
             *(byte *)(iVar6 + 0xc + (int)param_1) | (byte)(1 << (uVar5 + 3 & 7));
      }
      uVar5 = uVar5 + 4;
    } while ((int)uVar5 < 0x100);
  }
  return param_1;
}

