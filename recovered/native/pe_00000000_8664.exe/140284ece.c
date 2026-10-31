/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140284ece */

longlong * FUN_140284ece(longlong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_1404c9678;
    param_1[2] = (longlong)&DAT_1404c9680;
    FUN_140285080(param_1 + 0x17);
  }
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404c9690;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb8;
  FUN_140285108(param_1,param_1 + 3,0);
  *(undefined **)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4)) = &DAT_1404c9690;
  *(int *)((longlong)param_1 + (longlong)*(int *)(*param_1 + 4) + -4) =
       *(int *)(*param_1 + 4) + -0xb8;
  FUN_140285222(param_1 + 3);
  return param_1;
}

