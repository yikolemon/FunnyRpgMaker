/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140148ce4 */

ulonglong FUN_140148ce4(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  char local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x438);
  uVar4 = 0;
  if (uVar1 != 0) {
    bVar2 = true;
    uVar5 = 0;
    do {
      while( true ) {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        FUN_140143d82(param_1,uVar6,&local_4c);
        if (local_4c != 0) break;
        if (uVar5 == uVar1) {
          if (!bVar2) goto LAB_140148d77;
LAB_140148d73:
          uVar4 = 0;
          goto LAB_140148db5;
        }
      }
      if (!bVar2) goto LAB_140148d73;
      bVar2 = false;
      uVar4 = (ulonglong)uVar6;
    } while (uVar5 != uVar1);
    uVar4 = (ulonglong)uVar6;
LAB_140148d77:
    if ((int)uVar4 == 0) {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    else {
      iVar3 = FUN_14012bb3c(param_1,uVar4,&local_48,8);
      uVar4 = 0;
      if ((iVar3 == 0) && (uVar4 = 0, local_48 == '.')) {
        uVar4 = (ulonglong)(CONCAT71(uStack_47,0x2e) == 0x666564746f6e2e);
      }
    }
  }
LAB_140148db5:
  if (DAT_140f17b40 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_40 ^ (ulonglong)auStack_78);
  }
  return uVar4;
}

