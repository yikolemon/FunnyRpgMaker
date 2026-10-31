/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400aa435 */

void FUN_1400aa435(undefined4 *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  bool bVar9;
  
  lVar3 = DAT_140f2a910;
  if (*(longlong *)(param_1 + 6) != 0) {
    param_1[1] = *(undefined4 *)(*(longlong *)(param_1 + 6) + 4);
  }
  *(byte *)(param_1 + 0x35) = *(byte *)(param_1 + 0x35) & 0xdf;
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400aa435();
  }
  if (*(longlong *)(param_1 + 10) != 0) {
    FUN_1400aa435();
  }
  param_1[3] = 0;
  iVar4 = param_1[0xc];
  if (iVar4 < 1) {
    uVar6 = 0;
  }
  else {
    iVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe) + (longlong)iVar7 * 8);
      bVar5 = 0;
      bVar9 = false;
      if (param_1[0x2e] + 1 == *(int *)(lVar3 + 4)) {
        bVar5 = *(byte *)(lVar2 + 0x10a) ^ 1;
        if ((((*(byte *)(param_1 + 0x35) & 0x40) == 0) && (param_1[0x32] != *(int *)(lVar2 + 200)))
           || (*(char *)(lVar2 + 0x114) != '\x01')) {
          bVar9 = false;
        }
        else {
          bVar9 = (*(byte *)(lVar2 + 0x16) & 4) == 0;
        }
      }
      if ((bVar5 == 0 && !bVar9) && (*(byte *)(lVar2 + 0x495) >> 3 & 1) == 0) {
        param_1[3] = param_1[3] | *(uint *)(lVar2 + 0x38);
        iVar7 = iVar7 + 1;
      }
      else {
        *(byte *)(lVar2 + 0x495) = *(byte *)(lVar2 + 0x495) & 0xf7;
        if ((param_1[0xc] == 1) && ((*(byte *)((longlong)param_1 + 0x11) & 8) == 0)) {
          FUN_1400a9289(param_1);
          param_1[5] = 1;
          FUN_140099dd1(param_1,lVar2,*param_1);
          return;
        }
        FUN_140099dd1(param_1,lVar2,*param_1);
        iVar4 = param_1[0xc];
      }
    } while (iVar7 < iVar4);
    uVar6 = param_1[3];
  }
  uVar1 = param_1[2];
  uVar6 = uVar6 | param_1[1];
  param_1[4] = uVar6 | uVar1;
  bVar5 = *(byte *)((longlong)param_1 + 0xd5);
  bVar8 = bVar5;
  if (((bVar5 & 2) != 0) && (bVar8 = bVar5 | 4, ((uVar6 | uVar1) & 0x2040) != 0x40 || iVar4 != 1)) {
    bVar8 = bVar5;
  }
  bVar5 = bVar8 & 0xfd;
  *(byte *)((longlong)param_1 + 0xd5) = bVar5;
  if ((((bVar8 & 4) != 0) && (*(longlong *)(param_1 + 0x26) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x26) + 0x39) & 0x20) != 0)) {
    *(byte *)((longlong)param_1 + 0xd5) = bVar8 & 0xf9;
    bVar5 = bVar8 & 0xf9;
  }
  if (iVar4 < 2) {
    if ((bVar5 & 4) == 0) goto LAB_1400aa5f8;
    param_1[2] = uVar1 ^ 0x2000;
    param_1[4] = uVar6 | uVar1 ^ 0x2000;
  }
  else {
    param_1[2] = uVar1 & 0xffffdfff;
    param_1[4] = uVar6 | uVar1 & 0xffffdfff;
    if ((uVar1 >> 0xd & 1) == 0) goto LAB_1400aa5f8;
  }
  FUN_14009678b();
  bVar5 = *(byte *)((longlong)param_1 + 0xd5);
LAB_1400aa5f8:
  *(byte *)((longlong)param_1 + 0xd5) = bVar5 & 0xfb;
  FUN_1400a8b24(param_1);
  return;
}

