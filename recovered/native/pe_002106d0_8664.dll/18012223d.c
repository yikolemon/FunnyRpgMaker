/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012223d */

void FUN_18012223d(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = DAT_180419160 + 0xee8;
  lVar2 = 0;
  do {
    uVar1 = FUN_1800ff3d6((longlong)*(int *)((longlong)&DAT_1802de130 + lVar2) * 0x10 + lVar3);
    *(undefined4 *)(param_1 + 0x498 + lVar2) = uVar1;
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x24);
  return;
}

