/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140065c7c */

undefined8 FUN_140065c7c(longlong param_1)

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
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  FUN_1400662b0();
  uVar7 = *(uint *)(param_1 + 0x14);
  iVar2 = 5;
  if (8 < uVar7 - 0x31) {
    if (uVar7 == 0x30) {
      FUN_14000cf50(param_1 + 0x50,0x30);
      iVar2 = 5;
LAB_140065e12:
      iVar1 = FUN_140065f7e(param_1);
      if ((iVar1 == 0x65) || (iVar1 == 0x45)) goto LAB_140065ce9;
      if (iVar1 != 0x2e) goto LAB_140065e89;
      goto LAB_140065e35;
    }
    if (uVar7 == 0x2d) {
      FUN_14000cf50(param_1 + 0x50,0x2d);
    }
    iVar2 = FUN_140065f7e(param_1);
    if (iVar2 - 0x31U < 9) {
      uVar7 = *(uint *)(param_1 + 0x14);
      iVar2 = 6;
      goto LAB_140065cae;
    }
    if (iVar2 == 0x30) {
      FUN_14000cf50(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = 6;
      goto LAB_140065e12;
    }
    pcVar4 = "invalid number; expected digit after \'-\'";
LAB_140065f4b:
    *(char **)(param_1 + 0x70) = pcVar4;
    uVar8 = 0xe;
    goto LAB_140065f54;
  }
LAB_140065cae:
  while( true ) {
    FUN_14000cf50(param_1 + 0x50,uVar7);
    iVar1 = FUN_140065f7e(param_1);
    if (9 < iVar1 - 0x30U) break;
    uVar7 = (uint)*(byte *)(param_1 + 0x14);
  }
  if (iVar1 == 0x2e) {
LAB_140065e35:
    FUN_14000cf50(param_1 + 0x50,*(undefined1 *)(param_1 + 0x90));
    iVar2 = FUN_140065f7e(param_1);
    if (9 < iVar2 - 0x30U) {
      pcVar4 = "invalid number; expected digit after \'.\'";
      goto LAB_140065f4b;
    }
    do {
      FUN_14000cf50(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_140065f7e(param_1);
    } while (iVar2 - 0x30U < 10);
    if ((iVar2 == 0x65) || (iVar2 == 0x45)) goto LAB_140065ce9;
LAB_140065d46:
    FUN_140066032(param_1);
    local_28 = 0;
    puVar3 = (undefined4 *)FUN_140113dd4();
    *puVar3 = 0;
  }
  else {
    if ((iVar1 == 0x45) || (iVar1 == 0x65)) {
LAB_140065ce9:
      FUN_14000cf50(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_140065f7e(param_1);
      if (9 < iVar2 - 0x30U) {
        if ((iVar2 == 0x2d) || (iVar2 == 0x2b)) {
          FUN_14000cf50(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
          iVar2 = FUN_140065f7e(param_1);
          if (iVar2 - 0x30U < 10) goto LAB_140065d0c;
          pcVar4 = "invalid number; expected digit after exponent sign";
        }
        else {
          pcVar4 = "invalid number; expected \'+\', \'-\', or digit after exponent";
        }
        goto LAB_140065f4b;
      }
LAB_140065d0c:
      FUN_14000cf50(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
      iVar2 = FUN_140065f7e(param_1);
      if (iVar2 - 0x30U < 10) {
        do {
          FUN_14000cf50(param_1 + 0x50,*(undefined1 *)(param_1 + 0x14));
          iVar2 = FUN_140065f7e(param_1);
        } while (iVar2 - 0x30U < 10);
      }
      goto LAB_140065d46;
    }
LAB_140065e89:
    FUN_140066032(param_1);
    local_28 = 0;
    puVar3 = (undefined4 *)FUN_140113dd4();
    *puVar3 = 0;
    if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
      lVar6 = param_1 + 0x50;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    if (iVar2 == 5) {
      uVar8 = FUN_14011ba78();
      piVar5 = (int *)FUN_140113dd4();
      if (*piVar5 == 0) {
        *(undefined8 *)(param_1 + 0x80) = uVar8;
        uVar8 = 5;
        goto LAB_140065f54;
      }
    }
    else {
      uVar8 = FUN_14011b910(lVar6,&local_28,10);
      piVar5 = (int *)FUN_140113dd4();
      if (*piVar5 == 0) {
        *(undefined8 *)(param_1 + 0x78) = uVar8;
        uVar8 = 6;
        goto LAB_140065f54;
      }
    }
  }
  if (*(ulonglong *)(param_1 + 0x68) < 0x10) {
    lVar6 = param_1 + 0x50;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x50);
  }
  uVar8 = FUN_140118100(lVar6,&local_28);
  *(undefined8 *)(param_1 + 0x88) = uVar8;
  uVar8 = 7;
LAB_140065f54:
  if (DAT_1401c9640 != (local_20 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_48);
  }
  return uVar8;
}

