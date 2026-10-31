/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180230939 */

undefined8 FUN_180230939(longlong *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  short *psVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_40 = 0;
  uVar6 = 6;
  if (param_2 != (undefined8 *)0x0 && param_1 != (longlong *)0x0) {
    psVar3 = (short *)param_2[1];
    uVar6 = 0x14;
    if (psVar3 != (short *)0x0) {
      if ((psVar3[1] != 0) && (*psVar3 != 0)) {
        if ((*(longlong *)(psVar3 + 0xc) == 0) || (*(longlong *)(psVar3 + 4) == 0))
        goto LAB_180230a6d;
        uVar6 = 6;
        if (*(int *)(param_2 + 10) - 0x21U < 0xffffffe1) goto LAB_180230a6d;
        lVar4 = *param_1;
        if (lVar4 == 0) {
          uVar6 = 0x20;
          goto LAB_180230a6d;
        }
        uVar5 = FUN_1801cdd13(psVar3);
        uVar1 = *(undefined1 *)((longlong)param_2 + 0x54);
        uVar2 = *(undefined1 *)((longlong)param_2 + 0x55);
        uVar6 = FUN_180231732(lVar4,&local_40);
        lVar4 = local_40;
        if ((int)uVar6 != 0) goto LAB_180230a6d;
        uVar6 = FUN_1802317a7(psVar3,local_40);
        if ((int)uVar6 != 0) goto LAB_180230a6d;
        local_4c = uVar5;
        local_48 = uVar1;
        local_47 = uVar2;
        if (*(char *)((longlong)param_2 + 0x56) == '\0') {
          local_44 = 0;
          uVar6 = FUN_180231bda(&local_4c,lVar4,*(undefined4 *)(param_2 + 10),*param_2);
        }
        else {
          local_44 = 0;
          uVar6 = FUN_1802317c1(&local_4c,lVar4);
        }
        if ((int)uVar6 != 0) goto LAB_180230a6d;
        if (lVar4 != 0) {
          FUN_180231c56(&local_40);
        }
      }
      uVar6 = 0;
    }
  }
LAB_180230a6d:
  if (DAT_180402640 == (local_38 ^ (ulonglong)auStack_78)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
}

