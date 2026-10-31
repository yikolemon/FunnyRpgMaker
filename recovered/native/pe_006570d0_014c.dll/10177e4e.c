/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10177e4e */

void __fastcall FUN_10177e4e(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x47c0) = 0;
  *(undefined4 *)(param_1 + 0x47bc) = 0;
  *(undefined4 *)(param_1 + 0x47c8) = 0;
  *(undefined4 *)(param_1 + 0x478c) = 0;
  *(undefined4 *)(param_1 + 0x4744) = 0;
  *(undefined4 *)(param_1 + 0x46fc) = 0;
  *(undefined4 *)(param_1 + 0x46b4) = 0;
  *(undefined1 *)(param_1 + 0x47c4) = 0xff;
  iVar1 = 0x7fffffff;
  if (*(int *)(param_1 + 0x4804) != 0) {
    iVar1 = *(int *)(param_1 + 0x4804);
  }
  *(int *)(param_1 + 0x4808) = iVar1;
  *(undefined4 *)(param_1 + 0x47e0) = 0;
  return;
}

