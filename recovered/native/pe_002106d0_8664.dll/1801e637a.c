/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e637a */

int FUN_1801e637a(longlong param_1,int param_2,int param_3,char param_4,undefined8 param_5,
                 ulonglong *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_88 [32];
  longlong local_68;
  int *local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_4c = 0;
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x10);
  if (uVar6 < 0xc) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(longlong *)(param_1 + 0x18) = param_1 + 0x538;
      *(undefined4 *)(param_1 + 0x14) = 0xc;
    }
LAB_1801e63d7:
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    puVar10 = puVar3 + uVar6 * 9;
    if ((int)uVar6 != 0) goto LAB_1801e640c;
    iVar5 = 1;
    puVar11 = puVar10;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 <= *(uint *)(param_1 + 0x10)) {
      if (0x1c71c70 < uVar1) {
        iVar5 = 0x40;
LAB_1801e64e3:
        puVar11 = (undefined8 *)0x0;
        goto LAB_1801e6452;
      }
      uVar2 = (uVar1 >> 2) + uVar1 + 4;
      uVar8 = 0x1c71c71;
      if (uVar2 < 0x1c71c71) {
        uVar8 = uVar2;
      }
      local_68 = *(longlong *)(param_1 + 0x18);
      if (local_68 == param_1 + 0x538) {
        local_60 = &local_4c;
        local_68 = 0;
        puVar11 = (undefined8 *)0x0;
        uVar4 = FUN_1801c9c3f(param_5,0x48,0,uVar8);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_1801e6452;
        FUN_1802a82f0(uVar4,param_1 + 0x538,0x360);
      }
      else {
        local_60 = &local_4c;
        uVar4 = FUN_1801c9c3f(param_5,0x48,uVar1,uVar8);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_1801e64e3;
      }
      *(uint *)(param_1 + 0x14) = uVar8;
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x10);
      goto LAB_1801e63d7;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    puVar10 = puVar3 + uVar6 * 9;
LAB_1801e640c:
    do {
      iVar5 = (int)*(short *)(puVar10 + -9);
      puVar11 = puVar10;
      if (param_4 == '\0') {
        if (iVar5 < param_2) break;
      }
      else if (param_2 < iVar5) break;
      if ((param_2 == iVar5) && (param_3 == *(int *)(param_1 + 0x20))) break;
      puVar11 = puVar10 + -9;
      puVar9 = puVar11;
      for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      puVar10 = puVar11;
    } while (puVar3 < puVar11);
    iVar5 = *(int *)(param_1 + 0x10) + 1;
  }
  *(int *)(param_1 + 0x10) = iVar5;
  iVar5 = 0;
LAB_1801e6452:
  *param_6 = (ulonglong)puVar11;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar5;
}

