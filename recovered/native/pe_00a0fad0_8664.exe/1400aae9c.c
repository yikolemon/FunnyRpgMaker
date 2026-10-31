/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aae9c */

void FUN_1400aae9c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  lVar1 = param_2 + 0x58;
  local_34 = 0xffffffff;
  FUN_14009e716(lVar1,&DAT_1401cc7f8);
  FUN_14009e652(lVar1,param_1 + 0x78);
  FUN_14009e652(lVar1,(int *)(param_1 + 0x58));
  if (*(int *)(param_1 + 0x78) == 120000) {
    FUN_1400a0a20(param_2,param_1 + 0x80);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    lVar2 = 0x7c;
    uVar3 = 0;
    do {
      FUN_14009e652(lVar1,*(longlong *)(param_1 + 0x40) + lVar2);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x80;
    } while (uVar3 < *(uint *)(param_1 + 0x58));
  }
  local_34 = (int)((ulonglong)(*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60)) >> 3)
             * -0x45d1745d;
  FUN_14009e652(lVar1);
  lVar2 = *(longlong *)(param_1 + 0x68);
  for (lVar1 = *(longlong *)(param_1 + 0x60); lVar1 != lVar2; lVar1 = lVar1 + 0x58) {
    FUN_1400aafa8(lVar1,param_2);
  }
  if (DAT_1401c9640 == (local_30 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_30 ^ (ulonglong)auStack_58);
}

