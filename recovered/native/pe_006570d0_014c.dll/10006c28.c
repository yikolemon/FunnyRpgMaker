/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10006c28 */

undefined8 FUN_10006c28(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_34 [29];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_34;
  puVar7 = param_1;
  if ((int)param_3 < 0) {
    if (param_1 == param_2) {
      uVar3 = 0x84;
      goto LAB_10006ca4;
    }
    *param_1 = 0x2d;
    puVar7 = param_1 + 1;
    param_3 = -param_3;
  }
  puVar5 = &local_14;
  switch(param_4) {
  case 2:
    do {
      *(byte *)((int)puVar5 + -1) = (byte)param_3 & 1 | 0x30;
      puVar5 = (uint *)((int)puVar5 + -1);
      param_3 = param_3 >> 1;
    } while (param_3 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      *(char *)((int)puVar5 + -1) = (char)(param_3 % param_4) + '0';
      puVar5 = (uint *)((int)puVar5 + -1);
      bVar1 = param_4 <= param_3;
      param_3 = param_3 / param_4;
    } while (bVar1);
    break;
  case 4:
    do {
      *(byte *)((int)puVar5 + -1) = (byte)param_3 & 3 | 0x30;
      puVar5 = (uint *)((int)puVar5 + -1);
      param_3 = param_3 >> 2;
    } while (param_3 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar5 + -1) = (byte)param_3 & 7 | 0x30;
      puVar5 = (uint *)((int)puVar5 + -1);
      param_3 = param_3 >> 3;
    } while (param_3 != 0);
    break;
  case 10:
    if (param_3 < 10) {
      local_16[1] = (byte)param_3 | 0x30;
      puVar5 = (uint *)(local_16 + 1);
    }
    else {
      do {
        puVar6 = puVar5;
        uVar2 = param_3;
        *(undefined2 *)((int)puVar6 + -2) = *(undefined2 *)(&DAT_1028b5ac + (uVar2 % 100) * 2);
        puVar5 = (uint *)((int)puVar6 + -2);
        param_3 = uVar2 / 100;
      } while (999 < uVar2);
      if (99 < uVar2) {
        *(byte *)((int)puVar6 + -3) = (byte)(uVar2 / 100) | 0x30;
        puVar5 = (uint *)((int)puVar6 + -3);
      }
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
switchD_10006c62_caseD_b:
    do {
      *(undefined *)((int)puVar5 + -1) = (&DAT_1028b674)[param_3 % param_4];
      puVar5 = (uint *)((int)puVar5 + -1);
      bVar1 = param_4 <= param_3;
      param_3 = param_3 / param_4;
    } while (bVar1);
    break;
  case 0x10:
    do {
      *(undefined *)((int)puVar5 + -1) = (&DAT_1028b674)[param_3 & 0xf];
      puVar5 = (uint *)((int)puVar5 + -1);
      param_3 = param_3 >> 4;
    } while (param_3 != 0);
    break;
  default:
    if (param_4 != 0x20) goto switchD_10006c62_caseD_b;
    do {
      *(undefined *)((int)puVar5 + -1) = (&DAT_1028b674)[param_3 & 0x1f];
      puVar5 = (uint *)((int)puVar5 + -1);
      param_3 = param_3 >> 5;
    } while (param_3 != 0);
  }
  iVar4 = (int)&local_14 - (int)puVar5;
  uVar3 = 0x84;
  param_1 = param_2;
  if (iVar4 <= (int)param_2 - (int)puVar7) {
    thunk_FUN_10006e05(puVar5,iVar4,puVar7);
    param_1 = puVar7 + iVar4;
    uVar3 = 0;
  }
LAB_10006ca4:
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT44(uVar3,param_1);
}

