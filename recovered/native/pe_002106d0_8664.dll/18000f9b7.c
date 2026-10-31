/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000f9b7 */

undefined8 * FUN_18000f9b7(undefined8 *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
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
      goto LAB_18000fb45;
    }
  }
  else {
    uVar2 = param_4 >> 0x17;
    uVar9 = 0xffffff82;
    if (uVar2 != 0) {
      uVar9 = (ulonglong)(uVar2 - 0x7f);
    }
    if (param_2 != param_3) {
      pbVar7 = param_2 + 1;
      *param_2 = uVar2 == 0 ^ 0x31;
      if ((param_4 & 0x7fffff) != 0) {
        if (pbVar7 == param_3) goto LAB_18000faab;
        param_2[1] = 0x2e;
        pbVar7 = param_2 + 2;
        uVar10 = (param_4 & 0x7fffff) * 2;
        bVar4 = 0x14;
        do {
          if (pbVar7 == param_3) goto LAB_18000faab;
          *pbVar7 = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar10 >> (bVar4 & 0x3f)];
          bVar1 = bVar4 & 0x1f;
          pbVar7 = pbVar7 + 1;
          bVar4 = bVar4 - 4;
          uVar10 = uVar10 & ~(-1 << bVar1);
        } while (uVar10 != 0);
      }
      if (1 < (longlong)param_3 - (longlong)pbVar7) {
        *pbVar7 = 0x70;
        uVar2 = uVar2 - 0x7f;
        if ((int)uVar9 < 0) {
          uVar2 = -(int)uVar9;
        }
        pbVar7[1] = (char)(uVar9 >> 0x1f) * '\x02' + 0x2b;
        pbVar7 = pbVar7 + 2;
        pbVar6 = local_28;
        if (uVar2 < 10) {
          local_2a._1_1_ = (byte)uVar2 | 0x30;
          pbVar6 = (byte *)((longlong)&local_2a + 1);
        }
        else {
          do {
            uVar10 = uVar2;
            pbVar5 = pbVar6;
            *(undefined2 *)(pbVar5 + -2) =
                 *(undefined2 *)
                  (
                  "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                  + (ulonglong)(uVar10 % 100) * 2);
            pbVar6 = pbVar5 + -2;
            uVar2 = uVar10 / 100;
          } while (999 < uVar10);
          if (99 < uVar10) {
            pbVar5[-3] = (byte)(uVar10 / 100) | 0x30;
            pbVar6 = pbVar5 + -3;
          }
        }
        lVar8 = (longlong)local_28 - (longlong)pbVar6;
        uVar3 = 0x84;
        if (lVar8 <= (longlong)param_3 - (longlong)pbVar7) {
          thunk_FUN_180006ba5(pbVar6,lVar8,pbVar7);
          param_3 = pbVar7 + lVar8;
          uVar3 = 0;
        }
        *param_1 = param_3;
        *(undefined4 *)(param_1 + 1) = uVar3;
        goto LAB_18000fb45;
      }
    }
  }
LAB_18000faab:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
LAB_18000fb45:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
  }
  return param_1;
}

