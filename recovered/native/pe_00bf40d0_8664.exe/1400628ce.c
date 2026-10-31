/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400628ce */

int FUN_1400628ce(longlong *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 auStack_58 [32];
  size_t local_38;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  pbVar5 = FUN_14006258e((longlong)param_1,(longlong *)&local_38);
  iVar6 = 0xa0;
  iVar4 = iVar6;
  if (pbVar5 != (byte *)0x0) {
    bVar1 = false;
    bVar2 = false;
    do {
      iVar3 = FUN_1400625e6((char *)pbVar5,local_38);
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
        iVar4 = FUN_14006318d(param_1);
        bVar1 = true;
LAB_140062952:
        if (iVar4 != 0) break;
      }
      else if (iVar3 != 0x4b) {
        iVar4 = iVar6;
        if ((iVar3 == 0x35) && (!bVar2)) {
          iVar4 = FUN_140062f9a(param_1);
          bVar2 = true;
          goto LAB_140062952;
        }
        break;
      }
      pbVar5 = FUN_14006258e((longlong)param_1,(longlong *)&local_38);
      iVar4 = iVar6;
    } while (pbVar5 != (byte *)0x0);
  }
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStack_58);
  }
  return iVar4;
}

