/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009ba00 */

double FUN_14009ba00(double param_1)

{
  double dVar1;
  undefined4 in_stack_ffffffffffffffd4;
  
  if (((ulonglong)param_1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar1 = (double)FUN_1400a9f00((ulonglong)param_1);
      return dVar1;
    }
    if ((longlong)param_1 < 0) goto LAB_14009ba48;
  }
  if (-1 < (longlong)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_14009ba48:
  dVar1 = (double)FUN_1400a9f20(&DAT_14011c554,5,0xfff8000000000000,1,8,
                                CONCAT44(in_stack_ffffffffffffffd4,0x21),param_1,0,1);
  return dVar1;
}

