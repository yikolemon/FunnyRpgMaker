/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10006ef8 */

undefined8 FUN_10006ef8(int param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined1 auStack_34 [29];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_34;
  puVar4 = &local_14;
  switch(param_4) {
  case 2:
    do {
      *(byte *)((int)puVar4 + -1) = (byte)param_3 & 1 | 0x30;
      puVar4 = (uint *)((int)puVar4 + -1);
      param_3 = param_3 >> 1;
    } while (param_3 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      *(char *)((int)puVar4 + -1) = (char)(param_3 % param_4) + '0';
      puVar4 = (uint *)((int)puVar4 + -1);
      bVar1 = param_4 <= param_3;
      param_3 = param_3 / param_4;
    } while (bVar1);
    break;
  case 4:
    do {
      *(byte *)((int)puVar4 + -1) = (byte)param_3 & 3 | 0x30;
      puVar4 = (uint *)((int)puVar4 + -1);
      param_3 = param_3 >> 2;
    } while (param_3 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar4 + -1) = (byte)param_3 & 7 | 0x30;
      puVar4 = (uint *)((int)puVar4 + -1);
      param_3 = param_3 >> 3;
    } while (param_3 != 0);
    break;
  case 10:
    if (param_3 < 10) {
      local_16[1] = (byte)param_3 | 0x30;
      puVar4 = (uint *)(local_16 + 1);
    }
    else {
      do {
        puVar5 = puVar4;
        uVar3 = param_3;
        *(undefined2 *)((int)puVar5 + -2) = *(undefined2 *)(&DAT_1028b5ac + (uVar3 % 100) * 2);
        puVar4 = (uint *)((int)puVar5 + -2);
        param_3 = uVar3 / 100;
      } while (999 < uVar3);
      if (99 < uVar3) {
        *(byte *)((int)puVar5 + -3) = (byte)(uVar3 / 100) | 0x30;
        puVar4 = (uint *)((int)puVar5 + -3);
      }
    }
    break;
  case 0x10:
    do {
      *(undefined *)((int)puVar4 + -1) = (&DAT_1028b674)[param_3 & 0xf];
      puVar4 = (uint *)((int)puVar4 + -1);
      param_3 = param_3 >> 4;
    } while (param_3 != 0);
    break;
  default:
    if (param_4 == 0x20) {
      do {
        *(undefined *)((int)puVar4 + -1) = (&DAT_1028b674)[param_3 & 0x1f];
        puVar4 = (uint *)((int)puVar4 + -1);
        param_3 = param_3 >> 5;
      } while (param_3 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      *(undefined *)((int)puVar4 + -1) = (&DAT_1028b674)[param_3 % param_4];
      puVar4 = (uint *)((int)puVar4 + -1);
      bVar1 = param_4 <= param_3;
      param_3 = param_3 / param_4;
    } while (bVar1);
  }
  iVar6 = (int)&local_14 - (int)puVar4;
  if (param_2 - param_1 < iVar6) {
    uVar2 = 0x84;
  }
  else {
    thunk_FUN_10006e05(puVar4,iVar6,param_1);
    param_2 = param_1 + iVar6;
    uVar2 = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT44(uVar2,param_2);
}

