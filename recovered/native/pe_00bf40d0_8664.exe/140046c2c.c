/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140046c2c */

ulonglong FUN_140046c2c(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_78 [44];
  int local_4c;
  char local_48;
  undefined7 uStack_47;
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x438);
  uVar4 = 0;
  if (uVar1 != 0) {
    bVar2 = true;
    uVar5 = 0;
    do {
      while( true ) {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        FUN_140041cca(param_1,uVar6,&local_4c);
        if (local_4c != 0) break;
        if (uVar5 == uVar1) {
          if (!bVar2) goto LAB_140046cbf;
LAB_140046cbb:
          uVar4 = 0;
          goto LAB_140046cfd;
        }
      }
      if (!bVar2) goto LAB_140046cbb;
      bVar2 = false;
      uVar4 = (ulonglong)uVar6;
    } while (uVar5 != uVar1);
    uVar4 = (ulonglong)uVar6;
LAB_140046cbf:
    if ((int)uVar4 == 0) {
      uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
    }
    else {
      uVar3 = FUN_14001f4c3(param_1,(int)uVar4,&local_48,8);
      uVar4 = 0;
      if (((int)uVar3 == 0) && (uVar4 = 0, local_48 == '.')) {
        uVar4 = (ulonglong)(CONCAT71(uStack_47,0x2e) == 0x666564746f6e2e);
      }
    }
  }
LAB_140046cfd:
  if (DAT_14012ea80 != (local_40 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_40 ^ (ulonglong)auStack_78);
  }
  return uVar4;
}

