/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000d7d0 */

char * FUN_14000d7d0(undefined8 *param_1)

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
    FUN_1400027d2(local_38,"cannot get value");
    FUN_14000e4a8(local_70,0xd6,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
    FUN_14018f0a0(local_70,&DAT_140ee3af0);
  }
  return pcVar1;
}

