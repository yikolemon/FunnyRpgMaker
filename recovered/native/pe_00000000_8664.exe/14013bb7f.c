/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013bb7f */

undefined8 FUN_14013bb7f(longlong param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  iVar1 = strcmp(param_2,"glyph-to-script-map");
  if (iVar1 == 0) {
    uVar3 = FUN_14013bce7(*param_3,&local_28,param_1);
    if ((int)uVar3 == 0) {
      param_3[1] = *(undefined8 *)(local_28 + 0x10);
    }
    goto LAB_14013bc6b;
  }
  iVar1 = strcmp(param_2,"fallback-script");
  if (iVar1 == 0) {
    uVar2 = *(undefined4 *)((&PTR_DAT_140e98180)[*(uint *)(param_1 + 0x18)] + 8);
LAB_14013bc67:
    *(undefined4 *)param_3 = uVar2;
  }
  else {
    iVar1 = strcmp(param_2,"default-script");
    if (iVar1 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x1c);
      goto LAB_14013bc67;
    }
    iVar1 = strcmp(param_2,"increase-x-height");
    if (iVar1 == 0) {
      uVar3 = FUN_14013bce7(*param_3,&local_28,param_1);
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_3 + 1) = *(undefined4 *)(local_28 + 0x40);
      }
      goto LAB_14013bc6b;
    }
    iVar1 = strcmp(param_2,"darkening-parameters");
    if (iVar1 == 0) {
      *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)((longlong)param_3 + 4) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)(param_1 + 0x30);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)((longlong)param_3 + 0x14) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)(param_1 + 0x40);
    }
    else {
      iVar1 = strcmp(param_2,"no-stem-darkening");
      uVar3 = 0xc;
      if (iVar1 != 0) goto LAB_14013bc6b;
      *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x20);
    }
  }
  uVar3 = 0;
LAB_14013bc6b:
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

