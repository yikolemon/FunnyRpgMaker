/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011b729 */

void __fastcall FUN_1011b729(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar4 = DAT_1039d74c;
  if ((*(byte *)(DAT_1039d74c + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockNodeRemoveWindow node 0x%08X window \'%s\'\n",*param_1,
                 *(undefined4 *)(param_2 + 4));
  }
  *(undefined4 *)(param_2 + 0x430) = 0;
  *(byte *)(param_2 + 0x409) = *(byte *)(param_2 + 0x409) & 0xf6;
  *(undefined4 *)(param_2 + 0x438) = param_3;
  uVar3 = *(uint *)(param_2 + 0xc) & 0xfeffffff;
  *(uint *)(param_2 + 0xc) = uVar3;
  iVar5 = *(int *)(param_2 + 0x3a0);
  if (iVar5 != 0) {
    iVar1 = *(int *)(iVar5 + 0x1d8);
    piVar2 = *(int **)(iVar5 + 0x1e0);
    piVar6 = piVar2;
    if (0 < iVar1) {
      do {
        if (*piVar6 == param_2) break;
        piVar6 = piVar6 + 1;
      } while (piVar6 < piVar2 + iVar1);
    }
    if (piVar6 < piVar2 + iVar1) {
      FUN_1025b2d0(piVar6,piVar6 + 1,(iVar1 + ((uint)~((int)piVar6 - (int)piVar2) >> 2)) * 4,iVar5,
                   iVar4);
      *(int *)(iVar5 + 0x1d8) = *(int *)(iVar5 + 0x1d8) + -1;
      uVar3 = *(uint *)(param_2 + 0xc);
    }
  }
  FUN_1010d498(param_2,uVar3,0);
  if ((param_1[0x1e] != 0) && (*(char *)(param_1[0x1e] + 0xf8) == '\x01')) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined1 *)(param_2 + 0xf8) = 0;
    *(undefined1 *)(param_2 + 0x101) = 1;
  }
  iVar4 = param_1[9];
  if (0 < iVar4) {
    iVar1 = param_1[0xb];
    iVar5 = iVar4 * 4;
    iVar7 = 0;
    do {
      iVar5 = iVar5 + -4;
      if (*(int *)(iVar1 + iVar7 * 4) == param_2) {
        FUN_1025b2d0(iVar1 + iVar7 * 4,iVar1 + iVar7 * 4 + 4,iVar5);
        iVar4 = param_1[9] + -1;
        param_1[9] = iVar4;
        break;
      }
      iVar7 = iVar7 + 1;
    } while (iVar4 != iVar7);
  }
  if (param_1[0x1f] == param_2) {
    param_1[0x1f] = 0;
  }
  *(byte *)((int)param_1 + 0xad) = *(byte *)((int)param_1 + 0xad) | 2;
  if (param_1[0xc] == 0) {
LAB_1011b88e:
    if (iVar4 == 0) {
      if (((*(byte *)((int)param_1 + 0x11) & 0xc) == 0) && (*(int *)(param_2 + 0x438) != *param_1))
      {
        FUN_1011ca07(1);
        return;
      }
      goto LAB_1011b8c7;
    }
  }
  else {
    FUN_1014f7e0(param_1[0xc],*(undefined4 *)(param_2 + 0xb8));
    iVar4 = param_1[9];
    if (iVar4 < (int)(((*(byte *)((int)param_1 + 0x11) & 8) == 0) + 1)) {
      FUN_1012a1ce();
      iVar4 = param_1[9];
      goto LAB_1011b88e;
    }
  }
  if (((iVar4 == 1) && ((*(byte *)((int)param_1 + 0x11) & 8) == 0)) && (param_1[0x1e] != 0)) {
    *(undefined1 *)(*(int *)param_1[0xb] + 0xfc) = *(undefined1 *)(param_1[0x1e] + 0xfc);
  }
LAB_1011b8c7:
  FUN_10129a86();
  return;
}

