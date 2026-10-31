/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004126e8 */

undefined8 __cdecl FUN_004126e8(uint *param_1,int param_2,ushort param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  undefined1 auStack_24 [13];
  byte local_17;
  undefined1 local_16 [2];
  uint local_14;
  
  uVar5 = (uint)param_3;
  local_14 = DAT_0050e8c0 ^ (uint)auStack_24;
  puVar6 = &local_14;
  switch(param_4) {
  case 2:
    do {
      *(byte *)((int)puVar6 + -1) = (byte)uVar5 & 1 | 0x30;
      puVar6 = (uint *)((int)puVar6 + -1);
      uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      *(char *)((int)puVar6 + -1) = (char)(uVar5 % (param_4 & 0xffff)) + '0';
      puVar6 = (uint *)((int)puVar6 + -1);
      uVar4 = (ushort)uVar5;
      uVar5 = uVar5 / (param_4 & 0xffff);
    } while ((ushort)param_4 <= uVar4);
    break;
  case 4:
    do {
      *(byte *)((int)puVar6 + -1) = (byte)uVar5 & 3 | 0x30;
      puVar6 = (uint *)((int)puVar6 + -1);
      uVar5 = uVar5 >> 2;
    } while (uVar5 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar6 + -1) = (byte)uVar5 & 7 | 0x30;
      puVar6 = (uint *)((int)puVar6 + -1);
      uVar5 = uVar5 >> 3;
    } while (uVar5 != 0);
    break;
  case 10:
    if (param_3 < 10) {
      local_16[1] = (byte)param_3 | 0x30;
      puVar6 = (uint *)(local_16 + 1);
    }
    else {
      uVar5 = (uint)param_3;
      do {
        puVar7 = puVar6;
        uVar2 = uVar5;
        *(undefined2 *)((int)puVar7 + -2) = *(undefined2 *)(&DAT_004a909c + (uVar2 % 100) * 2);
        puVar6 = (uint *)((int)puVar7 + -2);
        uVar5 = uVar2 / 100;
      } while (999 < uVar2);
      if (99 < uVar2) {
        *(byte *)((int)puVar7 + -3) = (byte)(uVar2 / 100) | 0x30;
        puVar6 = (uint *)((int)puVar7 + -3);
      }
    }
    break;
  case 0x10:
    do {
      *(undefined *)((int)puVar6 + -1) = (&DAT_004a9164)[uVar5 & 0xf];
      puVar6 = (uint *)((int)puVar6 + -1);
      uVar5 = uVar5 >> 4;
    } while (uVar5 != 0);
    break;
  default:
    if (param_4 == 0x20) {
      do {
        *(undefined *)((int)puVar6 + -1) = (&DAT_004a9164)[uVar5 & 0x1f];
        puVar6 = (uint *)((int)puVar6 + -1);
        uVar5 = uVar5 >> 5;
      } while (uVar5 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      uVar2 = uVar5 & 0xffff;
      lVar1 = (longlong)(ulonglong)uVar2 / (longlong)(int)param_4;
      uVar5 = (uint)lVar1;
      *(undefined *)((int)puVar6 + -1) =
           (&DAT_004a9164)[(int)((longlong)(ulonglong)uVar2 % (longlong)(int)param_4)];
      puVar6 = (uint *)((int)puVar6 + -1);
    } while ((short)lVar1 != 0);
  }
  uVar5 = (int)&local_14 - (int)puVar6;
  if (param_2 - (int)param_1 < (int)uVar5) {
    uVar3 = 0x84;
  }
  else {
    thunk_FUN_0040c6a9(puVar6,uVar5,param_1);
    param_2 = (int)param_1 + uVar5;
    uVar3 = 0;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_24);
  }
  return CONCAT44(uVar3,param_2);
}

