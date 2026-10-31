/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040fc10 */

int * __cdecl
FUN_0040fc10(int *param_1,uint *param_2,byte *param_3,uint param_4,uint param_5,uint param_6,
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
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  uVar9 = 0x11;
  if (((((param_5 < 0x2386f3 && (uint)(0x6fc0ffff < param_4) <= 0x2386f2 - param_5) &&
        (uVar9 = 0x10, param_5 < 0x38d7f && (uint)(0xa4c67fff < param_4) <= 0x38d7e - param_5)) &&
       (uVar9 = 0xf, param_5 < 0x5af4 && (uint)(0x107a3fff < param_4) <= 0x5af3 - param_5)) &&
      (((uVar9 = 0xe,
        param_5 >> 0xd == 0 &&
        (uint)(0x48c27394 < (param_5 << 0x13 | param_4 >> 0xd)) <= -(param_5 >> 0xd) &&
        (uVar9 = 0xd,
        param_5 >> 0xc == 0 &&
        (uint)(0xe8d4a50 < (param_5 << 0x14 | param_4 >> 0xc)) <= -(param_5 >> 0xc))) &&
       ((uVar9 = 0xc,
        param_5 >> 0xb == 0 &&
        (uint)(0x2e90edc < (param_5 << 0x15 | param_4 >> 0xb)) <= -(param_5 >> 0xb) &&
        ((uVar9 = 0xb,
         param_5 >> 10 == 0 &&
         (uint)(0x9502f8 < (param_5 << 0x16 | param_4 >> 10)) <= -(param_5 >> 10) &&
         (uVar9 = 10, param_5 == 0 && (uint)(999999999 < param_4) <= -param_5)))))))) &&
     ((uVar9 = 9, param_5 == 0 && (uint)(99999999 < param_4) <= -param_5 &&
      (((((uVar9 = 8, param_5 == 0 && (uint)(9999999 < param_4) <= -param_5 &&
          (uVar9 = 7, param_5 == 0 && (uint)(999999 < param_4) <= -param_5)) &&
         (uVar9 = 6, param_5 == 0 && (uint)(99999 < param_4) <= -param_5)) &&
        ((uVar9 = 5, param_5 == 0 && (uint)(9999 < param_4) <= -param_5 &&
         (uVar9 = 4, param_5 == 0 && (uint)(999 < param_4) <= -param_5)))) &&
       (uVar9 = 3, param_5 == 0 && (uint)(99 < param_4) <= -param_5)))))) {
    uVar9 = (param_5 != 0 || -param_5 < (uint)(9 < param_4)) + 1;
  }
  uVar1 = uVar9 + param_6;
  if (param_8 == 3) {
    if (9 < uVar1 + 3) goto LAB_0040fe3c;
  }
  else if (param_8 != 2) {
    if (param_8 == 0) {
      iVar10 = -3 - uVar9;
      if (uVar9 == 1) {
        iVar10 = -3;
      }
      if ((int)param_6 <= (int)(uVar9 == 1 ^ 5) && iVar10 <= (int)param_6) goto LAB_0040fe0f;
    }
LAB_0040fe3c:
    iVar10 = ((uVar9 + 6) - (uint)(uVar9 < 2)) - (uint)(uVar1 + 0x62 < 199);
    if ((int)param_3 - (int)param_2 < iVar10) goto LAB_004100ca;
    if (param_5 == 0) {
      uVar7 = 0;
      uVar6 = param_4;
    }
    else {
      lVar3 = (ulonglong)param_5 * 0x8461cefd + ((ulonglong)param_4 * 0x8461cefd >> 0x20);
      uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
      uVar13 = (uint)((ulonglong)param_4 * 0xabcc7711 >> 0x20);
      uVar6 = (uint)CARRY4((uint)((ulonglong)param_4 * 0xabcc7711),(uint)lVar3);
      uVar7 = uVar13 + uVar11;
      lVar3 = (ulonglong)param_5 * 0xabcc7711 +
              (ulonglong)CONCAT14(CARRY4(uVar13,uVar11) || CARRY4(uVar7,uVar6),uVar7 + uVar6);
      uVar6 = (int)((ulonglong)lVar3 >> 0x20) << 6 | (uint)lVar3 >> 0x1a;
      uVar7 = uVar6 * -100000000 + param_4;
      uVar11 = uVar7 % 10000;
      uVar7 = (uVar7 / 10000) % 10000;
      *(undefined2 *)((int)param_2 + (uVar9 - 1)) = (&DAT_004a9188)[uVar11 % 100];
      *(undefined2 *)((int)param_2 + (uVar9 - 3)) = (&DAT_004a9188)[uVar11 / 100];
      *(undefined2 *)((int)param_2 + (uVar9 - 5)) = (&DAT_004a9188)[uVar7 % 100];
      *(undefined2 *)((int)param_2 + (uVar9 - 7)) = (&DAT_004a9188)[uVar7 / 100];
      uVar7 = 8;
    }
    if (9999 < uVar6) {
      iVar12 = -uVar7;
      uVar7 = uVar6;
      do {
        uVar6 = uVar7 / 10000;
        *(undefined2 *)((int)param_2 + iVar12 + (uVar9 - 1)) =
             (&DAT_004a9188)[(uVar7 % 10000) % 100];
        *(undefined2 *)((int)param_2 + iVar12 + (uVar9 - 3)) =
             (&DAT_004a9188)[(uVar7 % 10000) / 100];
        iVar12 = iVar12 + -4;
        bVar2 = 99999999 < uVar7;
        uVar7 = uVar6;
      } while (bVar2);
      uVar7 = -iVar12;
    }
    uVar11 = uVar6;
    if (99 < uVar6) {
      uVar11 = (uVar6 & 0xffff) / 100;
      *(undefined2 *)((int)param_2 + ~uVar7 + uVar9) =
           (&DAT_004a9188)[uVar6 + uVar11 * -100 & 0xffff];
    }
    if (uVar11 < 10) {
      bVar5 = (byte)uVar11 | 0x30;
    }
    else {
      *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)&DAT_004a9188 + uVar11 * 2 + 1);
      bVar5 = *(byte *)(&DAT_004a9188 + uVar11);
    }
    iVar12 = 1;
    *(byte *)param_2 = bVar5;
    if (1 < uVar9) {
      *(undefined1 *)((int)param_2 + 1) = 0x2e;
      iVar12 = uVar9 + 1;
    }
    *(undefined1 *)((int)param_2 + iVar12) = 0x65;
    uVar9 = (param_6 + uVar9) - 1;
    if ((int)uVar1 < 1) {
      uVar9 = 1 - uVar1;
    }
    *(char *)((int)param_2 + iVar12 + 1) = ((int)uVar1 < 1) * '\x02' + '+';
    if (uVar9 < 100) {
      uVar4 = (&DAT_004a9188)[uVar9];
    }
    else {
      uVar4 = (&DAT_004a9188)[uVar9 / 10];
      *(byte *)((int)param_2 + iVar12 + 4) = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
    }
    *(undefined2 *)((int)param_2 + iVar12 + 2) = uVar4;
    *param_1 = iVar10 + (int)param_2;
    goto LAB_00410331;
  }
LAB_0040fe0f:
  if ((int)param_6 < 0) {
    if ((int)uVar1 < 1) {
      uVar6 = 2 - param_6;
    }
    else {
      uVar6 = uVar9 + 1;
    }
  }
  else {
    uVar6 = uVar1;
    if (param_4 == 1 && param_5 == 0) {
      uVar6 = uVar1 - (byte)(&DAT_004a9664)[param_6];
    }
  }
  if ((int)param_3 - (int)param_2 < (int)uVar6) {
LAB_004100ca:
    *param_1 = (int)param_3;
    param_1[1] = 0x84;
    return param_1;
  }
  uVar7 = uVar6;
  if (0 < (int)param_6) {
    if (0x16 < param_6) {
LAB_0041013f:
      FUN_0040e692(param_1,(byte *)param_2,param_3,(uint)param_9,(uint)((ulonglong)param_9 >> 0x20),
                   0);
      return param_1;
    }
    if (param_4 == 0) {
      iVar10 = 0;
      if (param_5 != 0) {
        for (; (param_5 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
        }
      }
      bVar5 = (byte)iVar10 | 0x20;
    }
    else {
      iVar10 = 0;
      if (param_4 != 0) {
        for (; (param_4 >> iVar10 & 1) == 0; iVar10 = iVar10 + 1) {
        }
      }
      bVar5 = (byte)iVar10;
    }
    uVar11 = param_5 >> (bVar5 & 0x1f);
    uVar13 = 0;
    if ((bVar5 & 0x20) == 0) {
      uVar13 = uVar11;
      uVar11 = param_4 >> (bVar5 & 0x1f) | param_5 << 0x20 - (bVar5 & 0x1f);
    }
    uVar7 = uVar9;
    if (*(uint *)(&DAT_004a97a4 + param_6 * 8) < uVar13 ||
        *(uint *)(&DAT_004a97a4 + param_6 * 8) - uVar13 <
        (uint)(*(uint *)(&DAT_004a97a0 + param_6 * 8) < uVar11)) goto LAB_0041013f;
  }
  iVar10 = uVar7 + (int)param_2;
  uVar7 = param_4;
  if (param_5 != 0) {
    lVar3 = (ulonglong)param_5 * 0x8461cefd + ((ulonglong)param_4 * 0x8461cefd >> 0x20);
    uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar8 = (uint)((ulonglong)param_4 * 0xabcc7711 >> 0x20);
    uVar7 = (uint)CARRY4((uint)((ulonglong)param_4 * 0xabcc7711),(uint)lVar3);
    uVar11 = uVar8 + uVar13;
    lVar3 = (ulonglong)param_5 * 0xabcc7711 +
            (ulonglong)CONCAT14(CARRY4(uVar8,uVar13) || CARRY4(uVar11,uVar7),uVar11 + uVar7);
    uVar7 = (int)((ulonglong)lVar3 >> 0x20) << 6 | (uint)lVar3 >> 0x1a;
    uVar11 = uVar7 * -100000000 + param_4;
    uVar13 = uVar11 % 10000;
    uVar11 = (uVar11 / 10000) % 10000;
    *(undefined2 *)(iVar10 + -2) = (&DAT_004a9188)[uVar13 % 100];
    *(undefined2 *)(iVar10 + -4) = (&DAT_004a9188)[uVar13 / 100];
    *(undefined2 *)(iVar10 + -6) = (&DAT_004a9188)[uVar11 % 100];
    *(undefined2 *)(iVar10 + -8) = (&DAT_004a9188)[uVar11 / 100];
    iVar10 = iVar10 + -8;
  }
  uVar11 = uVar7;
  if (9999 < uVar7) {
    do {
      uVar7 = uVar11 / 10000;
      *(undefined2 *)(iVar10 + -2) = (&DAT_004a9188)[(uVar11 % 10000) % 100];
      *(undefined2 *)(iVar10 + -4) = (&DAT_004a9188)[(uVar11 % 10000) / 100];
      iVar10 = iVar10 + -4;
      bVar2 = 99999999 < uVar11;
      uVar11 = uVar7;
    } while (bVar2);
  }
  uVar11 = uVar7;
  if (99 < uVar7) {
    uVar11 = (uVar7 & 0xffff) / 100;
    *(undefined2 *)(iVar10 + -2) = (&DAT_004a9188)[uVar7 + uVar11 * -100 & 0xffff];
    iVar10 = iVar10 + -2;
  }
  if (uVar11 < 10) {
    *(byte *)(iVar10 + -1) = (byte)uVar11 | 0x30;
  }
  else {
    *(undefined2 *)(iVar10 + -2) = (&DAT_004a9188)[uVar11];
  }
  if ((int)param_6 < 1) {
    if (param_6 != 0) {
      if ((int)uVar1 < 1) {
        *(undefined2 *)param_2 = 0x2e30;
        if (uVar1 != 0) {
          FUN_0040e201((void *)((int)param_2 + 2),0x30,-uVar1);
        }
      }
      else {
        FUN_004878c0(param_2,(uint *)((int)param_2 + 1),uVar1);
        *(undefined1 *)((int)param_2 + uVar1) = 0x2e;
      }
    }
  }
  else {
    FUN_0040e201((void *)(uVar9 + (int)param_2),0x30,param_6);
  }
  *param_1 = (int)param_2 + uVar6;
LAB_00410331:
  param_1[1] = 0;
  return param_1;
}

