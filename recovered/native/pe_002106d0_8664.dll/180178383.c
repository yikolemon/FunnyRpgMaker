/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180178383 */

undefined8 FUN_180178383(ulonglong *param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  
  puVar9 = (undefined1 *)param_1[4];
  while( true ) {
    while( true ) {
      if ((int)param_1[2] < 0x10) {
        if (*param_1 < param_1[1]) {
          FUN_180178653(param_1);
        }
        else {
          if (*(int *)((longlong)param_1 + 0x14) != 0) goto LAB_18017860d;
          *(undefined4 *)((longlong)param_1 + 0x14) = 1;
          *(int *)(param_1 + 2) = (int)param_1[2] + 0x10;
        }
      }
      uVar1 = *(ushort *)((longlong)param_1 + (ulonglong)((uint)param_1[3] & 0x1ff) * 2 + 0x3c);
      if (uVar1 == 0) {
        uVar7 = FUN_180178719(param_1,(longlong)param_1 + 0x3c);
      }
      else {
        *(uint *)(param_1 + 3) = (uint)param_1[3] >> ((byte)(uVar1 >> 9) & 0x1f);
        *(uint *)(param_1 + 2) = (int)param_1[2] - (uint)(uVar1 >> 9);
        uVar7 = uVar1 & 0x1ff;
      }
      if (0xff < (int)uVar7) break;
      if ((int)uVar7 < 0) goto LAB_18017860d;
      if ((undefined1 *)param_1[6] <= puVar9) {
        iVar3 = FUN_18017869b(param_1,puVar9,1);
        if (iVar3 == 0) {
          return 0;
        }
        puVar9 = (undefined1 *)param_1[4];
      }
      *puVar9 = (char)uVar7;
      puVar9 = puVar9 + 1;
    }
    if (uVar7 == 0x100) {
      param_1[4] = (ulonglong)puVar9;
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
        return 1;
      }
      if (0xf < (int)param_1[2]) {
        return 1;
      }
      pcVar6 = "unexpected end";
      goto LAB_180178614;
    }
    if (0x11d < uVar7) break;
    iVar3 = *(int *)(&DAT_1802e0a10 + (ulonglong)(uVar7 - 0x101) * 4);
    if (uVar7 - 0x11d < 0xffffffec) {
      iVar8 = (int)param_1[2];
    }
    else {
      iVar5 = *(int *)(&DAT_1802e0a90 + (ulonglong)(uVar7 - 0x101) * 4);
      iVar8 = (int)param_1[2];
      if (iVar8 < iVar5) {
        FUN_180178653(param_1);
        iVar8 = (int)param_1[2];
      }
      uVar2 = param_1[3];
      *(uint *)(param_1 + 3) = (uint)uVar2 >> ((byte)iVar5 & 0x1f);
      iVar8 = iVar8 - iVar5;
      *(int *)(param_1 + 2) = iVar8;
      iVar3 = iVar3 + (~(-1 << ((byte)iVar5 & 0x1f)) & (uint)uVar2);
    }
    if (iVar8 < 0x10) {
      if (*param_1 < param_1[1]) {
        FUN_180178653(param_1);
      }
      else {
        if (*(int *)((longlong)param_1 + 0x14) != 0) break;
        *(undefined4 *)((longlong)param_1 + 0x14) = 1;
        *(int *)(param_1 + 2) = iVar8 + 0x10;
      }
    }
    uVar1 = *(ushort *)((longlong)param_1 + (ulonglong)((uint)param_1[3] & 0x1ff) * 2 + 0x820);
    if (uVar1 == 0) {
      uVar7 = FUN_180178719(param_1,param_1 + 0x104);
    }
    else {
      *(uint *)(param_1 + 3) = (uint)param_1[3] >> ((byte)(uVar1 >> 9) & 0x1f);
      *(uint *)(param_1 + 2) = (int)param_1[2] - (uint)(uVar1 >> 9);
      uVar7 = uVar1 & 0x1ff;
    }
    if (0x1d < uVar7) break;
    iVar8 = *(int *)(&DAT_1802e0b10 + (ulonglong)uVar7 * 4);
    if (3 < uVar7) {
      iVar5 = *(int *)(&DAT_1802e0b90 + (ulonglong)uVar7 * 4);
      iVar4 = (int)param_1[2];
      if (iVar4 < iVar5) {
        FUN_180178653(param_1);
        iVar4 = (int)param_1[2];
      }
      uVar2 = param_1[3];
      *(uint *)(param_1 + 3) = (uint)uVar2 >> ((byte)iVar5 & 0x1f);
      *(int *)(param_1 + 2) = iVar4 - iVar5;
      iVar8 = iVar8 + (~(-1 << ((byte)iVar5 & 0x1f)) & (uint)uVar2);
    }
    if ((longlong)((longlong)puVar9 - param_1[5]) < (longlong)iVar8) {
      pcVar6 = "bad dist";
      goto LAB_180178614;
    }
    if ((longlong)(param_1[6] - (longlong)puVar9) < (longlong)iVar3) {
      iVar5 = FUN_18017869b(param_1,puVar9,iVar3);
      if (iVar5 == 0) {
        return 0;
      }
      puVar9 = (undefined1 *)param_1[4];
    }
    if (iVar8 == 1) {
      if (iVar3 != 0) {
        FUN_1802a89a0(puVar9,puVar9[-1],iVar3);
        puVar9 = puVar9 + (ulonglong)(iVar3 - 1) + 1;
      }
    }
    else {
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = puVar9[-(longlong)iVar8];
        puVar9 = puVar9 + 1;
      }
    }
  }
LAB_18017860d:
  pcVar6 = "bad huffman code";
LAB_180178614:
  FUN_1801765d0(pcVar6);
  return 0;
}

