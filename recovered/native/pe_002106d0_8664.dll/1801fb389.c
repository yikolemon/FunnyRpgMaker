/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fb389 */

uint FUN_1801fb389(longlong param_1,undefined4 param_2,uint param_3,undefined4 *param_4,uint param_5
                  )

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  longlong lVar6;
  size_t sVar7;
  char *_Str;
  uint uVar8;
  uint uVar9;
  
  uVar8 = 0;
  if (0 < (int)param_5) {
    uVar8 = param_5;
  }
  switch(param_2) {
  case 0:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x261);
    goto LAB_1801fba96;
  case 1:
    if (3 < param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x264 + (ulonglong)param_3 * 4);
    break;
  case 2:
    if (3 < param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x27c + (ulonglong)param_3 * 4);
    break;
  case 3:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x260);
    goto LAB_1801fba96;
  case 4:
    _Str = *(char **)(param_1 + 0x1d8);
    goto LAB_1801fba48;
  case 5:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x114);
    break;
  case 6:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x240);
    break;
  case 7:
    if (*(uint *)(param_1 + 0x240) <= param_3) {
      return 0xffffffff;
    }
    lVar6 = *(longlong *)(param_1 + 0x248);
    goto LAB_1801fb852;
  case 8:
    if (*(uint *)(param_1 + 0x240) <= param_3) {
      return 0xffffffff;
    }
    uVar1 = *(uint *)(*(longlong *)(param_1 + 600) + (ulonglong)param_3 * 4);
    uVar9 = uVar1 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar9 <= uVar8)) {
      FUN_1802a82f0(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x250) + (ulonglong)param_3 * 8)
                    ,(ulonglong)uVar1);
      *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1) = 0;
    }
    goto LAB_1801fba71;
  case 9:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x1e0);
    break;
  case 10:
    if (*(int *)(param_1 + 0x1e0) != 1) {
      return 0xffffffff;
    }
    if (*(uint *)(param_1 + 0x1e8) <= param_3) {
      return 0xffffffff;
    }
    lVar6 = *(longlong *)(param_1 + 0x200);
LAB_1801fb852:
    _Str = *(char **)(lVar6 + (ulonglong)param_3 * 8);
    goto LAB_1801fba4d;
  case 0xb:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x220);
    break;
  case 0xc:
    if (*(longlong *)(param_1 + 0x238) == 0) {
      if (*(uint *)(param_1 + 0x220) <= param_3) {
        return 0xffffffff;
      }
    }
    else {
      puVar5 = (uint *)FUN_1801ca31a(param_3);
      if (puVar5 == (uint *)0x0) {
        return 0xffffffff;
      }
      param_3 = *puVar5;
    }
    if (*(longlong *)(param_1 + 0x228) == 0) {
      return 0xffffffff;
    }
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x230) + (ulonglong)param_3 * 4);
    uVar9 = uVar1 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar9 <= uVar8)) {
      FUN_1802a82f0(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x228) + (ulonglong)param_3 * 8)
                    ,(ulonglong)uVar1);
      *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1) = 0;
    }
    goto LAB_1801fba71;
  case 0xd:
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x18c);
    goto LAB_1801fba3c;
  case 0xe:
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x18e);
    goto LAB_1801fba3c;
  case 0xf:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x11c);
    goto LAB_1801fba96;
  case 0x10:
    if (*(byte *)(param_1 + 0x11c) <= param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x120 + (ulonglong)param_3 * 2);
    goto LAB_1801fba3c;
  case 0x11:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x188);
    break;
  case 0x12:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x11d);
    goto LAB_1801fba96;
  case 0x13:
    if (*(byte *)(param_1 + 0x11d) <= param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x13c + (ulonglong)param_3 * 2);
    goto LAB_1801fba3c;
  case 0x14:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x11e);
    goto LAB_1801fba96;
  case 0x15:
    if (*(byte *)(param_1 + 0x11e) <= param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x150 + (ulonglong)param_3 * 2);
    goto LAB_1801fba3c;
  case 0x16:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x11f);
    goto LAB_1801fba96;
  case 0x17:
    if (*(byte *)(param_1 + 0x11f) <= param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x16c + (ulonglong)param_3 * 2);
    goto LAB_1801fba3c;
  case 0x18:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x180);
    break;
  case 0x19:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x184);
    break;
  case 0x1a:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 400);
    goto LAB_1801fba96;
  case 0x1b:
    if (*(byte *)(param_1 + 400) <= param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x194 + (ulonglong)param_3 * 2);
    goto LAB_1801fba3c;
  case 0x1c:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x191);
    goto LAB_1801fba96;
  case 0x1d:
    if (*(byte *)(param_1 + 0x191) <= param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x1ae + (ulonglong)param_3 * 2);
    goto LAB_1801fba3c;
  case 0x1e:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x192);
    goto LAB_1801fba96;
  case 0x1f:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x193);
    goto LAB_1801fba96;
  case 0x20:
    if (1 < param_3) {
      return 0xffffffff;
    }
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x1d4 + (ulonglong)param_3 * 2);
    goto LAB_1801fba3c;
  case 0x21:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x118);
    break;
  case 0x22:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x1d0);
    break;
  case 0x23:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x1cc);
    break;
  case 0x24:
    _Str = *(char **)(param_1 + 0xd8);
    goto LAB_1801fba48;
  case 0x25:
    _Str = *(char **)(param_1 + 0xe0);
    goto LAB_1801fba48;
  case 0x26:
    _Str = *(char **)(param_1 + 0xe8);
    goto LAB_1801fba48;
  case 0x27:
    _Str = *(char **)(param_1 + 0xf0);
    goto LAB_1801fba48;
  case 0x28:
    _Str = *(char **)(param_1 + 0xf8);
LAB_1801fba48:
    if (_Str == (char *)0x0) {
      return 0xffffffff;
    }
LAB_1801fba4d:
    sVar7 = strlen(_Str);
    uVar9 = (int)sVar7 + 1;
    if ((param_4 != (undefined4 *)0x0) && (uVar9 <= uVar8)) {
      FUN_1802a82f0(param_4,_Str,uVar9);
    }
LAB_1801fba71:
    if (uVar9 == 0) {
      return 0xffffffff;
    }
    return uVar9;
  case 0x29:
    if ((int)param_5 < 1 || param_4 == (undefined4 *)0x0) {
      return 1;
    }
    uVar2 = *(undefined1 *)(param_1 + 0x104);
LAB_1801fba96:
    *(undefined1 *)param_4 = uVar2;
    return 1;
  case 0x2a:
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x106);
    goto LAB_1801fba3c;
  case 0x2b:
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x108);
    goto LAB_1801fba3c;
  case 0x2c:
    if ((int)param_5 < 2 || param_4 == (undefined4 *)0x0) {
      return 2;
    }
    uVar3 = *(undefined2 *)(param_1 + 0x110);
LAB_1801fba3c:
    *(undefined2 *)param_4 = uVar3;
    return 2;
  case 0x2d:
    if ((int)param_5 < 4 || param_4 == (undefined4 *)0x0) {
      return 4;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x100);
    break;
  default:
    return 0xffffffff;
  }
  *param_4 = uVar4;
  return 4;
}

