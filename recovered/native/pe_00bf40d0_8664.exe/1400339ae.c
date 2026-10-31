/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400339ae */

int FUN_1400339ae(longlong param_1,int param_2,int param_3,char param_4,longlong param_5,
                 ulonglong *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  local_4c = 0;
  uVar6 = (ulonglong)*(uint *)(param_1 + 0x10);
  if (uVar6 < 0xc) {
    if (*(longlong *)(param_1 + 0x18) == 0) {
      *(longlong *)(param_1 + 0x18) = param_1 + 0x538;
      *(undefined4 *)(param_1 + 0x14) = 0xc;
    }
LAB_140033a0b:
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    puVar4 = puVar3 + uVar6 * 9;
    if ((int)uVar6 != 0) goto LAB_140033a40;
    iVar5 = 1;
    puVar10 = puVar4;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x14);
    if (uVar1 <= *(uint *)(param_1 + 0x10)) {
      if (0x1c71c70 < uVar1) {
        iVar5 = 0x40;
LAB_140033b17:
        puVar10 = (undefined8 *)0x0;
        goto LAB_140033a86;
      }
      uVar2 = (uVar1 >> 2) + uVar1 + 4;
      uVar8 = 0x1c71c71;
      if (uVar2 < 0x1c71c71) {
        uVar8 = uVar2;
      }
      if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)(param_1 + 0x538)) {
        puVar10 = (undefined8 *)0x0;
        puVar4 = (undefined8 *)FUN_14001c617(param_5,0x48,0,uVar8,0,&local_4c);
        *(undefined8 **)(param_1 + 0x18) = puVar4;
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_140033a86;
        FUN_1400b3550(puVar4,(undefined8 *)(param_1 + 0x538),0x360);
      }
      else {
        lVar7 = FUN_14001c617(param_5,0x48,uVar1,uVar8,(longlong)*(undefined8 **)(param_1 + 0x18),
                              &local_4c);
        *(longlong *)(param_1 + 0x18) = lVar7;
        iVar5 = local_4c;
        if (local_4c != 0) goto LAB_140033b17;
      }
      *(uint *)(param_1 + 0x14) = uVar8;
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x10);
      goto LAB_140033a0b;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x18);
    puVar4 = puVar3 + uVar6 * 9;
LAB_140033a40:
    do {
      iVar5 = (int)*(short *)(puVar4 + -9);
      puVar10 = puVar4;
      if (param_4 == '\0') {
        if (iVar5 < param_2) break;
      }
      else if (param_2 < iVar5) break;
      if ((param_2 == iVar5) && (param_3 == *(int *)(param_1 + 0x20))) break;
      puVar10 = puVar4 + -9;
      puVar9 = puVar10;
      for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
        *puVar4 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar4 = puVar10;
    } while (puVar3 < puVar10);
    iVar5 = *(int *)(param_1 + 0x10) + 1;
  }
  *(int *)(param_1 + 0x10) = iVar5;
  iVar5 = 0;
LAB_140033a86:
  *param_6 = (ulonglong)puVar10;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar5;
}

