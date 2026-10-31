/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140016f9a */

undefined8 *
FUN_140016f9a(undefined8 *param_1,byte *param_2,byte *param_3,ulonglong param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined1 (*pauVar9) [32];
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [61];
  byte local_3b;
  undefined1 local_3a [2];
  undefined8 local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  uVar3 = 0xd;
  if (-1 < (int)param_5) {
    uVar3 = param_5;
  }
  uVar10 = param_4 & 0xfffffffffffff;
  uVar11 = 0xfffffc02;
  if (uVar10 == 0) {
    uVar11 = 0;
  }
  uVar8 = uVar10 + 0x10000000000000;
  uVar2 = (uint)(param_4 >> 0x34) - 0x3ff;
  if (param_4 >> 0x34 == 0) {
    uVar8 = uVar10;
    uVar2 = uVar11;
  }
  uVar11 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar11 = uVar2;
  }
  lVar5 = 1;
  if ((9 < uVar11) && (lVar5 = 2, 99 < uVar11)) {
    lVar5 = 4 - (ulonglong)(uVar11 < 1000);
  }
  uVar10 = (ulonglong)uVar3;
  if (((longlong)param_3 - (longlong)param_2 < (longlong)uVar10) ||
     ((longlong)(((longlong)param_3 - (longlong)param_2) - uVar10) <
      (longlong)((lVar5 - (ulonglong)(uVar3 == 0)) + 4))) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    goto LAB_1400171f1;
  }
  if (uVar3 < 0xd) {
    uVar8 = uVar8 + (1L << ((char)uVar3 * -4 + 0x34U & 0x3f) &
                    (uVar8 * 2 + 0x1fffffffffffff | uVar8) & uVar8 * 2);
    *param_2 = (byte)(uVar8 >> 0x34) | 0x30;
    if (uVar3 != 0) goto LAB_1400170d1;
    pauVar9 = (undefined1 (*) [32])(param_2 + 1);
  }
  else {
    *param_2 = (byte)(uVar8 >> 0x34) | 0x30;
LAB_1400170d1:
    uVar8 = uVar8 & 0xfffffffffffff;
    param_2[1] = 0x2e;
    param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar8 >> 0x30];
    pauVar9 = (undefined1 (*) [32])(param_2 + 3);
    if (uVar3 != 1) {
      lVar5 = 0x30;
      uVar12 = 0;
      do {
        if (lVar5 == 0) {
          pauVar9 = (undefined1 (*) [32])(*pauVar9 + uVar12);
          uVar12 = ~uVar12 + uVar10;
          FUN_1400b3c00(pauVar9,0x30,uVar12);
          break;
        }
        uVar8 = uVar8 & ~(-1L << ((byte)lVar5 & 0x3f));
        lVar5 = lVar5 + -4;
        (*pauVar9)[uVar12] =
             "0123456789abcdefghijklmnopqrstuvwxyz"[uVar8 >> ((byte)lVar5 & 0x3f) & 0xffffffff];
        uVar12 = uVar12 + 1;
      } while (uVar3 - 1 != (int)uVar12);
      pauVar9 = (undefined1 (*) [32])(*pauVar9 + uVar12);
    }
  }
  pbVar1 = *pauVar9 + 2;
  (*pauVar9)[0] = 0x70;
  (*pauVar9)[1] = (char)((int)uVar2 >> 0x1f) * -2 + 0x2b;
  puVar7 = &local_38;
  if (uVar11 < 10) {
    local_3a[1] = (byte)uVar11 | 0x30;
    puVar7 = (undefined8 *)(local_3a + 1);
  }
  else {
    do {
      uVar3 = uVar11;
      puVar6 = puVar7;
      *(undefined2 *)((longlong)puVar6 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (ulonglong)(uVar3 % 100) * 2);
      puVar7 = (undefined8 *)((longlong)puVar6 + -2);
      uVar11 = uVar3 / 100;
    } while (999 < uVar3);
    if (99 < uVar3) {
      *(byte *)((longlong)puVar6 + -3) = (byte)(uVar3 / 100) | 0x30;
      puVar7 = (undefined8 *)((longlong)puVar6 + -3);
    }
  }
  uVar10 = (longlong)&local_38 - (longlong)puVar7;
  uVar4 = 0x84;
  if ((longlong)uVar10 <= (longlong)param_3 - (longlong)pbVar1) {
    thunk_FUN_14000c12d(puVar7,uVar10,(undefined8 *)pbVar1);
    param_3 = pbVar1 + uVar10;
    uVar4 = 0;
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar4;
LAB_1400171f1:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_78);
}

