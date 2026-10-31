/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008d8c6 */

char * FUN_18008d8c6(undefined8 *param_1)

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
      FUN_180001e92(local_38,"cannot get value");
      FUN_180053314(local_a8,0xd6,local_38,pcVar2);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_a8,&DAT_180391600);
    }
    if (param_1[3] != 0) {
      FUN_180001e92(local_38,"cannot get value");
      FUN_180053314(local_70,0xd6,local_38,pcVar2);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(local_70,&DAT_180391600);
    }
  }
  return pcVar2;
}

