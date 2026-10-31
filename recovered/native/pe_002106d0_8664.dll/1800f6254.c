/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6254 */

void FUN_1800f6254(longlong *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    FUN_1800037a9(1);
  }
  else if ((char)param_1[1] != '\x01') {
    return;
  }
  FUN_1800037a9(0x24);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

