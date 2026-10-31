/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000ced4 */

undefined8 FUN_1000ced4(int param_1,int param_2,byte param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_1c [5];
  undefined1 local_17 [2];
  undefined1 uStack_15;
  uint local_14;
  
  uVar4 = (uint)param_3;
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  puVar7 = &local_14;
  switch(param_4) {
  case 2:
    do {
      *(byte *)((int)puVar7 + -1) = (byte)uVar4 & 1 | 0x30;
      puVar7 = (uint *)((int)puVar7 + -1);
      bVar2 = (byte)uVar4 >> 1;
      uVar4 = (uint)bVar2;
    } while (bVar2 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      bVar2 = (byte)param_4;
      *(byte *)((int)puVar7 + -1) = (char)((ushort)uVar4 % (ushort)bVar2) + 0x30;
      puVar7 = (uint *)((int)puVar7 + -1);
      bVar5 = (byte)uVar4;
      uVar4 = (uint)(ushort)((ushort)uVar4 / (ushort)bVar2);
    } while (bVar2 <= bVar5);
    break;
  case 4:
    do {
      *(byte *)((int)puVar7 + -1) = (byte)uVar4 & 3 | 0x30;
      puVar7 = (uint *)((int)puVar7 + -1);
      bVar2 = (byte)uVar4 >> 2;
      uVar4 = (uint)bVar2;
    } while (bVar2 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar7 + -1) = (byte)uVar4 & 7 | 0x30;
      puVar7 = (uint *)((int)puVar7 + -1);
      bVar2 = (byte)uVar4 >> 3;
      uVar4 = (uint)bVar2;
    } while (bVar2 != 0);
    break;
  case 10:
    if (param_3 < 10) {
      puVar7 = (uint *)&uStack_15;
      bVar2 = param_3;
    }
    else {
      bVar2 = (byte)((uint)param_3 * 0x29 >> 0xc);
      unique0x00017100 = *(undefined2 *)(&DAT_1028b5ac + (uint)(byte)(param_3 + bVar2 * -100) * 2);
      if (param_3 < 100) {
        puVar7 = (uint *)(local_17 + 1);
        break;
      }
      puVar7 = (uint *)local_17;
    }
    *(byte *)puVar7 = bVar2 | 0x30;
    break;
  case 0x10:
    do {
      *(undefined *)((int)puVar7 + -1) = (&DAT_1028b674)[uVar4 & 0xf];
      puVar7 = (uint *)((int)puVar7 + -1);
      bVar2 = (byte)uVar4 >> 4;
      uVar4 = (uint)bVar2;
    } while (bVar2 != 0);
    break;
  default:
    if (param_4 == 0x20) {
      do {
        *(undefined *)((int)puVar7 + -1) = (&DAT_1028b674)[uVar4 & 0x1f];
        puVar7 = (uint *)((int)puVar7 + -1);
        bVar2 = (byte)uVar4 >> 5;
        uVar4 = (uint)bVar2;
      } while (bVar2 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      uVar3 = uVar4 & 0xff;
      lVar1 = (longlong)(ulonglong)uVar3 / (longlong)param_4;
      uVar4 = (uint)lVar1;
      *(undefined *)((int)puVar7 + -1) =
           (&DAT_1028b674)[(int)((longlong)(ulonglong)uVar3 % (longlong)param_4)];
      puVar7 = (uint *)((int)puVar7 + -1);
    } while ((char)lVar1 != '\0');
  }
  iVar8 = (int)&local_14 - (int)puVar7;
  if (param_2 - param_1 < iVar8) {
    uVar6 = 0x84;
  }
  else {
    thunk_FUN_10006e05(puVar7,iVar8,param_1);
    param_2 = param_1 + iVar8;
    uVar6 = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT44(uVar6,param_2);
}

