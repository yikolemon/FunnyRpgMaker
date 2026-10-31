/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000a36b */

int * FUN_1000a36b(int *param_1,byte *param_2,int param_3,uint param_4,uint param_5,uint param_6,
                  undefined4 param_7,int param_8,undefined8 param_9)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  undefined2 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar10 = 0x11;
  if (((((param_5 < 0x2386f3 && (uint)(0x6fc0ffff < param_4) <= 0x2386f2 - param_5) &&
        (uVar10 = 0x10, param_5 < 0x38d7f && (uint)(0xa4c67fff < param_4) <= 0x38d7e - param_5)) &&
       (uVar10 = 0xf, param_5 < 0x5af4 && (uint)(0x107a3fff < param_4) <= 0x5af3 - param_5)) &&
      (((uVar10 = 0xe,
        param_5 >> 0xd == 0 &&
        (uint)(0x48c27394 < (param_5 << 0x13 | param_4 >> 0xd)) <= -(param_5 >> 0xd) &&
        (uVar10 = 0xd,
        param_5 >> 0xc == 0 &&
        (uint)(0xe8d4a50 < (param_5 << 0x14 | param_4 >> 0xc)) <= -(param_5 >> 0xc))) &&
       ((uVar10 = 0xc,
        param_5 >> 0xb == 0 &&
        (uint)(0x2e90edc < (param_5 << 0x15 | param_4 >> 0xb)) <= -(param_5 >> 0xb) &&
        ((uVar10 = 0xb,
         param_5 >> 10 == 0 &&
         (uint)(0x9502f8 < (param_5 << 0x16 | param_4 >> 10)) <= -(param_5 >> 10) &&
         (uVar10 = 10, param_5 == 0 && (uint)(999999999 < param_4) <= -param_5)))))))) &&
     ((uVar10 = 9, param_5 == 0 && (uint)(99999999 < param_4) <= -param_5 &&
      (((((uVar10 = 8, param_5 == 0 && (uint)(9999999 < param_4) <= -param_5 &&
          (uVar10 = 7, param_5 == 0 && (uint)(999999 < param_4) <= -param_5)) &&
         (uVar10 = 6, param_5 == 0 && (uint)(99999 < param_4) <= -param_5)) &&
        ((uVar10 = 5, param_5 == 0 && (uint)(9999 < param_4) <= -param_5 &&
         (uVar10 = 4, param_5 == 0 && (uint)(999 < param_4) <= -param_5)))) &&
       (uVar10 = 3, param_5 == 0 && (uint)(99 < param_4) <= -param_5)))))) {
    uVar10 = (param_5 != 0 || -param_5 < (uint)(9 < param_4)) + 1;
  }
  uVar1 = uVar10 + param_6;
  if (param_8 == 3) {
    if (9 < uVar1 + 3) goto LAB_1000a597;
  }
  else if (param_8 != 2) {
    if (param_8 == 0) {
      iVar11 = -3 - uVar10;
      if (uVar10 == 1) {
        iVar11 = -3;
      }
      if ((int)param_6 <= (int)(uVar10 == 1 ^ 5) && iVar11 <= (int)param_6) goto LAB_1000a56a;
    }
LAB_1000a597:
    iVar11 = ((uVar10 + 6) - (uint)(uVar10 < 2)) - (uint)(uVar1 + 0x62 < 199);
    if (param_3 - (int)param_2 < iVar11) goto LAB_1000a825;
    if (param_5 == 0) {
      uVar7 = 0;
      uVar6 = param_4;
    }
    else {
      lVar3 = (ulonglong)param_5 * 0x8461cefd + ((ulonglong)param_4 * 0x8461cefd >> 0x20);
      uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar14 = (uint)((ulonglong)param_4 * 0xabcc7711 >> 0x20);
      uVar6 = (uint)CARRY4((uint)((ulonglong)param_4 * 0xabcc7711),(uint)lVar3);
      uVar7 = uVar14 + uVar12;
      lVar3 = (ulonglong)param_5 * 0xabcc7711 +
              (ulonglong)CONCAT14(CARRY4(uVar14,uVar12) || CARRY4(uVar7,uVar6),uVar7 + uVar6);
      uVar6 = (int)((ulonglong)lVar3 >> 0x20) << 6 | (uint)lVar3 >> 0x1a;
      param_4 = uVar6 * -100000000 + param_4;
      uVar12 = param_4 % 10000;
      uVar7 = (param_4 / 10000) % 10000;
      *(undefined2 *)(param_2 + (uVar10 - 1)) = (&DAT_1028b698)[uVar12 % 100];
      *(undefined2 *)(param_2 + (uVar10 - 3)) = (&DAT_1028b698)[uVar12 / 100];
      *(undefined2 *)(param_2 + (uVar10 - 5)) = (&DAT_1028b698)[uVar7 % 100];
      *(undefined2 *)(param_2 + (uVar10 - 7)) = (&DAT_1028b698)[uVar7 / 100];
      uVar7 = 8;
    }
    if (9999 < uVar6) {
      iVar13 = -uVar7;
      uVar7 = uVar6;
      do {
        uVar6 = uVar7 / 10000;
        *(undefined2 *)(param_2 + iVar13 + (uVar10 - 1)) = (&DAT_1028b698)[(uVar7 % 10000) % 100];
        *(undefined2 *)(param_2 + iVar13 + (uVar10 - 3)) = (&DAT_1028b698)[(uVar7 % 10000) / 100];
        iVar13 = iVar13 + -4;
        bVar2 = 99999999 < uVar7;
        uVar7 = uVar6;
      } while (bVar2);
      uVar7 = -iVar13;
    }
    uVar12 = uVar6;
    if (99 < uVar6) {
      uVar12 = (uVar6 & 0xffff) / 100;
      *(undefined2 *)(param_2 + ~uVar7 + uVar10) = (&DAT_1028b698)[uVar6 + uVar12 * -100 & 0xffff];
    }
    if (uVar12 < 10) {
      bVar5 = (byte)uVar12 | 0x30;
    }
    else {
      param_2[2] = *(byte *)((int)&DAT_1028b698 + uVar12 * 2 + 1);
      bVar5 = *(byte *)(&DAT_1028b698 + uVar12);
    }
    iVar13 = 1;
    *param_2 = bVar5;
    if (1 < uVar10) {
      param_2[1] = 0x2e;
      iVar13 = uVar10 + 1;
    }
    param_2[iVar13] = 0x65;
    uVar10 = (param_6 + uVar10) - 1;
    if ((int)uVar1 < 1) {
      uVar10 = 1 - uVar1;
    }
    param_2[iVar13 + 1] = ((int)uVar1 < 1) * '\x02' + 0x2b;
    if (uVar10 < 100) {
      uVar4 = (&DAT_1028b698)[uVar10];
    }
    else {
      uVar4 = (&DAT_1028b698)[uVar10 / 10];
      param_2[iVar13 + 4] = (char)uVar10 + (char)(uVar10 / 10) * -10 | 0x30;
    }
    *(undefined2 *)(param_2 + iVar13 + 2) = uVar4;
    *param_1 = (int)(param_2 + iVar11);
    goto LAB_1000aa8c;
  }
LAB_1000a56a:
  if ((int)param_6 < 0) {
    if ((int)uVar1 < 1) {
      uVar6 = 2 - param_6;
    }
    else {
      uVar6 = uVar10 + 1;
    }
  }
  else {
    uVar6 = uVar1;
    if (param_4 == 1 && param_5 == 0) {
      uVar6 = uVar1 - (byte)(&DAT_1028bb74)[param_6];
    }
  }
  if (param_3 - (int)param_2 < (int)uVar6) {
LAB_1000a825:
    *param_1 = param_3;
    param_1[1] = 0x84;
    return param_1;
  }
  uVar7 = uVar6;
  if (0 < (int)param_6) {
    if (0x16 < param_6) {
LAB_1000a89a:
      FUN_10008ded(param_1,param_2,param_3,param_9,0);
      return param_1;
    }
    if (param_4 == 0) {
      iVar11 = 0;
      if (param_5 != 0) {
        for (; (param_5 >> iVar11 & 1) == 0; iVar11 = iVar11 + 1) {
        }
      }
      bVar5 = (byte)iVar11 | 0x20;
    }
    else {
      iVar11 = 0;
      if (param_4 != 0) {
        for (; (param_4 >> iVar11 & 1) == 0; iVar11 = iVar11 + 1) {
        }
      }
      bVar5 = (byte)iVar11;
    }
    uVar12 = param_5 >> (bVar5 & 0x1f);
    uVar14 = 0;
    if ((bVar5 & 0x20) == 0) {
      uVar14 = uVar12;
      uVar12 = param_4 >> (bVar5 & 0x1f) | param_5 << 0x20 - (bVar5 & 0x1f);
    }
    uVar7 = uVar10;
    if (*(uint *)(&DAT_1028bcb4 + param_6 * 8) < uVar14 ||
        *(uint *)(&DAT_1028bcb4 + param_6 * 8) - uVar14 <
        (uint)(*(uint *)(&DAT_1028bcb0 + param_6 * 8) < uVar12)) goto LAB_1000a89a;
  }
  pbVar9 = param_2 + uVar7;
  uVar7 = param_4;
  if (param_5 != 0) {
    lVar3 = (ulonglong)param_5 * 0x8461cefd + ((ulonglong)param_4 * 0x8461cefd >> 0x20);
    uVar14 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar8 = (uint)((ulonglong)param_4 * 0xabcc7711 >> 0x20);
    uVar7 = (uint)CARRY4((uint)((ulonglong)param_4 * 0xabcc7711),(uint)lVar3);
    uVar12 = uVar8 + uVar14;
    lVar3 = (ulonglong)param_5 * 0xabcc7711 +
            (ulonglong)CONCAT14(CARRY4(uVar8,uVar14) || CARRY4(uVar12,uVar7),uVar12 + uVar7);
    uVar7 = (int)((ulonglong)lVar3 >> 0x20) << 6 | (uint)lVar3 >> 0x1a;
    param_4 = uVar7 * -100000000 + param_4;
    uVar14 = param_4 % 10000;
    uVar12 = (param_4 / 10000) % 10000;
    *(undefined2 *)(pbVar9 + -2) = (&DAT_1028b698)[uVar14 % 100];
    *(undefined2 *)(pbVar9 + -4) = (&DAT_1028b698)[uVar14 / 100];
    *(undefined2 *)(pbVar9 + -6) = (&DAT_1028b698)[uVar12 % 100];
    *(undefined2 *)(pbVar9 + -8) = (&DAT_1028b698)[uVar12 / 100];
    pbVar9 = pbVar9 + -8;
  }
  uVar12 = uVar7;
  if (9999 < uVar7) {
    do {
      uVar7 = uVar12 / 10000;
      *(undefined2 *)(pbVar9 + -2) = (&DAT_1028b698)[(uVar12 % 10000) % 100];
      *(undefined2 *)(pbVar9 + -4) = (&DAT_1028b698)[(uVar12 % 10000) / 100];
      pbVar9 = pbVar9 + -4;
      bVar2 = 99999999 < uVar12;
      uVar12 = uVar7;
    } while (bVar2);
  }
  uVar12 = uVar7;
  if (99 < uVar7) {
    uVar12 = (uVar7 & 0xffff) / 100;
    *(undefined2 *)(pbVar9 + -2) = (&DAT_1028b698)[uVar7 + uVar12 * -100 & 0xffff];
    pbVar9 = pbVar9 + -2;
  }
  if (uVar12 < 10) {
    pbVar9[-1] = (byte)uVar12 | 0x30;
  }
  else {
    *(undefined2 *)(pbVar9 + -2) = (&DAT_1028b698)[uVar12];
  }
  if ((int)param_6 < 1) {
    if (param_6 != 0) {
      if ((int)uVar1 < 1) {
        param_2[0] = 0x30;
        param_2[1] = 0x2e;
        if (uVar1 != 0) {
          FUN_1000895c(param_2 + 2,0x30,-uVar1);
        }
      }
      else {
        FUN_1025b2d0(param_2,param_2 + 1,uVar1);
        param_2[uVar1] = 0x2e;
      }
    }
  }
  else {
    FUN_1000895c(param_2 + uVar10,0x30,param_6);
  }
  *param_1 = (int)(param_2 + uVar6);
LAB_1000aa8c:
  param_1[1] = 0;
  return param_1;
}

