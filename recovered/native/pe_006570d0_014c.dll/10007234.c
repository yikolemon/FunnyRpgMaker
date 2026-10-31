/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10007234 */

undefined8
FUN_10007234(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4,uint param_5)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint local_60;
  undefined1 *local_5c;
  uint local_58;
  byte abStack_2d [17];
  undefined2 local_1c [3];
  byte local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_60;
  if ((int)param_4 < 0) {
    if (param_1 == param_2) {
      uVar6 = 0x84;
      goto LAB_100072e9;
    }
    *param_1 = 0x2d;
    param_1 = param_1 + 1;
    bVar9 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar9 - param_4;
  }
  uVar11 = CONCAT44(param_4,param_3);
  puVar8 = &local_14;
  local_5c = param_1;
  switch(param_5) {
  case 2:
    do {
      *(byte *)((int)puVar8 + -1) = (byte)param_3 & 1 | 0x30;
      param_3 = param_3 >> 1 | param_4 << 0x1f;
      puVar8 = (uint *)((int)puVar8 + -1);
      param_4 = param_4 >> 1;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar1 = (ulonglong)uVar11 >> 0x20;
      uVar3 = (uint)uVar11;
      uVar10 = __aulldiv(uVar11,param_5,0);
      *(byte *)((int)puVar8 + -1) = ((char)uVar11 - (char)uVar10 * (char)param_5) + 0x30;
      puVar8 = (uint *)((int)puVar8 + -1);
      uVar11 = uVar10;
    } while ((uint)(uVar3 < param_5) <= (uint)uVar1);
    break;
  case 4:
    do {
      *(byte *)((int)puVar8 + -1) = (byte)param_3 & 3 | 0x30;
      param_3 = param_3 >> 2 | param_4 << 0x1e;
      puVar8 = (uint *)((int)puVar8 + -1);
      param_4 = param_4 >> 2;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar8 + -1) = (byte)param_3 & 7 | 0x30;
      param_3 = param_3 >> 3 | param_4 << 0x1d;
      puVar8 = (uint *)((int)puVar8 + -1);
      param_4 = param_4 >> 3;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 10:
    if (param_4 != 0) {
      do {
        puVar4 = puVar8;
        uVar10 = __aulldiv(uVar11,100000000,0);
        local_60 = (uint)((ulonglong)uVar10 >> 0x20);
        param_3 = (uint)uVar10;
        iVar5 = 0;
        uVar3 = param_3 * -100000000 + (int)uVar11;
        do {
          uVar7 = uVar3 / 100;
          *(undefined2 *)((int)puVar4 + iVar5 + -2) =
               *(undefined2 *)(&DAT_1028b5ac + (uVar3 % 100) * 2);
          iVar5 = iVar5 + -2;
          uVar3 = uVar7;
        } while (iVar5 != -6);
        *(undefined2 *)(puVar4 + -2) = *(undefined2 *)(&DAT_1028b5ac + uVar7 * 2);
        uVar1 = (ulonglong)uVar11 >> 0x28;
        puVar8 = puVar4 + -2;
        uVar11 = uVar10;
      } while (0x5f5e0 < (uint)uVar1);
      puVar8 = puVar4 + -2;
    }
    if (param_3 < 10) {
      *(byte *)((int)puVar8 + -1) = (byte)param_3 | 0x30;
      puVar8 = (uint *)((int)puVar8 + -1);
    }
    else {
      puVar8 = (uint *)((int)puVar8 + -1);
      do {
        puVar4 = puVar8;
        uVar3 = param_3;
        *(undefined2 *)((int)puVar4 + -1) = *(undefined2 *)(&DAT_1028b5ac + (uVar3 % 100) * 2);
        puVar8 = (uint *)((int)puVar4 + -2);
        param_3 = uVar3 / 100;
      } while (999 < uVar3);
      if (uVar3 < 100) {
        puVar8 = (uint *)((int)puVar4 + -1);
      }
      else {
        *(byte *)puVar8 = (byte)(uVar3 / 100) | 0x30;
      }
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
LAB_10007471:
    do {
      uVar3 = (uint)((ulonglong)uVar11 >> 0x20);
      local_58 = (uint)uVar11;
      uVar7 = (int)param_5 >> 0x1f;
      uVar11 = __aulldiv(uVar11,param_5,uVar7);
      local_60 = (uint)((ulonglong)uVar11 >> 0x20);
      *(undefined *)((int)puVar8 + -1) = (&DAT_1028b674)[local_58 - (int)uVar11 * param_5];
      puVar8 = (uint *)((int)puVar8 + -1);
    } while (uVar7 <= uVar3 && (uint)(local_58 < param_5) <= uVar3 - uVar7);
    break;
  case 0x10:
    do {
      uVar3 = param_4 << 0x1c | param_3 >> 4;
      *(undefined *)((int)puVar8 + -1) = (&DAT_1028b674)[param_3 & 0xf];
      puVar8 = (uint *)((int)puVar8 + -1);
      param_4 = param_4 >> 4;
      param_3 = uVar3;
    } while (uVar3 != 0 || param_4 != 0);
    break;
  default:
    if (param_5 != 0x20) goto LAB_10007471;
    do {
      uVar3 = param_4 << 0x1b | param_3 >> 5;
      *(undefined *)((int)puVar8 + -1) = (&DAT_1028b674)[param_3 & 0x1f];
      puVar8 = (uint *)((int)puVar8 + -1);
      param_4 = param_4 >> 5;
      param_3 = uVar3;
    } while (uVar3 != 0 || param_4 != 0);
  }
  puVar2 = local_5c;
  iVar5 = (int)&local_14 - (int)puVar8;
  uVar6 = 0x84;
  param_1 = param_2;
  if (iVar5 <= (int)param_2 - (int)local_5c) {
    thunk_FUN_10006e05(puVar8,iVar5,local_5c);
    param_1 = puVar2 + iVar5;
    uVar6 = 0;
  }
LAB_100072e9:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_60)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT44(uVar6,param_1);
}

