/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400787be */

undefined8 FUN_1400787be(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_30 = (char *)*param_1;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0x8000000000000000;
  cVar1 = *local_30;
  if (cVar1 == '\0') {
    local_18 = 1;
  }
  else if (cVar1 == '\x02') {
    uStack_20 = **(undefined8 **)(local_30 + 8);
  }
  else if (cVar1 == '\x01') {
    local_28 = **(undefined8 **)(local_30 + 8);
  }
  else {
    local_18 = 0;
  }
  FUN_14007a02c(param_2,&local_30,0);
  if (DAT_1401c9640 == (local_10 ^ (ulonglong)auStack_58)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_10 ^ (ulonglong)auStack_58);
}

