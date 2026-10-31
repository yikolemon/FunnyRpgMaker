/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101bdf76 */

void FUN_101bdf76(void)

{
  int iVar1;
  
  iVar1 = FUN_1010331e();
  *(code **)(iVar1 + 0x88) = FUN_101be007;
  *(code **)(iVar1 + 0x8c) = FUN_101be0cf;
  *(undefined1 **)(iVar1 + 0x90) = &LAB_101be10d;
  *(undefined1 **)(iVar1 + 0x94) = &LAB_101be185;
  *(undefined1 **)(iVar1 + 0x98) = &LAB_101be29d;
  return;
}

