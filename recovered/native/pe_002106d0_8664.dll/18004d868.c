/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004d868 */

undefined8 FUN_18004d868(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  FUN_18004de6c();
  uVar7 = *(uint *)(param_1 + 0x14);
  iVar2 = 5;
  if (8 < uVar7 - 0x31) {
    if (uVar7 == 0x30) {
      FUN_180003bf2(param_1 + 0x50,0x30);
      iVar2 = 5;
LAB_18004d9fe:
      iVar1 = FUN_18004db78(param_1);
      if ((iVar1 == 0x65) || (iVar1 == 0x45)) goto LAB_18004d8d5;
      if (iVar1 != 0x2e) goto LAB_18004da83;
      goto LAB_18004da21;
    }
    if (uVar7 == 0x2d) {
      FUN_180003bf2(param_1 + 0x50,0x2d);
    }
    iVar2 = FUN_18004db78(param_1);
    if (iVar2 - 0x31U < 9) {
      uVar7 = *(uint *)(param_1 + 0x14);
      iVar2 = 6;
      goto LAB_18004d89a;
    }
    if (iVar2 == 0x30) {
      FUN_180003bf2(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = 6;
      goto LAB_18004d9fe;
    }
    pcVar4 = "invalid number; expected digit after \'-\'";
LAB_18004db45:
    *(char **)(param_1 + 0x70) = pcVar4;
    uVar8 = 0xe;
    goto LAB_18004db4e;
  }
LAB_18004d89a:
  while( true ) {
    FUN_180003bf2(param_1 + 0x50,uVar7);
    iVar1 = FUN_18004db78(param_1);
    if (9 < iVar1 - 0x30U) break;
    uVar7 = (uint)*(byte *)(param_1 + 0x14);
  }
  if (iVar1 == 0x2e) {
LAB_18004da21:
    FUN_180003bf2(param_1 + 0x50,*(undefined1 *)(param_1 + 0x90));
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x60) + -1;
    iVar2 = FUN_18004db78(param_1);
    if (9 < iVar2 - 0x30U) {
      pcVar4 = "invalid number; expected digit after \'.\'";
      goto LAB_18004db45;
    }
    do {
      FUN_180003bf2(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_18004db78(param_1);
    } while (iVar2 - 0x30U < 10);
    if ((iVar2 == 0x65) || (iVar2 == 0x45)) goto LAB_18004d8d5;
LAB_18004d932:
    FUN_18004dc3e(param_1);
    local_28 = 0;
    puVar3 = (undefined4 *)FUN_18027e66c();
    *puVar3 = 0;
  }
  else {
    if ((iVar1 == 0x45) || (iVar1 == 0x65)) {
LAB_18004d8d5:
      FUN_180003bf2(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_18004db78(param_1);
      if (9 < iVar2 - 0x30U) {
        if ((iVar2 == 0x2d) || (iVar2 == 0x2b)) {
          FUN_180003bf2(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
          iVar2 = FUN_18004db78(param_1);
          if (iVar2 - 0x30U < 10) goto LAB_18004d8f8;
          pcVar4 = "invalid number; expected digit after exponent sign";
        }
        else {
          pcVar4 = "invalid number; expected \'+\', \'-\', or digit after exponent";
        }
        goto LAB_18004db45;
      }
LAB_18004d8f8:
      FUN_180003bf2(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_18004db78(param_1);
      if (iVar2 - 0x30U < 10) {
        do {
          FUN_180003bf2(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
          iVar2 = FUN_18004db78(param_1);
        } while (iVar2 - 0x30U < 10);
      }
      goto LAB_18004d932;
    }
LAB_18004da83:
    FUN_18004dc3e(param_1);
    local_28 = 0;
    puVar3 = (undefined4 *)FUN_18027e66c();
    *puVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
      lVar6 = param_1 + 0x50;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    if (iVar2 == 5) {
      uVar8 = FUN_18028b4d8();
      piVar5 = (int *)FUN_18027e66c();
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x80) = uVar8;
        uVar8 = 5;
        goto LAB_18004db4e;
      }
    }
    else {
      uVar8 = FUN_18028b424(lVar6,&local_28,10);
      piVar5 = (int *)FUN_18027e66c();
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x78) = uVar8;
        uVar8 = 6;
        goto LAB_18004db4e;
      }
    }
  }
  if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
    lVar6 = param_1 + 0x50;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x50);
  }
  uVar8 = FUN_18028b168(lVar6,&local_28);
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  uVar8 = 7;
LAB_18004db4e:
  if (DAT_180402640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  return uVar8;
}

