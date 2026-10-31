/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10107abd */

void FUN_10107abd(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar4 = DAT_1039d74c;
  *(undefined4 *)(DAT_1039d74c + 0x27e8) = 0;
  if (*(char *)(iVar4 + 0x27e5) == '\x01') {
    iVar1 = *(int *)(iVar4 + 0x1514);
    FUN_10114115(7);
    cVar5 = FUN_10113d4b(0x20e,1);
    if (cVar5 != '\0') {
      *(undefined1 *)(iVar4 + 0x27e5) = 0;
    }
    iVar2 = *(int *)(iVar4 + 0x108);
    if (iVar2 != 0x3000) {
      bVar6 = FUN_1010377a(*(undefined1 *)(iVar4 + 0x27e6),0);
      if ((iVar1 != 0 & bVar6) == 1) {
        *(int *)(iVar4 + 0x27e8) = iVar1;
        *(undefined1 *)(iVar4 + 0x27e5) = 0;
      }
    }
    iVar8 = 0;
    do {
      if (iVar2 == 0x3000) {
        cVar5 = FUN_1010377a(iVar8,0);
        if (cVar5 != '\0') {
          *(char *)(iVar4 + 0x27e6) = (char)iVar8;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 3);
    FUN_10111e62(0x3f333333);
    FUN_10115b98();
    FUN_1012d08c("HoveredId: 0x%08X",iVar1);
    FUN_1012d08c("Press ESC to abort picking.");
    if (iVar2 == 0x3000) {
      FUN_1012d08c("Remap w/ Ctrl+Shift: click anywhere to select new mouse button.");
    }
    else {
      puVar3 = (&PTR_s_Left_10331e59_6_102b86f8)[*(byte *)(iVar4 + 0x27e6)];
      uVar7 = FUN_100fcbfd(iVar1 == 0);
      FUN_1012d147(uVar7,"Click %s Button to break in debugger! (remap w/ Ctrl+Shift)",puVar3);
    }
    thunk_FUN_1010ad44();
    return;
  }
  return;
}

