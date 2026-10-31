/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040c79c */

undefined8 __cdecl FUN_0040c79c(uint *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 auStack_34 [29];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)auStack_34;
  puVar3 = &local_14;
  switch(param_4) {
  case 2:
    do {
      *(byte *)((int)puVar3 + -1) = (byte)param_3 & 1 | 0x30;
      puVar3 = (uint *)((int)puVar3 + -1);
      param_3 = param_3 >> 1;
    } while (param_3 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      *(char *)((int)puVar3 + -1) = (char)(param_3 % param_4) + '0';
      puVar3 = (uint *)((int)puVar3 + -1);
      bVar1 = param_4 <= param_3;
      param_3 = param_3 / param_4;
    } while (bVar1);
    break;
  case 4:
    do {
      *(byte *)((int)puVar3 + -1) = (byte)param_3 & 3 | 0x30;
      puVar3 = (uint *)((int)puVar3 + -1);
      param_3 = param_3 >> 2;
    } while (param_3 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar3 + -1) = (byte)param_3 & 7 | 0x30;
      puVar3 = (uint *)((int)puVar3 + -1);
      param_3 = param_3 >> 3;
    } while (param_3 != 0);
    break;
  case 10:
    if (param_3 < 10) {
      local_16[1] = (byte)param_3 | 0x30;
      puVar3 = (uint *)(local_16 + 1);
    }
    else {
      do {
        puVar4 = puVar3;
        uVar5 = param_3;
        *(undefined2 *)((int)puVar4 + -2) = *(undefined2 *)(&DAT_004a909c + (uVar5 % 100) * 2);
        puVar3 = (uint *)((int)puVar4 + -2);
        param_3 = uVar5 / 100;
      } while (999 < uVar5);
      if (99 < uVar5) {
        *(byte *)((int)puVar4 + -3) = (byte)(uVar5 / 100) | 0x30;
        puVar3 = (uint *)((int)puVar4 + -3);
      }
    }
    break;
  case 0x10:
    do {
      *(undefined *)((int)puVar3 + -1) = (&DAT_004a9164)[param_3 & 0xf];
      puVar3 = (uint *)((int)puVar3 + -1);
      param_3 = param_3 >> 4;
    } while (param_3 != 0);
    break;
  default:
    if (param_4 == 0x20) {
      do {
        *(undefined *)((int)puVar3 + -1) = (&DAT_004a9164)[param_3 & 0x1f];
        puVar3 = (uint *)((int)puVar3 + -1);
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
      *(undefined *)((int)puVar3 + -1) = (&DAT_004a9164)[param_3 % param_4];
      puVar3 = (uint *)((int)puVar3 + -1);
      bVar1 = param_4 <= param_3;
      param_3 = param_3 / param_4;
    } while (bVar1);
  }
  uVar5 = (int)&local_14 - (int)puVar3;
  if (param_2 - (int)param_1 < (int)uVar5) {
    uVar2 = 0x84;
  }
  else {
    thunk_FUN_0040c6a9(puVar3,uVar5,param_1);
    param_2 = (int)param_1 + uVar5;
    uVar2 = 0;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_34);
  }
  return CONCAT44(uVar2,param_2);
}

