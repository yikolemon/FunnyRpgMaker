/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400da4c0 */

undefined8 * FUN_1400da4c0(undefined8 *param_1)

{
  wchar_t *pwVar1;
  undefined4 uVar2;
  wchar_t **ppwVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  uVar2 = FUN_14010b0f8();
  *(undefined4 *)param_1 = uVar2;
  uVar2 = FUN_14010aa50();
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  ppwVar3 = ___lc_locale_name_func();
  pwVar1 = ppwVar3[2];
  *(uint *)(param_1 + 1) = (uint)(pwVar1 == (wchar_t *)0x0);
  if (pwVar1 != (wchar_t *)0x0) {
    lVar4 = FUN_14010b500();
    uVar7 = 0;
    lVar5 = 0;
    do {
      if (*(short *)(lVar4 + lVar5 * 2) < 0) {
        *(byte *)((lVar5 >> 3) + 0xc + (longlong)param_1) =
             *(byte *)((lVar5 >> 3) + 0xc + (longlong)param_1) | (byte)(1 << (uVar7 & 7));
      }
      if (*(short *)(lVar4 + 2 + lVar5 * 2) < 0) {
        lVar6 = lVar5 + 1 >> 3;
        *(byte *)(lVar6 + 0xc + (longlong)param_1) =
             *(byte *)(lVar6 + 0xc + (longlong)param_1) | (byte)(1 << (uVar7 + 1 & 7));
      }
      if (*(short *)(lVar4 + 4 + lVar5 * 2) < 0) {
        lVar6 = lVar5 + 2 >> 3;
        *(byte *)(lVar6 + 0xc + (longlong)param_1) =
             *(byte *)(lVar6 + 0xc + (longlong)param_1) | (byte)(1 << (uVar7 + 2 & 7));
      }
      if (*(short *)(lVar4 + 6 + lVar5 * 2) < 0) {
        lVar6 = lVar5 + 3 >> 3;
        *(byte *)(lVar6 + 0xc + (longlong)param_1) =
             *(byte *)(lVar6 + 0xc + (longlong)param_1) | (byte)(1 << (uVar7 + 3 & 7));
      }
      uVar7 = uVar7 + 4;
      lVar5 = lVar5 + 4;
    } while ((int)uVar7 < 0x100);
  }
  return param_1;
}

