/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007419b */

int FUN_14007419b(longlong param_1,short param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  short *psVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  code *pcVar14;
  bool bVar15;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  lVar1 = *(longlong *)(param_1 + 0x98);
  local_4c = 0;
  uVar4 = 0;
  if (*(ushort *)(param_1 + 0x1d0) == 0) goto LAB_1400743b0;
  lVar8 = *(longlong *)(param_1 + 0x1e8);
  psVar7 = (short *)(lVar8 + 8);
  uVar11 = 0xffffffff;
  bVar15 = false;
  uVar9 = 0xffffffff;
  uVar10 = 0xffffffff;
  uVar12 = 0xffffffff;
  do {
    uVar13 = uVar12;
    if ((psVar7[-1] == param_2) && (*psVar7 != 0)) {
      switch(psVar7[-4]) {
      case 0:
      case 2:
        uVar11 = uVar4;
        break;
      case 1:
        uVar13 = uVar4;
        if ((psVar7[-2] != 0) && (uVar13 = uVar12, psVar7[-3] == 0)) {
          uVar10 = uVar4;
        }
        break;
      case 3:
        if ((((uVar9 == 0xffffffff) || ((psVar7[-2] & 0x3ffU) == 9)) && ((ushort)psVar7[-3] < 0xb))
           && ((0x403U >> ((ushort)psVar7[-3] & 0x1f) & 1) != 0)) {
          bVar15 = (psVar7[-2] & 0x3ffU) == 9;
          uVar9 = (uint)uVar4;
        }
      }
    }
    uVar3 = (uint)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    psVar7 = psVar7 + 0xc;
    uVar12 = uVar13;
  } while (*(ushort *)(param_1 + 0x1d0) != uVar3);
  if (-1 < (int)uVar13) {
    uVar10 = uVar13;
  }
  if ((int)uVar9 < 0) {
    if (-1 < (int)uVar10) goto LAB_1400742f6;
    if (-1 < (int)uVar11) {
      pcVar14 = FUN_140077af4;
      goto LAB_140074302;
    }
  }
  else {
    if (((int)uVar10 < 0) || (bVar15)) {
      uVar11 = (ulonglong)uVar9;
      uVar4 = 0;
      uVar9 = (uint)*(ushort *)(lVar8 + 2 + uVar11 * 0x18);
      if ((10 < uVar9) || ((0x403U >> (uVar9 & 0x1f) & 1) == 0)) goto LAB_1400743b0;
      pcVar14 = FUN_140077af4;
    }
    else {
LAB_1400742f6:
      pcVar14 = FUN_140077bb4;
      uVar11 = uVar10;
LAB_140074302:
      if (lVar8 == 0) goto LAB_1400743ae;
    }
    lVar8 = lVar8 + uVar11 * 0x18;
    if (*(longlong *)(lVar8 + 0x10) != 0) {
LAB_14007431d:
      uVar4 = (*pcVar14)(lVar8,lVar1);
      goto LAB_1400743b0;
    }
    plVar2 = *(longlong **)(param_1 + 0x200);
    puVar5 = (undefined8 *)FUN_14001f231(lVar1,1,0,(uint)*(ushort *)(lVar8 + 8),0,&local_4c);
    *(undefined8 **)(lVar8 + 0x10) = puVar5;
    if (local_4c == 0) {
      uVar6 = FUN_140020a41((longlong)plVar2,*(uint *)(lVar8 + 0xc));
      local_4c = (int)uVar6;
      puVar5 = *(undefined8 **)(lVar8 + 0x10);
      if (local_4c == 0) {
        local_4c = FUN_140020a85(plVar2,puVar5,(uint)*(ushort *)(lVar8 + 8));
        if (local_4c == 0) goto LAB_14007431d;
        puVar5 = *(undefined8 **)(lVar8 + 0x10);
      }
    }
    FUN_14001c53d(lVar1,(longlong)puVar5);
    *(undefined8 *)(lVar8 + 0x10) = 0;
    *(undefined2 *)(lVar8 + 8) = 0;
  }
LAB_1400743ae:
  uVar4 = 0;
LAB_1400743b0:
  *param_3 = uVar4;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return local_4c;
}

