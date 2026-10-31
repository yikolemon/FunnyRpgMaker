/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10129877 */

void __fastcall FUN_10129877(undefined4 *param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  iVar5 = DAT_1039d74c;
  if (*(int *)(param_2 + 0x430) != 0) {
    FUN_1011b729(0);
  }
  if ((*(byte *)(iVar5 + 0x27b5) & 4) != 0) {
    FUN_100f99e6("[docking] DockNodeAddWindow node 0x%08X window \'%s\'\n",*param_1,
                 *(undefined4 *)(param_2 + 4));
  }
  if (((param_1[0x1e] == 0) && (param_1[9] == 1)) &&
     (*(char *)(*(int *)param_1[0xb] + 0xfa) == '\0')) {
    FUN_1011cc09();
  }
  iVar5 = param_1[9];
  if (iVar5 == param_1[10]) {
    if (iVar5 == 0) {
      iVar2 = 8;
    }
    else {
      iVar2 = iVar5 / 2 + iVar5;
    }
    iVar6 = iVar5 + 1;
    if (iVar5 + 1 < iVar2) {
      iVar6 = iVar2;
    }
    iVar2 = FUN_100fa1fa(iVar6 * 4);
    if (param_1[0xb] != 0) {
      FUN_1025b2d0(iVar2,param_1[0xb],param_1[9] << 2);
      FUN_100fa2cb(param_1[0xb]);
    }
    param_1[0xb] = iVar2;
    param_1[10] = iVar6;
    iVar5 = param_1[9];
  }
  else {
    iVar2 = param_1[0xb];
  }
  *(int *)(iVar2 + iVar5 * 4) = param_2;
  param_1[9] = param_1[9] + 1;
  *(byte *)((int)param_1 + 0xad) = *(byte *)((int)param_1 + 0xad) | 2;
  *(undefined4 **)(param_2 + 0x430) = param_1;
  *(undefined4 *)(param_2 + 0x438) = *param_1;
  *(byte *)(param_2 + 0x409) = *(byte *)(param_2 + 0x409) & 0xf6 | 1 < (int)param_1[9];
  if (((param_1[0x1e] == 0) && (param_1[6] == 0)) && ((param_1[4] & 0x400) == 0)) {
    uVar3 = param_1[0x2a];
    bVar7 = (uVar3 & 7) == 0;
    uVar4 = uVar3 | 2;
    if (!bVar7) {
      uVar4 = uVar3;
    }
    bVar8 = (uVar4 & 0x38) == 0;
    uVar3 = uVar4 | 0x10;
    if (!bVar8) {
      uVar3 = uVar4;
    }
    if (!(bool)(~(bVar8 || bVar7) & (uVar3 & 0x1c0) != 0)) {
      uVar4 = uVar3 | 0x80;
      if ((uVar3 & 0x1c0) != 0) {
        uVar4 = uVar3;
      }
      param_1[0x2a] = uVar4;
    }
  }
  if (param_3 != '\0') {
    if (param_1[0xc] == 0) {
      FUN_10129a64();
      uVar1 = param_1[0x27];
      *(undefined4 *)(param_1[0xc] + 0x1c) = uVar1;
      *(undefined4 *)(param_1[0xc] + 0x18) = uVar1;
      if (1 < (int)param_1[9]) {
        iVar5 = 0;
        do {
          FUN_1014f6d0(param_1[0xc],0,*(undefined4 *)(param_1[0xb] + iVar5 * 4));
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1[9] + -1);
      }
    }
    FUN_1014f6d0(param_1[0xc],0x800000,param_2);
  }
  FUN_10129a86();
  if (param_1[0x1e] != 0) {
    FUN_1010d498(param_2,*(uint *)(param_2 + 0xc) | 0x1000000,param_1[0x1e]);
  }
  return;
}

