/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140071780 */

void FUN_140071780(char *param_1)

{
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if ((*param_1 == '\x03') && (*(longlong *)(param_1 + 8) != 0)) {
    return;
  }
  local_20 = FUN_14006c034(param_1);
  FUN_14006bf5d(local_40,"incompatible ReferenceType for get_ref, actual type is ");
  FUN_14006bdec(local_78,0x12f,local_40,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_78,&DAT_140196700);
}

