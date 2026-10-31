/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040cad8 */

undefined8 __cdecl FUN_0040cad8(uint *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 local_60;
  uint *local_5c;
  uint local_58;
  byte abStack_2d [17];
  undefined2 local_1c [3];
  byte local_15;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_60;
  if ((int)param_4 < 0) {
    if (param_1 == param_2) {
      uVar4 = 0x84;
      goto LAB_0040cb8d;
    }
    *(undefined1 *)param_1 = 0x2d;
    param_1 = (uint *)((int)param_1 + 1);
    bVar8 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(uint)bVar8 - param_4;
  }
  uVar10 = CONCAT44(param_4,param_3);
  puVar7 = &local_14;
  local_5c = param_1;
  switch(param_5) {
  case 2:
    do {
      *(byte *)((int)puVar7 + -1) = (byte)param_3 & 1 | 0x30;
      param_3 = param_3 >> 1 | param_4 << 0x1f;
      puVar7 = (uint *)((int)puVar7 + -1);
      param_4 = param_4 >> 1;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar6 = (uint)((ulonglong)uVar10 >> 0x20);
      uVar1 = (uint)uVar10;
      uVar9 = __aulldiv(uVar1,uVar6,param_5,0);
      *(char *)((int)puVar7 + -1) = ((char)uVar10 - (char)uVar9 * (char)param_5) + '0';
      puVar7 = (uint *)((int)puVar7 + -1);
      uVar10 = uVar9;
    } while ((uVar1 < param_5) <= uVar6);
    break;
  case 4:
    do {
      *(byte *)((int)puVar7 + -1) = (byte)param_3 & 3 | 0x30;
      param_3 = param_3 >> 2 | param_4 << 0x1e;
      puVar7 = (uint *)((int)puVar7 + -1);
      param_4 = param_4 >> 2;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar7 + -1) = (byte)param_3 & 7 | 0x30;
      param_3 = param_3 >> 3 | param_4 << 0x1d;
      puVar7 = (uint *)((int)puVar7 + -1);
      param_4 = param_4 >> 3;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 10:
    if (param_4 != 0) {
      do {
        puVar2 = puVar7;
        uVar6 = (uint)((ulonglong)uVar10 >> 0x20);
        uVar1 = (uint)uVar10;
        uVar10 = __aulldiv(uVar1,uVar6,100000000,0);
        local_60 = (undefined4)((ulonglong)uVar10 >> 0x20);
        param_3 = (uint)uVar10;
        iVar3 = 0;
        uVar1 = param_3 * -100000000 + uVar1;
        do {
          uVar5 = uVar1 / 100;
          *(undefined2 *)((int)puVar2 + iVar3 + -2) =
               *(undefined2 *)(&DAT_004a909c + (uVar1 % 100) * 2);
          iVar3 = iVar3 + -2;
          uVar1 = uVar5;
        } while (iVar3 != -6);
        *(undefined2 *)(puVar2 + -2) = *(undefined2 *)(&DAT_004a909c + uVar5 * 2);
        puVar7 = puVar2 + -2;
      } while (0x5f5e0 < uVar6 >> 8);
      puVar7 = puVar2 + -2;
    }
    if (param_3 < 10) {
      *(byte *)((int)puVar7 + -1) = (byte)param_3 | 0x30;
      puVar7 = (uint *)((int)puVar7 + -1);
    }
    else {
      puVar7 = (uint *)((int)puVar7 + -1);
      do {
        puVar2 = puVar7;
        uVar1 = param_3;
        *(undefined2 *)((int)puVar2 + -1) = *(undefined2 *)(&DAT_004a909c + (uVar1 % 100) * 2);
        puVar7 = (uint *)((int)puVar2 + -2);
        param_3 = uVar1 / 100;
      } while (999 < uVar1);
      if (uVar1 < 100) {
        puVar7 = (uint *)((int)puVar2 + -1);
      }
      else {
        *(byte *)puVar7 = (byte)(uVar1 / 100) | 0x30;
      }
    }
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
LAB_0040cd15:
    do {
      uVar1 = (uint)((ulonglong)uVar10 >> 0x20);
      local_58 = (uint)uVar10;
      uVar6 = (int)param_5 >> 0x1f;
      uVar10 = __aulldiv(local_58,uVar1,param_5,uVar6);
      local_60 = (undefined4)((ulonglong)uVar10 >> 0x20);
      *(undefined *)((int)puVar7 + -1) = (&DAT_004a9164)[local_58 - (int)uVar10 * param_5];
      puVar7 = (uint *)((int)puVar7 + -1);
    } while (uVar6 <= uVar1 && (uint)(local_58 < param_5) <= uVar1 - uVar6);
    break;
  case 0x10:
    do {
      uVar1 = param_4 << 0x1c | param_3 >> 4;
      *(undefined *)((int)puVar7 + -1) = (&DAT_004a9164)[param_3 & 0xf];
      puVar7 = (uint *)((int)puVar7 + -1);
      param_4 = param_4 >> 4;
      param_3 = uVar1;
    } while (uVar1 != 0 || param_4 != 0);
    break;
  default:
    if (param_5 != 0x20) goto LAB_0040cd15;
    do {
      uVar1 = param_4 << 0x1b | param_3 >> 5;
      *(undefined *)((int)puVar7 + -1) = (&DAT_004a9164)[param_3 & 0x1f];
      puVar7 = (uint *)((int)puVar7 + -1);
      param_4 = param_4 >> 5;
      param_3 = uVar1;
    } while (uVar1 != 0 || param_4 != 0);
  }
  puVar2 = local_5c;
  uVar1 = (int)&local_14 - (int)puVar7;
  uVar4 = 0x84;
  param_1 = param_2;
  if ((int)uVar1 <= (int)param_2 - (int)local_5c) {
    thunk_FUN_0040c6a9(puVar7,uVar1,local_5c);
    param_1 = (uint *)((int)puVar2 + uVar1);
    uVar4 = 0;
  }
LAB_0040cb8d:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_60)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_60);
  }
  return CONCAT44(uVar4,param_1);
}

