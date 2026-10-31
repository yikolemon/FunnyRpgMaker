/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004881f */

longlong *
FUN_14004881f(longlong *param_1,byte *param_2,longlong param_3,undefined8 *param_4,int param_5,
             undefined8 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte bVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  puVar12 = (undefined1 *)*param_4;
  uVar1 = *(uint *)(param_4 + 1);
  uVar7 = (ulonglong)uVar1;
  uVar13 = 0x11;
  if (((((puVar12 < (undefined1 *)0x2386f26fc10000) &&
        (uVar13 = 0x10, puVar12 < (undefined1 *)0x38d7ea4c68000)) &&
       (uVar13 = 0xf, puVar12 < (undefined1 *)0x5af3107a4000)) &&
      (((uVar13 = 0xe, (ulonglong)puVar12 >> 0xd < 0x48c27395 &&
        (uVar13 = 0xd, (ulonglong)puVar12 >> 0xc < 0xe8d4a51)) &&
       ((uVar13 = 0xc, (ulonglong)puVar12 >> 0xb < 0x2e90edd &&
        ((uVar13 = 0xb, (ulonglong)puVar12 >> 10 < 0x9502f9 &&
         (uVar13 = 10, puVar12 < (undefined1 *)0x3b9aca00)))))))) &&
     ((uVar13 = 9, puVar12 < (undefined1 *)0x5f5e100 &&
      (((((uVar13 = 8, puVar12 < (undefined1 *)0x989680 &&
          (uVar13 = 7, puVar12 < (undefined1 *)0xf4240)) &&
         (uVar13 = 6, puVar12 < (undefined1 *)0x186a0)) &&
        ((uVar13 = 5, puVar12 < (undefined1 *)0x2710 && (uVar13 = 4, puVar12 < (undefined1 *)0x3e8))
        )) && (uVar13 = 3, puVar12 < (undefined1 *)0x64)))))) {
    uVar13 = 2 - (puVar12 < (undefined1 *)0xa);
  }
  uVar10 = uVar1 + uVar13;
  if (param_5 == 3) {
    if (9 < uVar10 + 3) goto LAB_1400489eb;
  }
  else if (param_5 != 2) {
    if (param_5 == 0) {
      iVar2 = -3 - uVar13;
      if (uVar13 == 1) {
        iVar2 = -3;
      }
      if ((int)uVar1 <= (int)(uVar13 == 1 ^ 5) && iVar2 <= (int)uVar1) goto LAB_1400489ba;
    }
LAB_1400489eb:
    uVar4 = (ulonglong)(((uVar13 + 6) - (uint)(uVar13 < 2)) - (uint)(uVar10 + 0x62 < 199));
    if (param_3 - (longlong)param_2 < (longlong)uVar4) goto LAB_140048c7c;
    uVar7 = (ulonglong)uVar13;
    if ((ulonglong)puVar12 >> 0x20 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (int)((ulonglong)puVar12 / 100000000) * -100000000 + (int)puVar12;
      iVar2 = uVar3 / 10000 + (uVar3 / 100000000) * -10000;
      uVar15 = (uint)(iVar2 * 0x147b) >> 0x13;
      *(undefined2 *)(param_2 + (uVar7 - 1)) =
           *(undefined2 *)(&DAT_14013cca0 + (ulonglong)((uVar3 % 10000) % 100) * 2);
      *(undefined2 *)(param_2 + (uVar7 - 3)) =
           *(undefined2 *)(&DAT_14013cca0 + (ulonglong)((uVar3 % 10000) / 100) * 2);
      *(undefined2 *)(param_2 + (uVar7 - 5)) =
           *(undefined2 *)(&DAT_14013cca0 + (ulonglong)(iVar2 + uVar15 * -100 & 0xffff) * 2);
      *(undefined2 *)(param_2 + (uVar7 - 7)) =
           *(undefined2 *)(&DAT_14013cca0 + (ulonglong)uVar15 * 2);
      uVar3 = 8;
      puVar12 = (undefined1 *)((ulonglong)puVar12 / 100000000 & 0xffffffff);
    }
    uVar15 = (uint)puVar12;
    if (9999 < uVar15) {
      do {
        uVar16 = (uint)puVar12;
        uVar5 = (ulonglong)puVar12 & 0xffffffff;
        puVar12 = (undefined1 *)(uVar5 / 10000);
        uVar15 = (uint)puVar12;
        uVar14 = (int)(uVar5 / 10000) * -10000 + uVar16;
        *(undefined2 *)(param_2 + (uVar7 - uVar3) + -1) =
             *(undefined2 *)(&DAT_14013cca0 + (ulonglong)(uVar14 % 100) * 2);
        *(undefined2 *)(param_2 + (uVar7 - uVar3) + -3) =
             *(undefined2 *)(&DAT_14013cca0 + ((ulonglong)uVar14 / 100) * 2);
        uVar3 = uVar3 + 4;
      } while (99999999 < uVar16);
    }
    uVar16 = uVar15;
    if (99 < uVar15) {
      uVar16 = (uVar15 & 0xffff) / 100;
      *(undefined2 *)(param_2 + ~(ulonglong)uVar3 + uVar7) =
           *(undefined2 *)(&DAT_14013cca0 + (ulonglong)(uVar15 + uVar16 * -100 & 0xffff) * 2);
    }
    if (uVar16 < 10) {
      bVar11 = (byte)uVar16 | 0x30;
    }
    else {
      bVar11 = (&DAT_14013cca0)[(ulonglong)uVar16 * 2];
      param_2[2] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   [(ulonglong)uVar16 * 2];
    }
    *param_2 = bVar11;
    uVar7 = 1;
    if (1 < uVar13) {
      param_2[1] = 0x2e;
      uVar7 = (ulonglong)(uVar13 + 1);
    }
    param_2[uVar7] = 0x65;
    lVar8 = (longlong)(int)uVar7;
    if ((int)uVar10 < 1) {
      param_2[lVar8 + 1] = 0x2d;
      uVar10 = 1 - uVar10;
    }
    else {
      uVar10 = (uVar1 + uVar13) - 1;
      param_2[lVar8 + 1] = 0x2b;
    }
    if (uVar10 < 100) {
      *(undefined2 *)(param_2 + uVar7 + 2) = *(undefined2 *)(&DAT_14013cca0 + (ulonglong)uVar10 * 2)
      ;
    }
    else {
      uVar1 = (uVar10 / 10) * 2;
      *(undefined2 *)(param_2 + uVar7 + 2) = *(undefined2 *)(&DAT_14013cca0 + uVar1);
      param_2[lVar8 + 4] = (char)uVar10 + (char)uVar1 * -5 | 0x30;
    }
    goto LAB_140048e62;
  }
LAB_1400489ba:
  if ((int)uVar1 < 0) {
    if ((int)uVar10 < 1) {
      uVar3 = 2 - uVar1;
    }
    else {
      uVar3 = uVar13 + 1;
    }
  }
  else {
    uVar3 = uVar10;
    if (puVar12 == (undefined1 *)0x1) {
      uVar3 = uVar10 - (byte)(&DAT_14013d1b0)[uVar7];
    }
  }
  puVar9 = (undefined1 *)(param_3 - (longlong)param_2);
  uVar4 = (ulonglong)uVar3;
  if ((longlong)puVar9 < (longlong)uVar4) {
LAB_140048c7c:
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
    return param_1;
  }
  uVar5 = uVar4;
  if (0 < (int)uVar1) {
    if (0x16 < uVar1) {
LAB_140048cb5:
      FUN_140047bc6(param_1,param_2,param_3,param_6,0);
      return param_1;
    }
    lVar8 = 0;
    if (puVar12 != (undefined1 *)0x0) {
      for (; ((ulonglong)puVar12 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
      }
    }
    bVar11 = (byte)lVar8;
    if (puVar12 == (undefined1 *)0x0) {
      bVar11 = 0;
    }
    puVar9 = (undefined1 *)((ulonglong)puVar12 >> (bVar11 & 0x3f));
    if (*(undefined1 **)(&DAT_14013d2f0 + uVar7 * 8) < puVar9) goto LAB_140048cb5;
    uVar5 = (ulonglong)uVar13;
  }
  pbVar6 = param_2 + uVar5;
  if ((ulonglong)puVar12 >> 0x20 != 0) {
    puVar9 = (undefined1 *)((ulonglong)puVar12 / 100000000);
    uVar3 = (int)puVar12 + (int)puVar9 * -100000000;
    iVar2 = uVar3 / 10000 + (uVar3 / 100000000) * -10000;
    uVar15 = (uint)(iVar2 * 0x147b) >> 0x13;
    *(undefined2 *)(pbVar6 + -2) =
         *(undefined2 *)(&DAT_14013cca0 + (ulonglong)((uVar3 % 10000) % 100) * 2);
    *(undefined2 *)(pbVar6 + -4) =
         *(undefined2 *)(&DAT_14013cca0 + (ulonglong)((uVar3 % 10000) / 100) * 2);
    *(undefined2 *)(pbVar6 + -6) =
         *(undefined2 *)(&DAT_14013cca0 + (ulonglong)(iVar2 + uVar15 * -100 & 0xffff) * 2);
    *(undefined2 *)(pbVar6 + -8) = *(undefined2 *)(&DAT_14013cca0 + (ulonglong)uVar15 * 2);
    pbVar6 = pbVar6 + -8;
    puVar12 = puVar9;
  }
  uVar3 = (uint)puVar12;
  if (9999 < uVar3) {
    puVar9 = &DAT_14013cca0;
    do {
      uVar15 = (uint)puVar12;
      uVar5 = (ulonglong)puVar12 & 0xffffffff;
      puVar12 = (undefined1 *)(uVar5 / 10000);
      uVar3 = (uint)puVar12;
      uVar16 = (int)(uVar5 / 10000) * -10000 + uVar15;
      *(undefined2 *)(pbVar6 + -2) = *(undefined2 *)(&DAT_14013cca0 + (ulonglong)(uVar16 % 100) * 2)
      ;
      *(undefined2 *)(pbVar6 + -4) = *(undefined2 *)(&DAT_14013cca0 + ((ulonglong)uVar16 / 100) * 2)
      ;
      pbVar6 = pbVar6 + -4;
    } while (99999999 < uVar15);
  }
  uVar15 = uVar3;
  if (99 < uVar3) {
    uVar15 = (uVar3 & 0xffff) / 100;
    puVar9 = (undefined1 *)(ulonglong)uVar15;
    *(undefined2 *)(pbVar6 + -2) =
         *(undefined2 *)(&DAT_14013cca0 + (ulonglong)(uVar3 + uVar15 * -100 & 0xffff) * 2);
    pbVar6 = pbVar6 + -2;
  }
  if (uVar15 < 10) {
    pbVar6[-1] = (byte)uVar15 | 0x30;
  }
  else {
    puVar9 = &DAT_14013cca0;
    *(undefined2 *)(pbVar6 + -2) = *(undefined2 *)(&DAT_14013cca0 + (ulonglong)uVar15 * 2);
  }
  if ((int)uVar1 < 1) {
    if (uVar7 == 0) goto LAB_140048e62;
    if (0 < (int)uVar10) {
      FUN_140135ff0(param_2,param_2 + 1,(ulonglong)uVar10);
      param_2[uVar10] = 0x2e;
      goto LAB_140048e62;
    }
    param_2[0] = 0x30;
    param_2[1] = 0x2e;
    if (uVar10 == 0) goto LAB_140048e62;
    uVar7 = (ulonglong)-uVar10;
    pbVar6 = param_2 + 2;
  }
  else {
    pbVar6 = param_2 + uVar13;
  }
  thunk_FUN_1401366a0(pbVar6,CONCAT71((int7)((ulonglong)puVar9 >> 8),0x30),uVar7);
LAB_140048e62:
  *param_1 = (longlong)(param_2 + uVar4);
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}

