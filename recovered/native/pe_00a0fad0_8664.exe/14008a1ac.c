/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008a1ac */

void FUN_14008a1ac(char *param_1,uint *param_2)

{
  undefined1 local_a0 [56];
  undefined1 local_68 [56];
  undefined1 local_30 [32];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  if (*param_1 == '\0') {
    FUN_14000169c(local_30,"FileWalker not initialized");
    FUN_14008a8da(local_a0,local_30);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_a0,&DAT_1401a5760);
  }
  if (*param_2 <= *(uint *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x28) = *param_2;
    return;
  }
  FUN_14000169c(local_30,"Seek: Attempted to seek past end of file");
  FUN_14008a8da(local_68,local_30);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_68,&DAT_1401a5760);
}

