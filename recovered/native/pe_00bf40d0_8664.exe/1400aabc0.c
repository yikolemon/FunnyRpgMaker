/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400aabc0 */

ulonglong FUN_1400aabc0(ulonglong param_1,undefined8 param_2,int param_3)

{
  undefined4 in_stack_ffffffffffffffd4;
  
  if ((param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      FUN_1400a9f20(param_2,param_3,0xfff8000000000000,1,8,CONCAT44(in_stack_ffffffffffffffd4,0x21),
                    param_1,0,1);
      return 0xfff8000000000000;
    }
    param_1 = param_1 | 0x8000000000000;
  }
  return param_1;
}

