/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140077bb4 */

longlong FUN_140077bb4(longlong param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 auStackY_58 [32];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(ushort *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  lVar3 = FUN_14001f231(param_2,1,0,uVar1 + 1,0,&local_24);
  if (local_24 == 0) {
    if (uVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      do {
        cVar6 = *(char *)(lVar2 + uVar4);
        if (cVar6 == '\0') {
          uVar5 = uVar4 & 0xffffffff;
          break;
        }
        if (cVar6 < ' ') {
          cVar6 = '?';
        }
        *(char *)(lVar3 + uVar4) = cVar6;
        uVar4 = uVar4 + 1;
      } while (uVar5 != uVar4);
    }
    *(undefined1 *)(lVar3 + uVar5) = 0;
  }
  else {
    lVar3 = 0;
  }
  if (DAT_14012ea80 != (local_20 ^ (ulonglong)auStackY_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_20 ^ (ulonglong)auStackY_58);
  }
  return lVar3;
}

