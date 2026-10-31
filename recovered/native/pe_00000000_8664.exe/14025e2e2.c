/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14025e2e2 */

undefined8 switchD_140224c0d::caseD_1(void)

{
  longlong *plVar1;
  longlong unaff_RBP;
  
  plVar1 = (longlong *)((longlong *)(ulonglong)*(uint *)(unaff_RBP + -0x10))[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))
              (plVar1,plVar1 != (longlong *)(ulonglong)*(uint *)(unaff_RBP + -0x10));
  }
  return *(undefined8 *)(unaff_RBP + -8);
}

