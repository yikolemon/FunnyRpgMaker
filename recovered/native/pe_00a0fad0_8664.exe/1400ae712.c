/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ae712 */

undefined8 FUN_1400ae712(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DAT_1401cc988;
  lVar3 = DAT_1401cc980;
  if (DAT_1401cc980 == DAT_1401cc988) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = FUN_14001014c(param_1,lVar3);
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar1);
  }
  return uVar2;
}

