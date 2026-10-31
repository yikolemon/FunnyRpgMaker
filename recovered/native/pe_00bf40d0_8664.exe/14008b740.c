/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b740 */

ulonglong FUN_14008b740(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  ulonglong uVar3;
  uint7 extraout_var;
  
  if (param_1 == 0) {
    DAT_14013d278 = 1;
  }
  FUN_14008bfe0();
  uVar1 = FUN_14008dc30();
  uVar3 = CONCAT44(extraout_var_00,uVar1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_14008e988();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    FUN_14008dc60('\0');
    uVar3 = (ulonglong)extraout_var << 8;
  }
  return uVar3 & 0xffffffffffffff00;
}

