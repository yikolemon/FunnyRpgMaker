/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140007736 */

undefined8 FUN_140007736(longlong param_1)

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
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  FUN_140007d74();
  uVar7 = *(uint *)(param_1 + 0x14);
  iVar2 = 5;
  if (8 < uVar7 - 0x31) {
    if (uVar7 == 0x30) {
      FUN_140004108(param_1 + 0x50,0x30);
      iVar2 = 5;
LAB_1400078cc:
      iVar1 = FUN_140007a46(param_1);
      if ((iVar1 == 0x65) || (iVar1 == 0x45)) goto LAB_1400077a3;
      if (iVar1 != 0x2e) goto LAB_140007951;
      goto LAB_1400078ef;
    }
    if (uVar7 == 0x2d) {
      FUN_140004108(param_1 + 0x50,0x2d);
    }
    iVar2 = FUN_140007a46(param_1);
    if (iVar2 - 0x31U < 9) {
      uVar7 = *(uint *)(param_1 + 0x14);
      iVar2 = 6;
      goto LAB_140007768;
    }
    if (iVar2 == 0x30) {
      FUN_140004108(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = 6;
      goto LAB_1400078cc;
    }
    pcVar4 = "invalid number; expected digit after \'-\'";
LAB_140007a13:
    *(char **)(param_1 + 0x70) = pcVar4;
    uVar8 = 0xe;
    goto LAB_140007a1c;
  }
LAB_140007768:
  while( true ) {
    FUN_140004108(param_1 + 0x50,uVar7);
    iVar1 = FUN_140007a46(param_1);
    if (9 < iVar1 - 0x30U) break;
    uVar7 = (uint)*(byte *)(param_1 + 0x14);
  }
  if (iVar1 == 0x2e) {
LAB_1400078ef:
    FUN_140004108(param_1 + 0x50,*(undefined1 *)(param_1 + 0x90));
    *(longlong *)(param_1 + 0x98) = *(longlong *)(param_1 + 0x60) + -1;
    iVar2 = FUN_140007a46(param_1);
    if (9 < iVar2 - 0x30U) {
      pcVar4 = "invalid number; expected digit after \'.\'";
      goto LAB_140007a13;
    }
    do {
      FUN_140004108(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_140007a46(param_1);
    } while (iVar2 - 0x30U < 10);
    if ((iVar2 == 0x65) || (iVar2 == 0x45)) goto LAB_1400077a3;
LAB_140007800:
    FUN_140007b0c(param_1);
    local_28 = 0;
    puVar3 = (undefined4 *)FUN_14019e8cc();
    *puVar3 = 0;
  }
  else {
    if ((iVar1 == 0x45) || (iVar1 == 0x65)) {
LAB_1400077a3:
      FUN_140004108(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_140007a46(param_1);
      if (9 < iVar2 - 0x30U) {
        if ((iVar2 == 0x2d) || (iVar2 == 0x2b)) {
          FUN_140004108(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
          iVar2 = FUN_140007a46(param_1);
          if (iVar2 - 0x30U < 10) goto LAB_1400077c6;
          pcVar4 = "invalid number; expected digit after exponent sign";
        }
        else {
          pcVar4 = "invalid number; expected \'+\', \'-\', or digit after exponent";
        }
        goto LAB_140007a13;
      }
LAB_1400077c6:
      FUN_140004108(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_140007a46(param_1);
      if (iVar2 - 0x30U < 10) {
        do {
          FUN_140004108(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
          iVar2 = FUN_140007a46(param_1);
        } while (iVar2 - 0x30U < 10);
      }
      goto LAB_140007800;
    }
LAB_140007951:
    FUN_140007b0c(param_1);
    local_28 = 0;
    puVar3 = (undefined4 *)FUN_14019e8cc();
    *puVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
      lVar6 = param_1 + 0x50;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    if (iVar2 == 5) {
      uVar8 = FUN_1401a92dc();
      piVar5 = (int *)FUN_14019e8cc();
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x80) = uVar8;
        uVar8 = 5;
        goto LAB_140007a1c;
      }
    }
    else {
      uVar8 = FUN_1401a9228(lVar6,&local_28,10);
      piVar5 = (int *)FUN_14019e8cc();
      if (*piVar5 != 0x22) {
        *(undefined8 *)(param_1 + 0x78) = uVar8;
        uVar8 = 6;
        goto LAB_140007a1c;
      }
    }
  }
  if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
    lVar6 = param_1 + 0x50;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x50);
  }
  uVar8 = FUN_1401a9010(lVar6,&local_28);
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  uVar8 = 7;
LAB_140007a1c:
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
  }
  return uVar8;
}

