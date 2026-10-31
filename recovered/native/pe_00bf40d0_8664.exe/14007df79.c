/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007df79 */

ulonglong FUN_14007df79(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort *puVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 extraout_var;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  local_40 = (longlong *)0x0;
  uVar7 = 6;
  if (param_2 != (undefined8 *)0x0 && param_1 != (longlong *)0x0) {
    puVar3 = (ushort *)param_2[1];
    uVar7 = 0x14;
    if (puVar3 != (ushort *)0x0) {
      if ((puVar3[1] != 0) && (*puVar3 != 0)) {
        if ((*(longlong *)(puVar3 + 0xc) == 0) ||
           ((*(longlong *)(puVar3 + 4) == 0 ||
            (uVar7 = 6, *(int *)(param_2 + 10) - 0x21U < 0xffffffe1)))) goto LAB_14007e0ad;
        lVar4 = *param_1;
        if (lVar4 == 0) {
          uVar7 = 0x20;
          goto LAB_14007e0ad;
        }
        uVar8 = FUN_140020116(puVar3);
        uVar1 = *(undefined1 *)((longlong)param_2 + 0x54);
        uVar2 = *(undefined1 *)((longlong)param_2 + 0x55);
        uVar7 = FUN_14007ed72(lVar4,(longlong *)&local_40);
        plVar5 = local_40;
        if ((int)uVar7 != 0) goto LAB_14007e0ad;
        uVar7 = FUN_14007ede7(puVar3,(longlong)local_40);
        if ((int)uVar7 != 0) goto LAB_14007e0ad;
        local_4c = (int)uVar8;
        local_48 = uVar1;
        local_47 = uVar2;
        if (*(char *)((longlong)param_2 + 0x56) == '\0') {
          local_44 = 0;
          uVar7 = FUN_14007f21a((undefined8 *)&local_4c,plVar5,*(int *)(param_2 + 10),
                                (uint *)*param_2);
        }
        else {
          local_44 = 0;
          iVar6 = FUN_14007ee01(&local_4c,plVar5,*(int *)(param_2 + 10),(uint *)*param_2);
          uVar7 = CONCAT44(extraout_var,iVar6);
        }
        if ((int)uVar7 != 0) goto LAB_14007e0ad;
        if (plVar5 != (longlong *)0x0) {
          FUN_14007f296((longlong *)&local_40);
        }
      }
      uVar7 = 0;
    }
  }
LAB_14007e0ad:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_78)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_78);
}

