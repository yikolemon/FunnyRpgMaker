/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016497e */

int FUN_14016497e(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  lVar5 = FUN_14016463e(param_1,&local_38);
  iVar6 = 0xa0;
  iVar4 = iVar6;
  if (lVar5 != 0) {
    bVar1 = false;
    bVar2 = false;
    do {
      iVar3 = FUN_140164696(lVar5,local_38);
      if (iVar3 < 0x35) {
        if (1 < iVar3 - 0x32U) {
          iVar4 = iVar6;
          if (iVar3 - 0x14U < 2) {
            iVar4 = 0;
          }
          break;
        }
        iVar4 = iVar6;
        if (bVar1) break;
        iVar4 = FUN_14016523d(param_1);
        bVar1 = true;
LAB_140164a02:
        if (iVar4 != 0) break;
      }
      else if (iVar3 != 0x4b) {
        iVar4 = iVar6;
        if ((iVar3 == 0x35) && (!bVar2)) {
          iVar4 = FUN_14016504a(param_1);
          bVar2 = true;
          goto LAB_140164a02;
        }
        break;
      }
      lVar5 = FUN_14016463e(param_1,&local_38);
      iVar4 = iVar6;
    } while (lVar5 != 0);
  }
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
  }
  return iVar4;
}

