/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14027c2a7 */

undefined8 FUN_14027c2a7(undefined8 param_1,longlong param_2,char *param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  sVar2 = strlen(param_3);
  if (sVar2 <= (uVar1 ^ 0x7fffffffffffffff)) {
    FUN_140227160(param_1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140212875();
}

