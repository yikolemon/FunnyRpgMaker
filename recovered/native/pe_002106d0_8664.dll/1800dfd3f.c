/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800dfd3f */

char * thunk_FUN_1800e04aa(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_a8 [56];
  undefined1 auStack_70 [56];
  undefined1 auStack_38 [32];
  undefined8 uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    pcVar2 = (char *)(param_1[1] + 0x40);
  }
  else if (cVar1 == '\x02') {
    pcVar2 = (char *)param_1[2];
  }
  else {
    if (cVar1 == '\0') {
      FUN_180001e92(auStack_38,"cannot get value");
      FUN_180053314(auStack_a8,0xd6,auStack_38,pcVar2);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(auStack_a8,&DAT_180391600);
    }
    if (param_1[3] != 0) {
      FUN_180001e92(auStack_38,"cannot get value");
      FUN_180053314(auStack_70,0xd6,auStack_38,pcVar2);
                    /* WARNING: Subroutine does not return */
      FUN_18026d5b0(auStack_70,&DAT_180391600);
    }
  }
  return pcVar2;
}

