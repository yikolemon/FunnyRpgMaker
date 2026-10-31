/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004337b0 */

void __fastcall FUN_004337b0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_3 + 0x18) - *(int *)(param_3 + 0x1c);
  if (iVar1 != 0) {
    for (; param_1 < param_3; param_1 = param_1 + 0x28) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x1c) + iVar1;
    }
    while (param_3 + 0x28 <= param_2) {
      *(int *)(param_3 + 0x40) = *(int *)(param_3 + 0x44) + iVar1;
      param_3 = param_3 + 0x28;
    }
  }
  return;
}

