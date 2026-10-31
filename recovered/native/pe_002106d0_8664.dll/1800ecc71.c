/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ecc71 */

void FUN_1800ecc71(char *param_1)

{
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_1 == '\x02') {
    FUN_1800ecd0f(param_1);
    return;
  }
  local_20 = FUN_1800173a0(param_1);
  FUN_1800172c9(local_40,"type must be array, but is ");
  FUN_180017158(local_78,0x12e,local_40,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_78,&DAT_180391520);
}

