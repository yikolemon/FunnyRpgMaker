/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000e0ec */

longlong Unwind_14000e0ec(ulonglong param_1,uint param_2,longlong param_3)

{
  longlong unaff_RBP;
  undefined8 unaff_RSI;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    *(longlong *)(unaff_RBP + -0x10) = param_3;
    *(undefined8 *)(unaff_RBP + -0x18) = unaff_RSI;
    FUN_14000d704(param_3,param_1);
    param_3 = param_3 + 0x10;
  }
  *(longlong *)(unaff_RBP + -0x10) = param_3;
  *(longlong *)(unaff_RBP + -0x18) = param_3;
  return param_3;
}

