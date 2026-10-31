/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006b064 */

char * FUN_14006b064(undefined8 *param_1)

{
  char *pcVar1;
  undefined1 local_70 [56];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pcVar1 = (char *)*param_1;
  if (*pcVar1 == '\x02') {
    pcVar1 = (char *)param_1[2];
  }
  else if (*pcVar1 == '\x01') {
    pcVar1 = (char *)(param_1[1] + 0x20);
  }
  else if (param_1[3] != 0) {
    FUN_14000169c(local_38,"cannot get value");
    FUN_14006baa2(local_70,0xd6,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_70,&DAT_1401966c0);
  }
  return pcVar1;
}

