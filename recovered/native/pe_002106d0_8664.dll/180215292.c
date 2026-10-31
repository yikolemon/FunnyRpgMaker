/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180215292 */

int FUN_180215292(undefined8 param_1)

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
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  lVar5 = FUN_180214f52(param_1,&local_38);
  iVar6 = 0xa0;
  iVar4 = iVar6;
  if (lVar5 != 0) {
    bVar1 = false;
    bVar2 = false;
    do {
      iVar3 = FUN_180214faa(lVar5,local_38);
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
        iVar4 = FUN_180215b51(param_1);
        bVar1 = true;
LAB_180215316:
        if (iVar4 != 0) break;
      }
      else if (iVar3 != 0x4b) {
        iVar4 = iVar6;
        if ((iVar3 == 0x35) && (!bVar2)) {
          iVar4 = FUN_18021595e(param_1);
          bVar2 = true;
          goto LAB_180215316;
        }
        break;
      }
      lVar5 = FUN_180214f52(param_1,&local_38);
      iVar4 = iVar6;
    } while (lVar5 != 0);
  }
  if (DAT_180402640 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
  }
  return iVar4;
}

