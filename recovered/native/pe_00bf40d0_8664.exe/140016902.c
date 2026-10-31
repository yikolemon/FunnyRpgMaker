/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140016902 */

undefined8 * FUN_140016902(undefined8 *param_1,byte *param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [61];
  byte local_2b;
  undefined1 local_2a [2];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
    if (3 < (longlong)param_3 - (longlong)param_2) {
      param_2[0] = 0x30;
      param_2[1] = 0x70;
      param_2[2] = 0x2b;
      param_2[3] = 0x30;
      *param_1 = param_2 + 4;
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140016a9f;
    }
  }
  else {
    uVar2 = (uint)(param_4 >> 0x34) - 0x3ff;
    uVar8 = 0xfffffc02;
    if (param_4 >> 0x34 != 0) {
      uVar8 = uVar2;
    }
    if (param_2 != param_3) {
      uVar9 = param_4 & 0xfffffffffffff;
      pbVar7 = param_2 + 1;
      *param_2 = param_4 >> 0x34 == 0 ^ 0x31;
      if (uVar9 != 0) {
        if (pbVar7 == param_3) goto LAB_140016a05;
        param_2[1] = 0x2e;
        pbVar7 = param_2 + 2;
        bVar4 = 0x30;
        do {
          if (pbVar7 == param_3) goto LAB_140016a05;
          *pbVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar9 >> (bVar4 & 0x3f) & 0xffffffff];
          bVar1 = bVar4 & 0x3f;
          pbVar7 = pbVar7 + 1;
          bVar4 = bVar4 - 4;
          uVar9 = uVar9 & ~(-1L << bVar1);
        } while (uVar9 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pbVar7) {
        *pbVar7 = 0x70;
        if ((int)uVar8 < 0) {
          uVar2 = -uVar8;
        }
        pbVar7[1] = (char)((int)uVar8 >> 0x1f) * -2 + 0x2b;
        pbVar7 = pbVar7 + 2;
        puVar6 = &local_28;
        if (uVar2 < 10) {
          local_2a[1] = (byte)uVar2 | 0x30;
          puVar6 = (undefined8 *)(local_2a + 1);
        }
        else {
          do {
            uVar8 = uVar2;
            puVar5 = puVar6;
            *(undefined2 *)((longlong)puVar5 + -2) =
                 *(undefined2 *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + (ulonglong)(uVar8 % 100) * 2);
            puVar6 = (undefined8 *)((longlong)puVar5 + -2);
            uVar2 = uVar8 / 100;
          } while (999 < uVar8);
          if (99 < uVar8) {
            *(byte *)((longlong)puVar5 + -3) = (byte)(uVar8 / 100) | 0x30;
            puVar6 = (undefined8 *)((longlong)puVar5 + -3);
          }
        }
        uVar9 = (longlong)&local_28 - (longlong)puVar6;
        uVar3 = 0x84;
        if ((longlong)uVar9 <= (longlong)param_3 - (longlong)pbVar7) {
          thunk_FUN_14000c12d(puVar6,uVar9,(undefined8 *)pbVar7);
          param_3 = pbVar7 + uVar9;
          uVar3 = 0;
        }
        *param_1 = param_3;
        *(undefined4 *)(param_1 + 1) = uVar3;
        goto LAB_140016a9f;
      }
    }
  }
LAB_140016a05:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
LAB_140016a9f:
  if (DAT_14012ea80 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

