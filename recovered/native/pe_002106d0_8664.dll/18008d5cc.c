/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008d5cc */

longlong FUN_18008d5cc(char *param_1,longlong param_2)

{
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_1 == '\x02') {
    return param_2 * 0x10 + **(longlong **)(param_1 + 8);
  }
  local_20 = FUN_18008843c(param_1);
  FUN_1800172c9(local_40,"cannot use operator[] with a numeric argument with ");
  FUN_180017158(local_78,0x131,local_40,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_78,&DAT_180391520);
}

