/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c6a29 */

void FUN_1400c6a29(undefined8 param_1,byte *param_2)

{
  char cVar1;
  
  cVar1 = FUN_1400b2126(param_1,*param_2);
  if (cVar1 != '\0') {
    *param_2 = *param_2 ^ 1;
  }
  return;
}

