/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140015162 */

undefined8 *
FUN_140015162(undefined8 *param_1,byte *param_2,byte *param_3,uint param_4,uint param_5)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 (*pauVar7) [32];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [61];
  byte local_3b;
  undefined2 local_3a;
  undefined8 local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  uVar4 = 6;
  if (-1 < (int)param_5) {
    uVar4 = (ulonglong)param_5;
  }
  uVar8 = param_4 & 0x7fffff;
  uVar10 = 0xffffff82;
  if (uVar8 == 0) {
    uVar10 = 0;
  }
  uVar9 = uVar8 * 2 + 0x1000000;
  uVar2 = (param_4 >> 0x17) - 0x7f;
  if (param_4 >> 0x17 == 0) {
    uVar9 = uVar8 * 2;
    uVar2 = uVar10;
  }
  uVar10 = -uVar2;
  if ((int)-uVar2 < 0) {
    uVar10 = uVar2;
  }
  if ((longlong)uVar4 <= (longlong)param_3 - (longlong)param_2) {
    lVar11 = 1;
    if (9 < uVar10) {
      lVar11 = 3 - (ulonglong)(uVar10 < 100);
    }
    if ((longlong)((lVar11 - (ulonglong)(uVar4 == 0)) + 4) <=
        (longlong)(((longlong)param_3 - (longlong)param_2) - uVar4)) {
      uVar8 = (uint)uVar4;
      if (uVar8 < 6) {
        uVar9 = (1 << ((char)uVar4 * -4 + 0x18U & 0x1f) &
                (uVar9 * 2 + 0x1ffffff | uVar9) & uVar9 * 2) + uVar9;
        *param_2 = (byte)(uVar9 >> 0x18) | 0x30;
        if (uVar4 != 0) goto LAB_14001527f;
        pauVar7 = (undefined1 (*) [32])(param_2 + 1);
      }
      else {
        *param_2 = (byte)(uVar9 >> 0x18) | 0x30;
LAB_14001527f:
        uVar9 = uVar9 & 0xffffff;
        param_2[1] = 0x2e;
        param_2[2] = "0123456789abcdefghijklmnopqrstuvwxyz"[uVar9 >> 0x14];
        pauVar7 = (undefined1 (*) [32])(param_2 + 3);
        if (uVar8 != 1) {
          iVar5 = 0x14;
          uVar12 = 0;
          do {
            if (iVar5 == 0) {
              pauVar7 = (undefined1 (*) [32])(*pauVar7 + uVar12);
              uVar12 = ~uVar12 + uVar4;
              FUN_1400b3c00(pauVar7,0x30,uVar12);
              break;
            }
            uVar9 = uVar9 & ~(-1 << ((byte)iVar5 & 0x1f));
            iVar5 = iVar5 + -4;
            (*pauVar7)[uVar12] =
                 "0123456789abcdefghijklmnopqrstuvwxyz"[uVar9 >> ((byte)iVar5 & 0x3f)];
            uVar12 = uVar12 + 1;
          } while (uVar8 - 1 != (int)uVar12);
          pauVar7 = (undefined1 (*) [32])(*pauVar7 + uVar12);
        }
      }
      pbVar1 = *pauVar7 + 2;
      (*pauVar7)[0] = 0x70;
      (*pauVar7)[1] = (char)((int)uVar2 >> 0x1f) * -2 + 0x2b;
      if (uVar10 < 10) {
        pbVar6 = (byte *)((longlong)&local_3a + 1);
        uVar8 = uVar10;
LAB_14001534b:
        *pbVar6 = (byte)uVar8 | 0x30;
      }
      else {
        uVar8 = uVar10 / 100;
        local_3a = *(undefined2 *)
                    (
                    "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                    + (ulonglong)(uVar10 % 100) * 2);
        if (99 < uVar10) {
          pbVar6 = &local_3b;
          goto LAB_14001534b;
        }
        pbVar6 = (byte *)&local_3a;
      }
      uVar4 = (longlong)&local_38 - (longlong)pbVar6;
      uVar3 = 0x84;
      if ((longlong)uVar4 <= (longlong)param_3 - (longlong)pbVar1) {
        thunk_FUN_14000c12d((undefined8 *)pbVar6,uVar4,(undefined8 *)pbVar1);
        param_3 = pbVar1 + uVar4;
        uVar3 = 0;
      }
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = uVar3;
      goto LAB_14001537e;
    }
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
LAB_14001537e:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_78)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_78);
}

