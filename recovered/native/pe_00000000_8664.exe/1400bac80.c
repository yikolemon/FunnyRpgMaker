/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bac80 */

char * FUN_1400bac80(char *param_1)

{
  uint uVar1;
  char cVar2;
  
  if (*param_1 == '%') {
    cVar2 = '%';
    do {
      param_1 = param_1 + 1;
      if ((byte)(cVar2 + 0xbfU) < 0x1a) {
        uVar1 = 0x900 >> ((byte)(cVar2 - 1) & 0x1f);
joined_r0x0001400baccc:
        if ((uVar1 & 1) == 0) {
          return param_1;
        }
      }
      else if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        uVar1 = 0x2480a80 >> ((byte)(cVar2 - 1) & 0x1f);
        goto joined_r0x0001400baccc;
      }
      cVar2 = *param_1;
    } while (cVar2 != '\0');
  }
  return param_1;
}

