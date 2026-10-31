/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10267507 */

void FUN_10267507(int param_1)

{
  double *pdVar1;
  undefined4 *puVar2;
  floating_point_parse_result fVar3;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  double *in_stack_00000028;
  floating_point_string local_314 [780];
  uint local_8;
  
  pdVar1 = in_stack_00000028;
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((in_stack_00000028 == (double *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
  }
  else {
    fVar3 = FUN_10267b6d(param_1,&stack0x00000008,local_314);
    __crt_strtox::parse_floating_point_write_result<double>(fVar3,local_314,pdVar1);
    if ((in_stack_00000020 != (undefined1 *)0x0) &&
       (in_stack_00000018 == 0 && in_stack_0000001c == 0)) {
      *in_stack_00000020 = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

