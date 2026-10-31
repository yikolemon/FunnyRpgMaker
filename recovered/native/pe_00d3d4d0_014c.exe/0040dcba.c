/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040dcba */

int * __cdecl
FUN_0040dcba(int *param_1,uint *param_2,byte *param_3,uint param_4,uint param_5,int param_6,
            uint param_7,int param_8)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  
  uVar8 = 9;
  if ((((param_4 < 100000000) && (uVar8 = 8, param_4 < 10000000)) && (uVar8 = 7, param_4 < 1000000))
     && (((uVar8 = 6, param_4 < 100000 && (uVar8 = 5, param_4 < 10000)) &&
         ((uVar8 = 4, param_4 < 1000 && (uVar8 = 3, param_4 < 100)))))) {
    uVar8 = 2 - (param_4 < 10);
  }
  uVar1 = uVar8 + param_5;
  if (param_6 == 3) {
    if (9 < uVar1 + 3) goto LAB_0040dda0;
  }
  else if (param_6 != 2) {
    if (param_6 == 0) {
      iVar9 = -3 - uVar8;
      if (uVar8 == 1) {
        iVar9 = -3;
      }
      if ((int)param_5 <= (int)(uVar8 == 1 ^ 5) && iVar9 <= (int)param_5) goto LAB_0040dd75;
    }
LAB_0040dda0:
    iVar9 = (uVar8 - (uVar8 < 2)) + 5;
    if ((int)param_3 - (int)param_2 < iVar9) {
      *param_1 = (int)param_3;
      param_1[1] = 0x84;
      return param_1;
    }
    uVar4 = 0;
    if (9999 < param_4) {
      iVar7 = 0;
      uVar4 = param_4;
      do {
        param_4 = uVar4 / 10000;
        *(undefined2 *)((int)param_2 + iVar7 + (uVar8 - 1)) = (&DAT_004a9188)[(uVar4 % 10000) % 100]
        ;
        *(undefined2 *)((int)param_2 + iVar7 + (uVar8 - 3)) = (&DAT_004a9188)[(uVar4 % 10000) / 100]
        ;
        iVar7 = iVar7 + -4;
        bVar2 = 99999999 < uVar4;
        uVar4 = param_4;
      } while (bVar2);
      uVar4 = -iVar7;
    }
    uVar5 = param_4;
    if (99 < param_4) {
      uVar5 = (param_4 & 0xffff) / 100;
      *(undefined2 *)((int)param_2 + ~uVar4 + uVar8) =
           (&DAT_004a9188)[param_4 + uVar5 * -100 & 0xffff];
    }
    if (uVar5 < 10) {
      bVar6 = (byte)uVar5 | 0x30;
    }
    else {
      *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)&DAT_004a9188 + uVar5 * 2 + 1);
      bVar6 = *(byte *)(&DAT_004a9188 + uVar5);
    }
    iVar7 = 1;
    *(byte *)param_2 = bVar6;
    if (1 < uVar8) {
      *(undefined1 *)((int)param_2 + 1) = 0x2e;
      iVar7 = uVar8 + 1;
    }
    *(undefined1 *)((int)param_2 + iVar7) = 0x65;
    iVar3 = param_5 + uVar8 + -1;
    if ((int)uVar1 < 1) {
      iVar3 = 1 - uVar1;
    }
    *(char *)((int)param_2 + iVar7 + 1) = ((int)uVar1 < 1) * '\x02' + '+';
    *(undefined2 *)((int)param_2 + iVar7 + 2) = (&DAT_004a9188)[iVar3];
    *param_1 = iVar9 + (int)param_2;
    goto LAB_0040e04d;
  }
LAB_0040dd75:
  if ((int)param_5 < 0) {
    if ((int)uVar1 < 1) {
      uVar4 = 2 - param_5;
    }
    else {
      uVar4 = uVar8 + 1;
    }
  }
  else {
    uVar4 = uVar1;
    if (param_4 == 1) {
      uVar4 = uVar1 - (byte)(&DAT_004a94c0)[param_5];
    }
  }
  if ((int)param_3 - (int)param_2 < (int)uVar4) {
    *param_1 = (int)param_3;
    param_1[1] = 0x84;
    return param_1;
  }
  uVar5 = uVar4;
  if (0 < (int)param_5) {
    if (10 < param_5) {
LAB_0040df44:
      FUN_0040d4fc(param_1,(byte *)param_2,param_3,param_7 | 0x800000,param_8 - 0x96);
      return param_1;
    }
    iVar9 = 0;
    if (param_4 != 0) {
      for (; (param_4 >> iVar9 & 1) == 0; iVar9 = iVar9 + 1) {
      }
    }
    uVar5 = uVar8;
    if (*(uint *)(&DAT_004a94e8 + param_5 * 4) < param_4 >> ((byte)iVar9 & 0x1f)) goto LAB_0040df44;
  }
  iVar9 = uVar5 + (int)param_2;
  uVar5 = param_4;
  if (9999 < param_4) {
    do {
      param_4 = uVar5 / 10000;
      *(undefined2 *)(iVar9 + -2) = (&DAT_004a9188)[(uVar5 % 10000) % 100];
      *(undefined2 *)(iVar9 + -4) = (&DAT_004a9188)[(uVar5 % 10000) / 100];
      iVar9 = iVar9 + -4;
      bVar2 = 99999999 < uVar5;
      uVar5 = param_4;
    } while (bVar2);
  }
  uVar5 = param_4;
  if (99 < param_4) {
    uVar5 = (param_4 & 0xffff) / 100;
    *(undefined2 *)(iVar9 + -2) = (&DAT_004a9188)[param_4 + uVar5 * -100 & 0xffff];
    iVar9 = iVar9 + -2;
  }
  if (uVar5 < 10) {
    *(byte *)(iVar9 + -1) = (byte)uVar5 | 0x30;
  }
  else {
    *(undefined2 *)(iVar9 + -2) = (&DAT_004a9188)[uVar5];
  }
  if ((int)param_5 < 1) {
    if (param_5 != 0) {
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
    FUN_0040e201((void *)(uVar8 + (int)param_2),0x30,param_5);
  }
  *param_1 = (int)param_2 + uVar4;
LAB_0040e04d:
  param_1[1] = 0;
  return param_1;
}

