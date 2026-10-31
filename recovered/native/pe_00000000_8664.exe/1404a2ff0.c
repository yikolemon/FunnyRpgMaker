/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2ff0 */

void FUN_1404a2ff0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (DAT_140661520 == -1) {
LAB_1404a3055:
    uVar1 = FUN_1404a3398(param_1,0);
    (*(code *)s_GetModuleHandleExW_14059df76._2_8_)(uVar1,param_2,param_3,param_4);
  }
  else {
    if (DAT_140661520 == 0) {
      lVar2 = FUN_1404a3748(10,"or vbase copy constructor iterator\'",&DAT_140564bc0,&DAT_140564bc8)
      ;
      if (lVar2 == 0) goto LAB_1404a3055;
    }
    FUN_1404b9600(param_1,param_2,param_3,param_4);
  }
  return;
}

