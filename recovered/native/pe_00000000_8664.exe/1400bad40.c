/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bad40 */

void FUN_1400bad40(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = (byte *)FUN_1400bac80();
  if (param_1 < pbVar1) {
    do {
      uVar2 = *param_1 - 0x24;
      if ((0x3b < uVar2) || ((0x800000000000009U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) {
        *param_2 = *param_1;
        param_2 = param_2 + 1;
      }
      param_1 = param_1 + 1;
    } while (param_1 != pbVar1);
  }
  *param_2 = 0;
  return;
}

