/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140e8b880 */

/* WARNING: Control flow encountered bad instruction data */

void Unwind_140e8b880(undefined8 param_1,char param_2)

{
  byte *in_RAX;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  byte *unaff_RSI;
  bool in_CF;
  bool in_PF;
  
  if (in_CF) {
    *unaff_RSI = *unaff_RSI & unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!in_PF) {
    *in_RAX = *in_RAX & (byte)in_RAX;
  }
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

