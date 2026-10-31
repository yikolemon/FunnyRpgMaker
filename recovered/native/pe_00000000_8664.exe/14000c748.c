/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000c748 */

undefined8 Unwind_14000c748(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  if ((*(char *)(unaff_RBP + -9) == '\x01') &&
     (*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + -8) != 0)) {
    FUN_14000d704(unaff_RBP + -0x30,unaff_RSI + 0xb8);
    FUN_14000f108(*(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RSI + 0x10) + -8) + 8),
                  unaff_RBP + -0x40);
    uVar1 = FUN_14000a108(*(longlong *)(unaff_RBP + -0x40) + 0x40,unaff_RBP + -0x30);
    *(undefined8 *)(unaff_RSI + 0x60) = uVar1;
  }
  FUN_140004b06(unaff_RBP + -0x20);
  return 1;
}

