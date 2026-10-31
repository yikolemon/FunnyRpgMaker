/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140045912 */

void FUN_140045912(longlong *param_1)

{
  code *pcVar1;
  
  if (*param_1 == 0) {
    FUN_140003cbf(1);
  }
  else if ((char)param_1[1] != '\x01') {
    return;
  }
  FUN_140003cbf(0x24);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

