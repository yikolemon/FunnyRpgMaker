/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000a085 */

void Unwind_14000a085(void)

{
  undefined8 *puVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  
  *(int *)(in_RAX + 0x20) = (int)unaff_RSI;
  FUN_1401905b0(in_RAX + 0x28);
  puVar1 = *(undefined8 **)(unaff_RBP + -8);
  *puVar1 = unaff_RSI;
  FUN_1401905b0(puVar1 + 1);
  return;
}

