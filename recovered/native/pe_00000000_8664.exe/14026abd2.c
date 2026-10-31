/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026abd2 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 * FUN_14026abd2(undefined8 *param_1,undefined1 param_2)

{
  undefined1 *unaff_RDI;
  
  switch(param_2) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
  case 3:
  case 5:
  case 7:
    *unaff_RDI = *(undefined1 *)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 8:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *param_1 = 0;
    return param_1;
  }
}

