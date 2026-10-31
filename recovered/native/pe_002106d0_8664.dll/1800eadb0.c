/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eadb0 */

void FUN_1800eadb0(char *param_1)

{
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if ((*param_1 == '\x01') && (*(longlong *)(param_1 + 8) != 0)) {
    return;
  }
  local_20 = FUN_18008843c(param_1);
  FUN_1800172c9(local_40,"incompatible ReferenceType for get_ref, actual type is ");
  FUN_180017158(local_78,0x12f,local_40,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_78,&DAT_180391520);
}

