/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1409e840f */

/* WARNING: Control flow encountered bad instruction data */

void Unwind_1409e840f(undefined8 param_1,undefined2 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  longlong unaff_RBX;
  undefined4 *unaff_RSI;
  undefined1 *unaff_RDI;
  bool in_CF;
  undefined2 in_stack_00000008;
  
  uVar2 = *(uint *)(unaff_RBX + 0x6f);
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  out(*unaff_RSI,param_2);
  if (!in_CF) {
    out(unaff_RSI[1],in_stack_00000008);
    out(*(undefined1 *)(unaff_RSI + 2),in_stack_00000008);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

