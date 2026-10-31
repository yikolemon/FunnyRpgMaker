/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033370d */

void FUN_14033370d(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = DAT_14062a630 + 0xee8;
  lVar2 = 0;
  do {
    uVar1 = FUN_1403108a6((longlong)*(int *)((longlong)&DAT_1404ef600 + lVar2) * 0x10 + lVar3);
    *(undefined4 *)(param_1 + 0x498 + lVar2) = uVar1;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x24);
  return;
}

