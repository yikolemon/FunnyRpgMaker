/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c476c */

void FUN_1801c476c(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_180402640 ^ (ulonglong)auStack_148;
  cVar1 = FUN_18011b87b(0,0);
  if (cVar1 != '\0') {
    FUN_1801bf199(local_128,"Save %s",param_2);
    cVar1 = FUN_1801377a6(local_128,"Ctrl+S",0,*(undefined1 *)(param_2 + 0x24));
    if (cVar1 != '\0') {
      *(undefined1 *)(param_2 + 0x26) = 0;
    }
    cVar1 = FUN_1801377a6("Rename...",&DAT_18036c3ec,0,*(undefined1 *)(param_2 + 0x24));
    if (cVar1 != '\0') {
      *(longlong *)(param_1 + 0x20) = param_2;
    }
    cVar1 = FUN_1801377a6("Close","Ctrl+W",0,*(undefined1 *)(param_2 + 0x24));
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + 0x10);
      if (iVar2 == *(int *)(param_1 + 0x14)) {
        if (iVar2 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar2 / 2 + iVar2;
        }
        iVar5 = iVar2 + 1;
        if (iVar2 + 1 < iVar4) {
          iVar5 = iVar4;
        }
        lVar3 = FUN_1800fe7f8((longlong)iVar5 << 3);
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_1802a82f0(lVar3,*(longlong *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x10) << 3)
          ;
          FUN_1800fe8d4(*(undefined8 *)(param_1 + 0x18));
        }
        *(longlong *)(param_1 + 0x18) = lVar3;
        *(int *)(param_1 + 0x14) = iVar5;
        iVar2 = *(int *)(param_1 + 0x10);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x18);
      }
      *(longlong *)(lVar3 + (longlong)iVar2 * 8) = param_2;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
    FUN_18011b3ef();
  }
  if (DAT_180402640 == (local_28 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_28 ^ (ulonglong)auStack_148);
}

