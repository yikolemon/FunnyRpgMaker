/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10174bc5 */

void __fastcall FUN_10174bc5(int param_1)

{
  int iVar1;
  
  *(undefined1 **)(param_1 + 0x480c) = &LAB_10174cf3;
  *(undefined1 **)(param_1 + 0x4810) = &LAB_101751d8;
  *(undefined1 **)(param_1 + 0x4814) = &LAB_101752b3;
  iVar1 = FUN_1017535d();
  if (iVar1 != 0) {
    *(undefined1 **)(param_1 + 0x480c) = &LAB_10175369;
    *(undefined1 **)(param_1 + 0x4810) = &LAB_10175c57;
    *(undefined1 **)(param_1 + 0x4814) = &LAB_10175e32;
  }
  return;
}

