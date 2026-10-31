/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180052ed0 */

char * FUN_180052ed0(undefined8 *param_1)

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
    pcVar1 = (char *)(param_1[1] + 0x40);
  }
  else if (param_1[3] != 0) {
    FUN_180001e92(local_38,"cannot get value");
    FUN_180053314(local_70,0xd6,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_70,&DAT_180391600);
  }
  return pcVar1;
}

