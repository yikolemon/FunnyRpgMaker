/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007a1bc */

undefined8 FUN_14007a1bc(undefined8 *param_1)

{
  char *pcVar1;
  undefined1 local_70 [56];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x01') {
    return param_1[1];
  }
  FUN_14000169c(local_38,"cannot use key() for non-object iterators");
  FUN_14006baa2(local_70,0xcf,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_70,&DAT_1401966c0);
}

