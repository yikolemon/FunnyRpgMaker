/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14033dbb4 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_14033dbb4(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
}

