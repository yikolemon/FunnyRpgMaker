/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a8248 */

void Unwind_100a8248(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 0x1c);
  for (puVar2 = *(undefined4 **)(unaff_EBP + -0x14); puVar2 != puVar1; puVar2 = puVar2 + 0x21) {
    (**(code **)*puVar2)(0);
  }
  return;
}

