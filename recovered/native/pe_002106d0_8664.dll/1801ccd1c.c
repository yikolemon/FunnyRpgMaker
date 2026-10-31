/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ccd1c */

int FUN_1801ccd1c(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar6 = *(longlong *)(param_2 + 8);
  local_50 = 0;
  if (((*(byte *)(*(longlong *)(param_2 + 0xf0) + 0x32) & 0x10) != 0) &&
     (*(int *)(param_2 + 0x60) == 0x6f75746c)) {
    uVar1 = *(undefined4 *)(param_2 + 0x18);
    local_58 = 0;
    local_78 = local_60;
    cVar3 = FUN_1801ccefb(lVar6,uVar1,&local_64,&local_68);
    if (cVar3 != '\0') {
      iVar4 = FUN_1801cabcc(lVar6,0);
      if (iVar4 == 0) {
        lVar2 = *(longlong *)(lVar6 + 0x2d0);
        do {
          iVar4 = FUN_1801caef1(lVar6,local_64,
                                *(uint *)(*(longlong *)(param_2 + 0xf0) + 0x30) & 0xffeffff3 | 0xc);
          if ((iVar4 != 0) ||
             (iVar4 = (**(code **)(lVar2 + 0x148))
                                (lVar6,local_68,param_2,*(undefined8 *)(lVar6 + 0x78)), iVar4 != 0))
          {
            FUN_1801cae6a(*(undefined8 *)(lVar6 + 0x78));
            goto LAB_1801cce38;
          }
          local_78 = local_60;
          cVar3 = FUN_1801ccefb(lVar6,uVar1,&local_64);
        } while (cVar3 != '\0');
        *(undefined4 *)(param_2 + 0x60) = 0x62697473;
        FUN_1801cae6a(*(undefined8 *)(lVar6 + 0x78));
        iVar4 = 0;
        goto LAB_1801ccec5;
      }
LAB_1801cce38:
      *(undefined4 *)(param_2 + 0x60) = 0x6f75746c;
    }
  }
  if (*(int *)(param_2 + 0x60) == 0x6f75746c) {
    local_50 = *(undefined8 *)(param_1 + 0x118);
    lVar6 = *(longlong *)(param_1 + 0x128);
  }
  else {
    lVar6 = FUN_1801cccd8(param_1,*(int *)(param_2 + 0x60),&local_50);
  }
  if (lVar6 == 0) {
    iVar5 = 0x13;
  }
  else {
    do {
      iVar5 = (**(code **)(lVar6 + 0x70))(lVar6,param_2,param_3,0);
      iVar4 = 0;
      if (iVar5 == 0) goto LAB_1801ccec5;
    } while (((char)iVar5 == '\x13') &&
            (lVar6 = FUN_1801cccd8(param_1,*(undefined4 *)(param_2 + 0x60),&local_50), lVar6 != 0));
    iVar4 = iVar5;
    if ((char)iVar5 != '\x13') goto LAB_1801ccec5;
  }
  iVar4 = 0;
  if (*(int *)(param_2 + 0x60) != 0x62697473) {
    iVar4 = iVar5;
  }
LAB_1801ccec5:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_98);
  }
  return iVar4;
}

