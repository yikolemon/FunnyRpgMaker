/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a3310 */

void FUN_1404a3310(undefined4 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  if (DAT_140661568 == -1) {
LAB_1404a3375:
    FUN_1404b4a84(param_1,param_2,param_3);
  }
  else {
    if (DAT_140661568 == 0) {
      lVar1 = FUN_1404a3748(0x13,L"es-mx",&DAT_140564be8,&DAT_140564bf0);
      if (lVar1 == 0) goto LAB_1404a3375;
    }
    FUN_1404b9600(param_1,param_2,param_3,param_4);
  }
  return;
}

