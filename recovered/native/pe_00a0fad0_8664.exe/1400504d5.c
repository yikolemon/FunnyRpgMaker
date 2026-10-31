/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400504d5 */

undefined8 *
FUN_1400504d5(undefined8 *param_1,byte *param_2,byte *param_3,ulonglong param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [61];
  byte local_3b;
  undefined1 local_3a [2];
  undefined8 local_38;
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_78;
  uVar3 = 0xd;
  if (-1 < (int)param_5) {
    uVar3 = param_5;
  }
  uVar9 = param_4 & 0xfffffffffffff;
  uVar10 = 0xfffffc02;
  if (uVar9 == 0) {
    uVar10 = 0;
  }
  uVar8 = uVar9 + 0x10000000000000;
  uVar2 = (uint)(param_4 >> 0x34) - 0x3ff;
  if (param_4 >> 0x34 == 0) {
    uVar8 = uVar9;
    uVar2 = uVar10;
  }
  uVar10 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar10 = uVar2;
  }
  lVar5 = 1;
  if ((9 < uVar10) && (lVar5 = 2, 99 < uVar10)) {
    lVar5 = 4 - (ulonglong)(uVar10 < 1000);
  }
  uVar9 = (ulonglong)uVar3;
  if (((longlong)param_3 - (longlong)param_2 < (longlong)uVar9) ||
     ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar9) <
      (longlong)((lVar5 - (ulonglong)(uVar3 == 0)) + 4))) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    goto LAB_14005072c;
  }
  if (uVar3 < 0xd) {
    uVar8 = uVar8 + (1L << ((char)uVar3 * -4 + 0x34U & 0x3f) &
                    (uVar8 * 2 + 0x1fffffffffffff | uVar8) & uVar8 * 2);
    *param_2 = (byte)(uVar8 >> 0x34) | 0x30;
    if (uVar3 != 0) goto LAB_14005060c;
    param_2 = param_2 + 1;
  }
  else {
    *param_2 = (byte)(uVar8 >> 0x34) | 0x30;
LAB_14005060c:
    uVar8 = uVar8 & 0xfffffffffffff;
    param_2[1] = 0x2e;
    param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar8 >> 0x30];
    param_2 = param_2 + 3;
    if (uVar3 != 1) {
      lVar5 = 0x30;
      uVar11 = 0;
      do {
        if (lVar5 == 0) {
          param_2 = param_2 + uVar11;
          uVar11 = ~uVar11 + uVar9;
          FUN_1401366a0(param_2,CONCAT71((int7)(uVar8 >> 8),0x30),uVar11);
          break;
        }
        uVar8 = uVar8 & ~(-1L << ((byte)lVar5 & 0x3f));
        lVar5 = lVar5 + -4;
        param_2[uVar11] =
             "0123456789abcdefghijklmnopqrstuvwxyz"[uVar8 >> ((byte)lVar5 & 0x3f) & 0xffffffff];
        uVar11 = uVar11 + 1;
      } while (uVar3 - 1 != (int)uVar11);
      param_2 = param_2 + uVar11;
    }
  }
  pbVar1 = param_2 + 2;
  *param_2 = 0x70;
  param_2[1] = (char)((int)uVar2 >> 0x1f) * -2 + 0x2b;
  puVar7 = &local_38;
  if (uVar10 < 10) {
    local_3a[1] = (byte)uVar10 | 0x30;
    puVar7 = (undefined8 *)(local_3a + 1);
  }
  else {
    do {
      uVar3 = uVar10;
      puVar6 = puVar7;
      *(undefined2 *)((longlong)puVar6 + -2) =
           *(undefined2 *)(&DAT_14013ae08 + (ulonglong)(uVar3 % 100) * 2);
      puVar7 = (undefined8 *)((longlong)puVar6 + -2);
      uVar10 = uVar3 / 100;
    } while (999 < uVar3);
    if (99 < uVar3) {
      *(byte *)((longlong)puVar6 + -3) = (byte)(uVar3 / 100) | 0x30;
      puVar7 = (undefined8 *)((longlong)puVar6 + -3);
    }
  }
  lVar5 = (longlong)&local_38 - (longlong)puVar7;
  uVar4 = 0x84;
  if (lVar5 <= (longlong)param_3 - (longlong)pbVar1) {
    thunk_FUN_140045e1f(puVar7,lVar5,pbVar1);
    param_3 = pbVar1 + lVar5;
    uVar4 = 0;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar4;
LAB_14005072c:
  if (DAT_1401c9640 == (local_38 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_78);
}

