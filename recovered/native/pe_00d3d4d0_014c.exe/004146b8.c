/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004146b8 */

undefined8 __cdecl FUN_004146b8(uint *param_1,int param_2,byte param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_1c [5];
  undefined1 local_17 [2];
  undefined1 uStack_15;
  uint local_14;
  
  uVar7 = (uint)param_3;
  local_14 = DAT_0050e8c0 ^ (uint)auStack_1c;
  puVar6 = &local_14;
  switch(param_4) {
  case 2:
    do {
      *(byte *)((int)puVar6 + -1) = (byte)uVar7 & 1 | 0x30;
      puVar6 = (uint *)((int)puVar6 + -1);
      bVar2 = (byte)uVar7 >> 1;
      uVar7 = (uint)bVar2;
    } while (bVar2 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      bVar2 = (byte)param_4;
      *(char *)((int)puVar6 + -1) = (char)((ushort)uVar7 % (ushort)bVar2) + '0';
      puVar6 = (uint *)((int)puVar6 + -1);
      bVar4 = (byte)uVar7;
      uVar7 = (uint)(ushort)((ushort)uVar7 / (ushort)bVar2);
    } while (bVar2 <= bVar4);
    break;
  case 4:
    do {
      *(byte *)((int)puVar6 + -1) = (byte)uVar7 & 3 | 0x30;
      puVar6 = (uint *)((int)puVar6 + -1);
      bVar2 = (byte)uVar7 >> 2;
      uVar7 = (uint)bVar2;
    } while (bVar2 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar6 + -1) = (byte)uVar7 & 7 | 0x30;
      puVar6 = (uint *)((int)puVar6 + -1);
      bVar2 = (byte)uVar7 >> 3;
      uVar7 = (uint)bVar2;
    } while (bVar2 != 0);
    break;
  case 10:
    if (param_3 < 10) {
      puVar6 = (uint *)&uStack_15;
      bVar2 = param_3;
    }
    else {
      bVar2 = (byte)((uint)param_3 * 0x29 >> 0xc);
      unique0x00017100 = *(undefined2 *)(&DAT_004a909c + (uint)(byte)(param_3 + bVar2 * -100) * 2);
      if (param_3 < 100) {
        puVar6 = (uint *)(local_17 + 1);
        break;
      }
      puVar6 = (uint *)local_17;
    }
    *(byte *)puVar6 = bVar2 | 0x30;
    break;
  case 0x10:
    do {
      *(undefined *)((int)puVar6 + -1) = (&DAT_004a9164)[uVar7 & 0xf];
      puVar6 = (uint *)((int)puVar6 + -1);
      bVar2 = (byte)uVar7 >> 4;
      uVar7 = (uint)bVar2;
    } while (bVar2 != 0);
    break;
  default:
    if (param_4 == 0x20) {
      do {
        *(undefined *)((int)puVar6 + -1) = (&DAT_004a9164)[uVar7 & 0x1f];
        puVar6 = (uint *)((int)puVar6 + -1);
        bVar2 = (byte)uVar7 >> 5;
        uVar7 = (uint)bVar2;
      } while (bVar2 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      uVar3 = uVar7 & 0xff;
      lVar1 = (longlong)(ulonglong)uVar3 / (longlong)param_4;
      uVar7 = (uint)lVar1;
      *(undefined *)((int)puVar6 + -1) =
           (&DAT_004a9164)[(int)((longlong)(ulonglong)uVar3 % (longlong)param_4)];
      puVar6 = (uint *)((int)puVar6 + -1);
    } while ((char)lVar1 != '\0');
  }
  uVar7 = (int)&local_14 - (int)puVar6;
  if (param_2 - (int)param_1 < (int)uVar7) {
    uVar5 = 0x84;
  }
  else {
    thunk_FUN_0040c6a9(puVar6,uVar7,param_1);
    param_2 = (int)param_1 + uVar7;
    uVar5 = 0;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)auStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)auStack_1c);
  }
  return CONCAT44(uVar5,param_2);
}

