/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a4330 */

ulonglong FUN_1400a4330(undefined *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  puVar3 = FUN_14008e9d4(2);
  if (param_1 == puVar3) {
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
  }
  else {
    puVar3 = FUN_14008e9d4(1);
    if (param_1 == puVar3) {
      uVar2 = FUN_1400a5bb4((longlong)param_1);
      bVar1 = FUN_1400b03b0(uVar2);
      uVar4 = CONCAT71(extraout_var,(int)CONCAT71(extraout_var,bVar1) != 0);
    }
    else {
      uVar4 = (ulonglong)puVar3 & 0xffffffffffffff00;
    }
  }
  return uVar4;
}

