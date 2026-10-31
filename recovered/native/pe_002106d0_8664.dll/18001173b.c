/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18001173b */

undefined8 * FUN_18001173b(undefined8 *param_1,byte *param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_68 [61];
  byte local_2b;
  undefined2 local_2a;
  byte local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
    if (3 < (longlong)param_3 - (longlong)param_2) {
      param_2[0] = 0x30;
      param_2[1] = 0x70;
      param_2[2] = 0x2b;
      param_2[3] = 0x30;
      *param_1 = param_2 + 4;
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1800118d8;
    }
  }
  else {
    uVar2 = (uint)(param_4 >> 0x34) - 0x3ff;
    uVar10 = 0xfffffc02;
    if (param_4 >> 0x34 != 0) {
      uVar10 = (ulonglong)uVar2;
    }
    if (param_2 != param_3) {
      uVar11 = param_4 & 0xfffffffffffff;
      pbVar8 = param_2 + 1;
      *param_2 = param_4 >> 0x34 == 0 ^ 0x31;
      if (uVar11 != 0) {
        if (pbVar8 == param_3) goto LAB_18001183e;
        param_2[1] = 0x2e;
        pbVar8 = param_2 + 2;
        bVar5 = 0x30;
        do {
          if (pbVar8 == param_3) goto LAB_18001183e;
          *pbVar8 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar11 >> (bVar5 & 0x3f) & 0xffffffff];
          bVar1 = bVar5 & 0x3f;
          pbVar8 = pbVar8 + 1;
          bVar5 = bVar5 - 4;
          uVar11 = uVar11 & ~(-1L << bVar1);
        } while (uVar11 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pbVar8) {
        *pbVar8 = 0x70;
        if ((int)uVar10 < 0) {
          uVar2 = -(int)uVar10;
        }
        pbVar8[1] = (char)(uVar10 >> 0x1f) * '\x02' + 0x2b;
        pbVar8 = pbVar8 + 2;
        pbVar7 = local_28;
        if (uVar2 < 10) {
          local_2a._1_1_ = (byte)uVar2 | 0x30;
          pbVar7 = (byte *)((longlong)&local_2a + 1);
        }
        else {
          do {
            uVar3 = uVar2;
            pbVar6 = pbVar7;
            *(undefined2 *)(pbVar6 + -2) =
                 *(undefined2 *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + (ulonglong)(uVar3 % 100) * 2);
            pbVar7 = pbVar6 + -2;
            uVar2 = uVar3 / 100;
          } while (999 < uVar3);
          if (99 < uVar3) {
            pbVar6[-3] = (byte)(uVar3 / 100) | 0x30;
            pbVar7 = pbVar6 + -3;
          }
        }
        lVar9 = (longlong)local_28 - (longlong)pbVar7;
        uVar4 = 0x84;
        if (lVar9 <= (longlong)param_3 - (longlong)pbVar8) {
          thunk_FUN_180006ba5(pbVar7,lVar9,pbVar8);
          param_3 = pbVar8 + lVar9;
          uVar4 = 0;
        }
        *param_1 = param_3;
        *(undefined4 *)(param_1 + 1) = uVar4;
        goto LAB_1800118d8;
      }
    }
  }
LAB_18001183e:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
LAB_1800118d8:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

