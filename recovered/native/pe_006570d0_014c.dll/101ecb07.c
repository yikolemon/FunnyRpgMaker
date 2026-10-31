/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101ecb07 */

void __fastcall FUN_101ecb07(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x10;
  iVar3 = 0x84;
  if (0xfffffffc < param_2 - 4U) {
    iVar1 = *(int *)(param_1 + 400 + param_2 * 8);
    if (iVar1 == 0) {
      iVar3 = 0x8a;
    }
    else {
      iVar3 = 0x83;
      if (param_3 <= *(int *)(param_1 + 0x194 + param_2 * 8)) {
        *(int *)(param_1 + 0x13c) = iVar1;
        *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 0x194 + param_2 * 8);
        *(int *)(param_1 + 0x140) = param_3;
        *(undefined4 *)(param_1 + 0x14c) = 0;
        iVar2 = 0x138;
        iVar3 = param_2;
      }
    }
  }
  *(int *)(param_1 + iVar2) = iVar3;
  return;
}

