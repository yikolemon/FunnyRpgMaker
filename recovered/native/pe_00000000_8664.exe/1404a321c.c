/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a321c */

void FUN_1404a321c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (DAT_140661560 == -1) {
LAB_1404a32c7:
    uVar1 = FUN_1404a3398(param_1,0);
    (*(code *)s_GetUserDefaultLCID_14059e0b4._12_8_)(uVar1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    if (DAT_140661560 == 0) {
      lVar2 = FUN_1404a3748(0x12,"nstructor iterator\'",&DAT_140564be0,&DAT_140564be8);
      if (lVar2 == 0) goto LAB_1404a32c7;
    }
    FUN_1404b9600(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

