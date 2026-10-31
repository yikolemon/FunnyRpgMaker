/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000e3e0 */

bool FUN_14000e3e0(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  bool bVar2;
  undefined1 local_70 [56];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  pcVar1 = (char *)*param_1;
  if (pcVar1 == (char *)*param_2) {
    if (pcVar1 == (char *)0x0) {
      bVar2 = true;
    }
    else if (*pcVar1 == '\x02') {
      bVar2 = param_1[2] == param_2[2];
    }
    else if (*pcVar1 == '\x01') {
      bVar2 = param_1[1] == param_2[1];
    }
    else {
      bVar2 = param_1[3] == param_2[3];
    }
    return bVar2;
  }
  FUN_1400027d2(local_38,"cannot compare iterators of different containers");
  FUN_14000e4a8(local_70,0xd4,local_38,pcVar1);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_70,&DAT_140ee3af0);
}

