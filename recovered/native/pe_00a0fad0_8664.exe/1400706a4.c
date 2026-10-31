/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400706a4 */

longlong FUN_1400706a4(char *param_1,longlong param_2)

{
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_1 == '\x02') {
    return param_2 * 0x10 + **(longlong **)(param_1 + 8);
  }
  local_20 = FUN_14006c034(param_1);
  FUN_14006bf5d(local_40,"cannot use operator[] with a numeric argument with ");
  FUN_14006bdec(local_78,0x131,local_40,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_78,&DAT_140196700);
}

