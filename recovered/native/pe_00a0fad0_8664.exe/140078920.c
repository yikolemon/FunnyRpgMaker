/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078920 */

char * FUN_140078920(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_a8 [56];
  undefined1 local_70 [56];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x20);
  }
  else if (cVar1 == '\x02') {
    pcVar2 = (char *)param_1[2];
  }
  else {
    if (cVar1 == '\0') {
      FUN_14000169c(local_38,"cannot get value");
      FUN_14006baa2(local_a8,0xd6,local_38,pcVar2);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_a8,&DAT_1401966c0);
    }
    if (param_1[3] != 0) {
      FUN_14000169c(local_38,"cannot get value");
      FUN_14006baa2(local_70,0xd6,local_38,pcVar2);
                    /* WARNING: Subroutine does not return */
      FUN_140106270(local_70,&DAT_1401966c0);
    }
  }
  return pcVar2;
}

