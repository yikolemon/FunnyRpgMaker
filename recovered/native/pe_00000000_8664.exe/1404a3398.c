/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a3398 */

void FUN_1404a3398(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (DAT_140661570 == -1) {
LAB_1404a33e7:
    FUN_1404b49dc(param_1);
  }
  else {
    if (DAT_140661570 == 0) {
      lVar1 = FUN_1404a3748(0x14,L"es-pr",&DAT_140564bf0,&DAT_140564bf8);
      if (lVar1 == 0) goto LAB_1404a33e7;
    }
    FUN_1404b9600(param_1,param_2);
  }
  return;
}

