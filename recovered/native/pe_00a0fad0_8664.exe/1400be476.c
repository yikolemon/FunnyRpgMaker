/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400be476 */

int FUN_1400be476(longlong *param_1)

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
  
  local_28 = DAT_1401c9640 ^ (ulonglong)auStack_2a8;
  lVar1 = *param_1;
  FUN_1400be5bc(lVar1,local_280);
  if (local_27c == 0) {
    if (local_280[0] == '\x01') {
      FUN_1400be8c2(lVar1 + 0x48,lVar1 + 0x40);
      local_27c = FUN_140042a2a(lVar1 + 0x20,*(undefined4 *)(lVar1 + 0x60),lVar1 + 0x40,local_278);
    }
    else {
      local_27c = FUN_1400be6c6(lVar1,local_278);
    }
    *(undefined1 *)(lVar1 + 100) = 1;
    while (local_27c == 0x12) {
      lVar2 = *(longlong *)(lVar1 + 0x50);
      if (*(longlong *)(lVar1 + 0x48) == lVar2) {
        local_27c = 0;
        goto LAB_1400be4b0;
      }
      uVar3 = *(undefined8 *)(lVar2 + -8);
      *(undefined8 *)(lVar2 + -8) = 0xffffffffffffffff;
      uVar4 = *(undefined8 *)(lVar1 + 0x40);
      *(undefined8 *)(lVar1 + 0x40) = uVar3;
      FUN_1400dcb90(uVar4);
      FUN_1400dcb90(*(undefined8 *)(*(longlong *)(lVar1 + 0x50) + -8));
      *(longlong *)(lVar1 + 0x50) = *(longlong *)(lVar1 + 0x50) + -8;
      FUN_1400be6f8(lVar1 + 0x20);
      local_27c = FUN_1400be6c6(lVar1,local_278);
    }
    if (local_27c == 0) {
      FUN_1400432ac(lVar1,local_278);
      iVar5 = 0;
      goto LAB_1400be4bc;
    }
  }
LAB_1400be4b0:
  FUN_140043b8c(param_1);
  iVar5 = local_27c;
LAB_1400be4bc:
  if (DAT_1401c9640 == (local_28 ^ (ulonglong)auStack_2a8)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_28 ^ (ulonglong)auStack_2a8);
}

