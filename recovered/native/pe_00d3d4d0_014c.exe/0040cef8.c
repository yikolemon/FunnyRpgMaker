/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040cef8 */

undefined8 __cdecl FUN_0040cef8(uint *param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint local_5c;
  uint local_58;
  byte abStack_2d [17];
  undefined2 local_1c [3];
  byte local_15;
  uint local_14;
  
  uVar10 = CONCAT44(local_5c,param_3);
  local_14 = DAT_0050e8c0 ^ (uint)&local_5c;
  puVar7 = &local_14;
  uVar1 = CONCAT44(param_4,param_3);
  uVar9 = CONCAT44(local_5c,param_3);
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
      uVar6 = (uint)((ulonglong)uVar1 >> 0x20);
      uVar2 = (uint)uVar1;
      uVar9 = __aulldiv(uVar2,uVar6,param_5,0);
      *(char *)((int)puVar7 + -1) = ((char)uVar1 - (char)uVar9 * (char)param_5) + '0';
      puVar7 = (uint *)((int)puVar7 + -1);
      uVar1 = uVar9;
    } while ((uVar2 < param_5) <= uVar6);
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
        puVar3 = puVar7;
        local_5c = (uint)((ulonglong)uVar10 >> 0x20);
        uVar2 = (uint)uVar10;
        uVar10 = __aulldiv(uVar2,param_4,100000000,0);
        iVar4 = 0;
        uVar2 = (int)uVar10 * -100000000 + uVar2;
        do {
          uVar6 = uVar2 / 100;
          *(undefined2 *)((int)puVar3 + iVar4 + -2) =
               *(undefined2 *)(&DAT_004a909c + (uVar2 % 100) * 2);
          iVar4 = iVar4 + -2;
          uVar2 = uVar6;
        } while (iVar4 != -6);
        *(undefined2 *)(puVar3 + -2) = *(undefined2 *)(&DAT_004a909c + uVar6 * 2);
        uVar2 = param_4 >> 8;
        puVar7 = puVar3 + -2;
        param_4 = (uint)((ulonglong)uVar10 >> 0x20);
      } while (0x5f5e0 < uVar2);
      puVar7 = puVar3 + -2;
    }
    local_5c = (uint)((ulonglong)uVar10 >> 0x20);
    if ((uint)uVar10 < 10) {
      *(byte *)((int)puVar7 + -1) = (byte)uVar10 | 0x30;
      puVar7 = (uint *)((int)puVar7 + -1);
    }
    else {
      uVar2 = (uint)uVar10;
      puVar7 = (uint *)((int)puVar7 + -1);
      do {
        puVar3 = puVar7;
        uVar6 = uVar2;
        *(undefined2 *)((int)puVar3 + -1) = *(undefined2 *)(&DAT_004a909c + (uVar6 % 100) * 2);
        puVar7 = (uint *)((int)puVar3 + -2);
        uVar2 = uVar6 / 100;
      } while (999 < uVar6);
      if (uVar6 < 100) {
        puVar7 = (uint *)((int)puVar3 + -1);
      }
      else {
        *(byte *)puVar7 = (byte)(uVar6 / 100) | 0x30;
      }
    }
    break;
  case 0x10:
    do {
      uVar2 = param_4 << 0x1c | param_3 >> 4;
      *(undefined *)((int)puVar7 + -1) = (&DAT_004a9164)[param_3 & 0xf];
      puVar7 = (uint *)((int)puVar7 + -1);
      param_4 = param_4 >> 4;
      param_3 = uVar2;
    } while (uVar2 != 0 || param_4 != 0);
    break;
  default:
    uVar9 = uVar10;
    if (param_5 == 0x20) {
      do {
        uVar2 = param_4 << 0x1b | param_3 >> 5;
        *(undefined *)((int)puVar7 + -1) = (&DAT_004a9164)[param_3 & 0x1f];
        puVar7 = (uint *)((int)puVar7 + -1);
        param_4 = param_4 >> 5;
        param_3 = uVar2;
      } while (uVar2 != 0 || param_4 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      local_5c = (uint)((ulonglong)uVar9 >> 0x20);
      local_58 = (uint)uVar9;
      uVar2 = (int)param_5 >> 0x1f;
      uVar9 = __aulldiv(local_58,param_4,param_5,uVar2);
      local_5c = (uint)((ulonglong)uVar9 >> 0x20);
      *(undefined *)((int)puVar7 + -1) = (&DAT_004a9164)[local_58 - (int)uVar9 * param_5];
      puVar7 = (uint *)((int)puVar7 + -1);
      bVar8 = uVar2 <= param_4;
      uVar2 = param_4 - uVar2;
      param_4 = local_5c;
    } while (bVar8 && (local_58 < param_5) <= uVar2);
  }
  uVar2 = (int)&local_14 - (int)puVar7;
  if (param_2 - (int)param_1 < (int)uVar2) {
    uVar5 = 0x84;
  }
  else {
    thunk_FUN_0040c6a9(puVar7,uVar2,param_1);
    param_2 = (int)param_1 + uVar2;
    uVar5 = 0;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_5c);
  }
  return CONCAT44(uVar5,param_2);
}

