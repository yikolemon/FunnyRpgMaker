/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a65aa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407a65aa(ulonglong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint unaff_ESI;
  
  uVar1 = *(uint *)((ulonglong)_DAT_150b43d01 + 0x2364);
  uVar2 = 0;
  if ((uVar1 <= unaff_ESI) &&
     (uVar2 = 0, param_2 < uVar1 + *(int *)((ulonglong)_DAT_150b43d01 + 0x235c) * 0xa4)) {
    uVar2 = ((int)(unaff_ESI - uVar1) >> 2) * -0x3e7063e7;
    param_2 = 0;
  }
  *(uint *)(param_1 & 0xffffffff) = param_2;
  ((uint *)(param_1 & 0xffffffff))[1] = uVar2;
  return;
}

