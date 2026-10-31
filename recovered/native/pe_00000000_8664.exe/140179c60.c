/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140179c60 */

longlong FUN_140179c60(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x10);
  uVar1 = *(ushort *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  local_30 = &local_24;
  local_38 = 0;
  lVar3 = FUN_14012b8aa(param_2,1,0,uVar1 + 1);
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
  if (DAT_140f17b40 != (local_20 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
  }
  return lVar3;
}

