/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140148846 */

int FUN_140148846(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  iVar2 = (**(code **)(param_1 + 0x2a0))(param_1,0x68646d78,param_2,&local_50);
  iVar4 = 0;
  if (local_50 < 8 || iVar2 != 0) goto LAB_140148975;
  plVar1 = (longlong *)(param_1 + 0x448);
  local_4c = FUN_14012dc0a(param_2,local_50,plVar1);
  iVar4 = local_4c;
  if (local_4c != 0) goto LAB_140148975;
  lVar6 = *plVar1;
  uVar8 = (uint)*(byte *)(lVar6 + 3);
  uVar3 = (uint)*(byte *)(lVar6 + 5) << 0x10 | (uint)*(byte *)(lVar6 + 4) << 0x18;
  if (uVar3 == 0xffff0000) {
    uVar3 = 0;
  }
  if ((CONCAT11(*(char *)(lVar6 + 2),*(byte *)(lVar6 + 3)) == 0 || *(char *)(lVar6 + 2) != '\0') ||
     (uVar3 = (ushort)(*(ushort *)(lVar6 + 6) << 8 | *(ushort *)(lVar6 + 6) >> 8) | uVar3,
     uVar3 != (*(int *)(param_1 + 0x10) + 5U & 0xfffffffc))) {
LAB_14014895d:
    FUN_14012dd2b(param_2,plVar1);
    lVar6 = 0x450;
    uVar3 = 0;
  }
  else {
    uVar10 = (ulonglong)local_50;
    local_60 = &local_4c;
    local_68 = 0;
    uVar5 = FUN_14012b8aa(uVar5,8,0);
    *(undefined8 *)(param_1 + 0x460) = uVar5;
    if (local_4c != 0) goto LAB_14014895d;
    uVar9 = 0;
    uVar11 = lVar6 + 8;
    do {
      lVar7 = *(longlong *)(param_1 + 0x460);
      if (uVar10 + lVar6 < uVar11 + uVar3) {
        uVar8 = (uint)uVar9;
        goto LAB_1401489db;
      }
      *(ulonglong *)(lVar7 + uVar9 * 8) = uVar11;
      uVar9 = uVar9 + 1;
      uVar11 = uVar11 + uVar3;
    } while (uVar8 != uVar9);
    lVar7 = *(longlong *)(param_1 + 0x460);
LAB_1401489db:
    FUN_1401a7460(lVar7,uVar8,8,&LAB_14014912c);
    *(uint *)(param_1 + 0x454) = uVar8;
    *(uint *)(param_1 + 0x450) = local_50;
    lVar6 = 0x458;
  }
  *(uint *)(param_1 + lVar6) = uVar3;
  iVar4 = local_4c;
LAB_140148975:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar4;
}

