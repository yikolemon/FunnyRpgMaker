/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c4cc */

undefined8 __cdecl FUN_0040c4cc(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined1 auStack_34 [29];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_34;
  puVar6 = param_1;
  if ((int)param_3 < 0) {
    if (param_1 == param_2) {
      uVar2 = 0x84;
      goto LAB_0040c548;
    }
    *(undefined1 *)param_1 = 0x2d;
    puVar6 = (uint *)((int)param_1 + 1);
    param_3 = -param_3;
  }
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
        *(undefined2 *)((int)puVar5 + -2) = *(undefined2 *)(&DAT_004a909c + (uVar3 % 100) * 2);
        puVar4 = (uint *)((int)puVar5 + -2);
        param_3 = uVar3 / 100;
      } while (999 < uVar3);
      if (99 < uVar3) {
        *(byte *)((int)puVar5 + -3) = (byte)(uVar3 / 100) | 0x30;
        puVar4 = (uint *)((int)puVar5 + -3);
      }
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
switchD_0040c506_caseD_b:
    do {
      *(undefined *)((int)puVar4 + -1) = (&DAT_004a9164)[param_3 % param_4];
      puVar4 = (uint *)((int)puVar4 + -1);
      bVar1 = param_4 <= param_3;
      param_3 = param_3 / param_4;
    } while (bVar1);
    break;
  case 0x10:
    do {
      *(undefined *)((int)puVar4 + -1) = (&DAT_004a9164)[param_3 & 0xf];
      puVar4 = (uint *)((int)puVar4 + -1);
      param_3 = param_3 >> 4;
    } while (param_3 != 0);
    break;
  default:
    if (param_4 != 0x20) goto switchD_0040c506_caseD_b;
    do {
      *(undefined *)((int)puVar4 + -1) = (&DAT_004a9164)[param_3 & 0x1f];
      puVar4 = (uint *)((int)puVar4 + -1);
      param_3 = param_3 >> 5;
    } while (param_3 != 0);
  }
  uVar3 = (int)&local_14 - (int)puVar4;
  uVar2 = 0x84;
  param_1 = param_2;
  if ((int)uVar3 <= (int)param_2 - (int)puVar6) {
    thunk_FUN_0040c6a9(puVar4,uVar3,puVar6);
    param_1 = (uint *)((int)puVar6 + uVar3);
    uVar2 = 0;
  }
LAB_0040c548:
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_34);
  }
  return CONCAT44(uVar2,param_1);
}

