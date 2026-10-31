/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402bdfc6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1402bdfc6(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_2a8 [40];
  char local_280 [4];
  int local_27c;
  undefined1 local_278 [592];
  ulonglong local_28;
  
  local_28 = ram0x000140613b10 ^ (ulonglong)auStack_2a8;
  lVar1 = *param_1;
  FUN_1402be10c(lVar1,local_280);
  if (local_27c == 0) {
    if (local_280[0] == '\x01') {
      FUN_1402be412(lVar1 + 0x48,lVar1 + 0x40);
      local_27c = FUN_14027d3a4(lVar1 + 0x20,*(undefined4 *)(lVar1 + 0x60),lVar1 + 0x40,local_278);
    }
    else {
      local_27c = FUN_1402be216(lVar1,local_278);
    }
    *(undefined1 *)(lVar1 + 100) = 1;
    while (local_27c == 0x12) {
      lVar2 = *(longlong *)(lVar1 + 0x50);
      if (*(longlong *)(lVar1 + 0x48) == lVar2) {
        local_27c = 0;
        goto LAB_1402be000;
      }
      uVar3 = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(lVar2 + -8) = 0xffffffffffffffff;
      uVar4 = *(undefined8 *)(lVar1 + 0x40);
      *(undefined8 *)(lVar1 + 0x40) = uVar3;
      FUN_14044b700(uVar4);
      FUN_14044b700(*(undefined8 *)(*(longlong *)(lVar1 + 0x50) + -8));
      *(longlong *)(lVar1 + 0x50) = *(longlong *)(lVar1 + 0x50) + -8;
      FUN_1402be248(lVar1 + 0x20);
      local_27c = FUN_1402be216(lVar1,local_278);
    }
    if (local_27c == 0) {
      FUN_14027d716(lVar1,local_278);
      iVar5 = 0;
      goto LAB_1402be00c;
    }
  }
LAB_1402be000:
  FUN_14027db9a(param_1);
  iVar5 = local_27c;
LAB_1402be00c:
  if (ram0x000140613b10 == (local_28 ^ (ulonglong)auStack_2a8)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_28 ^ (ulonglong)auStack_2a8);
}

