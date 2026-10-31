/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004678e */

int FUN_14004678e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStackY_88 [32];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar7 = param_2[6];
  iVar4 = (**(code **)(param_1 + 0x2a0))(param_1,0x68646d78,param_2,&local_50);
  iVar6 = 0;
  if (local_50 < 8 || iVar4 != 0) goto LAB_1400468bd;
  plVar1 = (longlong *)(param_1 + 0x448);
  local_4c = FUN_140021039(param_2,local_50,plVar1);
  iVar6 = local_4c;
  if (local_4c != 0) goto LAB_1400468bd;
  lVar2 = *plVar1;
  uVar9 = (uint)*(byte *)(lVar2 + 3);
  uVar3 = CONCAT11(*(char *)(lVar2 + 2),*(byte *)(lVar2 + 3));
  uVar5 = (uint)*(byte *)(lVar2 + 5) << 0x10 | (uint)*(byte *)(lVar2 + 4) << 0x18;
  if (uVar5 == 0xffff0000) {
    uVar5 = 0;
  }
  if ((uVar3 == 0 || *(char *)(lVar2 + 2) != '\0') ||
     (uVar5 = (ushort)(*(ushort *)(lVar2 + 6) << 8 | *(ushort *)(lVar2 + 6) >> 8) | uVar5,
     uVar5 != (*(int *)(param_1 + 0x10) + 5U & 0xfffffffc))) {
LAB_1400468a5:
    FUN_14002115a((longlong)param_2,plVar1);
    lVar7 = 0x450;
    uVar5 = 0;
  }
  else {
    uVar11 = (ulonglong)local_50;
    lVar7 = FUN_14001f231(lVar7,8,0,(uint)uVar3,0,&local_4c);
    *(longlong *)(param_1 + 0x460) = lVar7;
    if (local_4c != 0) goto LAB_1400468a5;
    uVar10 = 0;
    uVar12 = lVar2 + 8;
    do {
      puVar8 = *(undefined1 **)(param_1 + 0x460);
      if (uVar11 + lVar2 < uVar12 + uVar5) {
        uVar9 = (uint)uVar10;
        goto LAB_140046923;
      }
      *(ulonglong *)(puVar8 + uVar10 * 8) = uVar12;
      uVar10 = uVar10 + 1;
      uVar12 = uVar12 + uVar5;
    } while (uVar9 != uVar10);
    puVar8 = *(undefined1 **)(param_1 + 0x460);
LAB_140046923:
    FUN_14009aaf0(puVar8,(ulonglong)uVar9,8,&LAB_140047074);
    *(uint *)(param_1 + 0x454) = uVar9;
    *(uint *)(param_1 + 0x450) = local_50;
    lVar7 = 0x458;
  }
  *(uint *)(param_1 + lVar7) = uVar5;
  iVar6 = local_4c;
LAB_1400468bd:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar6;
}

