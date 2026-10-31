/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10007654 */

undefined8 FUN_10007654(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint local_5c;
  uint local_58;
  byte abStack_2d [17];
  undefined2 local_1c [3];
  byte local_15;
  uint local_14;
  
  uVar12 = CONCAT44(local_5c,param_3);
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  puVar9 = &local_14;
  uVar1 = CONCAT44(param_4,param_3);
  uVar11 = CONCAT44(local_5c,param_3);
  switch(param_5) {
  case 2:
    do {
      *(byte *)((int)puVar9 + -1) = (byte)param_3 & 1 | 0x30;
      param_3 = param_3 >> 1 | param_4 << 0x1f;
      puVar9 = (uint *)((int)puVar9 + -1);
      param_4 = param_4 >> 1;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 3:
  case 5:
  case 6:
  case 7:
  case 9:
    do {
      uVar2 = (ulonglong)uVar1 >> 0x20;
      uVar3 = (uint)uVar1;
      uVar11 = __aulldiv(uVar1,param_5,0);
      *(byte *)((int)puVar9 + -1) = ((char)uVar1 - (char)uVar11 * (char)param_5) + 0x30;
      puVar9 = (uint *)((int)puVar9 + -1);
      uVar1 = uVar11;
    } while ((uint)(uVar3 < param_5) <= (uint)uVar2);
    break;
  case 4:
    do {
      *(byte *)((int)puVar9 + -1) = (byte)param_3 & 3 | 0x30;
      param_3 = param_3 >> 2 | param_4 << 0x1e;
      puVar9 = (uint *)((int)puVar9 + -1);
      param_4 = param_4 >> 2;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 8:
    do {
      *(byte *)((int)puVar9 + -1) = (byte)param_3 & 7 | 0x30;
      param_3 = param_3 >> 3 | param_4 << 0x1d;
      puVar9 = (uint *)((int)puVar9 + -1);
      param_4 = param_4 >> 3;
    } while (param_3 != 0 || param_4 != 0);
    break;
  case 10:
    if (param_4 != 0) {
      do {
        puVar4 = puVar9;
        local_5c = (uint)((ulonglong)uVar12 >> 0x20);
        iVar8 = (int)uVar12;
        uVar12 = __aulldiv(iVar8,param_4,100000000,0);
        iVar5 = 0;
        uVar3 = (int)uVar12 * -100000000 + iVar8;
        do {
          uVar7 = uVar3 / 100;
          *(undefined2 *)((int)puVar4 + iVar5 + -2) =
               *(undefined2 *)(&DAT_1028b5ac + (uVar3 % 100) * 2);
          iVar5 = iVar5 + -2;
          uVar3 = uVar7;
        } while (iVar5 != -6);
        *(undefined2 *)(puVar4 + -2) = *(undefined2 *)(&DAT_1028b5ac + uVar7 * 2);
        uVar3 = param_4 >> 8;
        puVar9 = puVar4 + -2;
        param_4 = (uint)((ulonglong)uVar12 >> 0x20);
      } while (0x5f5e0 < uVar3);
      puVar9 = puVar4 + -2;
    }
    local_5c = (uint)((ulonglong)uVar12 >> 0x20);
    if ((uint)uVar12 < 10) {
      *(byte *)((int)puVar9 + -1) = (byte)uVar12 | 0x30;
      puVar9 = (uint *)((int)puVar9 + -1);
    }
    else {
      uVar3 = (uint)uVar12;
      puVar9 = (uint *)((int)puVar9 + -1);
      do {
        puVar4 = puVar9;
        uVar7 = uVar3;
        *(undefined2 *)((int)puVar4 + -1) = *(undefined2 *)(&DAT_1028b5ac + (uVar7 % 100) * 2);
        puVar9 = (uint *)((int)puVar4 + -2);
        uVar3 = uVar7 / 100;
      } while (999 < uVar7);
      if (uVar7 < 100) {
        puVar9 = (uint *)((int)puVar4 + -1);
      }
      else {
        *(byte *)puVar9 = (byte)(uVar7 / 100) | 0x30;
      }
    }
    break;
  case 0x10:
    do {
      uVar3 = param_4 << 0x1c | param_3 >> 4;
      *(undefined *)((int)puVar9 + -1) = (&DAT_1028b674)[param_3 & 0xf];
      puVar9 = (uint *)((int)puVar9 + -1);
      param_4 = param_4 >> 4;
      param_3 = uVar3;
    } while (uVar3 != 0 || param_4 != 0);
    break;
  default:
    uVar11 = uVar12;
    if (param_5 == 0x20) {
      do {
        uVar3 = param_4 << 0x1b | param_3 >> 5;
        *(undefined *)((int)puVar9 + -1) = (&DAT_1028b674)[param_3 & 0x1f];
        puVar9 = (uint *)((int)puVar9 + -1);
        param_4 = param_4 >> 5;
        param_3 = uVar3;
      } while (uVar3 != 0 || param_4 != 0);
      break;
    }
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    do {
      local_5c = (uint)((ulonglong)uVar11 >> 0x20);
      local_58 = (uint)uVar11;
      uVar3 = (int)param_5 >> 0x1f;
      uVar11 = __aulldiv(local_58,param_4,param_5,uVar3);
      local_5c = (uint)((ulonglong)uVar11 >> 0x20);
      *(undefined *)((int)puVar9 + -1) = (&DAT_1028b674)[local_58 - (int)uVar11 * param_5];
      puVar9 = (uint *)((int)puVar9 + -1);
      bVar10 = uVar3 <= param_4;
      uVar3 = param_4 - uVar3;
      param_4 = local_5c;
    } while (bVar10 && (local_58 < param_5) <= uVar3);
  }
  iVar5 = (int)&local_14 - (int)puVar9;
  if (param_2 - param_1 < iVar5) {
    uVar6 = 0x84;
  }
  else {
    thunk_FUN_10006e05(puVar9,iVar5,param_1);
    param_2 = param_1 + iVar5;
    uVar6 = 0;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_5c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return CONCAT44(uVar6,param_2);
}

