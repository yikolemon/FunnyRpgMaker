/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010a470 */

void FUN_14010a470(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  cVar1 = FUN_140094b37(0,0);
  if (cVar1 != '\0') {
    FUN_140104e1d(local_128,"Save %s",param_2);
    cVar1 = FUN_1400b06d6(local_128,"Ctrl+S",0,*(undefined1 *)(param_2 + 0x24));
    if (cVar1 != '\0') {
      *(undefined1 *)(param_2 + 0x26) = 0;
    }
    cVar1 = FUN_1400b06d6("Rename...",&DAT_140eccca2,0,*(undefined1 *)(param_2 + 0x24));
    if (cVar1 != '\0') {
      *(longlong *)(param_1 + 0x20) = param_2;
    }
    cVar1 = FUN_1400b06d6("Close","Ctrl+W",0,*(undefined1 *)(param_2 + 0x24));
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
        lVar3 = FUN_140077ab4((longlong)iVar5 << 3);
        if (*(longlong *)(param_1 + 0x18) != 0) {
          FUN_1401c5180(lVar3,*(longlong *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x10) << 3)
          ;
          FUN_140077b90(*(undefined8 *)(param_1 + 0x18));
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
    FUN_1400946ab();
  }
  if (DAT_140f17b40 == (local_28 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_28 ^ (ulonglong)auStack_148);
}

