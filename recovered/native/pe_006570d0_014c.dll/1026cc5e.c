/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026cc5e */

void FUN_1026cc5e(int param_1,undefined4 param_2,undefined4 *param_3,double *param_4)

{
  double *pdVar1;
  undefined4 *puVar2;
  floating_point_parse_result fVar3;
  floating_point_string local_314 [780];
  uint local_8;
  
  pdVar1 = param_4;
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((param_4 == (double *)0x0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
  }
  else {
    fVar3 = FUN_1026ccde(param_1,&param_2,local_314);
    __crt_strtox::parse_floating_point_write_result<double>(fVar3,local_314,pdVar1);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

