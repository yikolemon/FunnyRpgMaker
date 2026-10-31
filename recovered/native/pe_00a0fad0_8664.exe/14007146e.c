/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007146e */

void FUN_14007146e(undefined8 param_1,char *param_2,char *param_3)

{
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*param_2 == '\x04') {
    *param_3 = param_2[8];
    return;
  }
  local_20 = FUN_14006c034(param_2);
  FUN_14006bf5d(local_40,"type must be boolean, but is ");
  FUN_14006bdec(local_78,0x12e,local_40,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_78,&DAT_140196700);
}

