/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bb51c */

void __thiscall FUN_101bb51c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  FUN_101132aa(param_2);
  FUN_1012d08c("Document \"%s\"",param_2);
  FUN_100fcd80(0,param_2 + 0x28);
  FUN_1012d238(
              "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."
              );
  FUN_100fce8e(1);
  FUN_101145b7(0x1233,0x40000);
  local_1c = 0;
  cVar1 = FUN_1012e1b7("Rename..",&local_1c);
  if (cVar1 != '\0') {
    *(int *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  FUN_10114a0e(0,0xbf800000);
  FUN_101145b7(0x122e,0x40000);
  local_1c = 0;
  cVar1 = FUN_1012e1b7("Modify",&local_1c);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x26) = 1;
  }
  FUN_10114a0e(0,0xbf800000);
  FUN_101145b7(0x1234,0x40000);
  local_1c = 0;
  cVar1 = FUN_1012e1b7(&DAT_10338aad,&local_1c);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 0x26) = 0;
  }
  FUN_10114a0e(0,0xbf800000);
  FUN_101145b7(0x1238,0x40000);
  local_1c = 0;
  cVar1 = FUN_1012e1b7("Close",&local_1c);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == *(int *)(param_1 + 0x10)) {
      if (iVar2 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar2 / 2 + iVar2;
      }
      iVar4 = iVar2 + 1;
      if (iVar2 + 1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_100fa1fa(iVar4 * 4);
      if (*(int *)(param_1 + 0x14) != 0) {
        FUN_1025b2d0(iVar3,*(int *)(param_1 + 0x14),*(int *)(param_1 + 0xc) << 2);
        FUN_100fa2cb(*(undefined4 *)(param_1 + 0x14));
      }
      *(int *)(param_1 + 0x14) = iVar3;
      *(int *)(param_1 + 0x10) = iVar4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x14);
    }
    *(int *)(iVar3 + iVar2 * 4) = param_2;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  }
  FUN_101438d3("color",param_2 + 0x28,0);
  FUN_10113568();
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

