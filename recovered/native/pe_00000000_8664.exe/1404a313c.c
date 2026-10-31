/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a313c */

void FUN_1404a313c(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (DAT_140661540 == -1) {
LAB_1404a318b:
    uVar1 = (*(code *)s_GetSystemInfo_14059e018._0_8_)();
    FUN_1404a3310(uVar1,param_1,param_2,0);
  }
  else {
    if (DAT_140661540 == 0) {
      lVar2 = FUN_1404a3748(0xe,L"ay",&DAT_140564bd0,&DAT_140564bd8);
      if (lVar2 == 0) goto LAB_1404a318b;
    }
    FUN_1404b9600(param_1,param_2);
  }
  return;
}

