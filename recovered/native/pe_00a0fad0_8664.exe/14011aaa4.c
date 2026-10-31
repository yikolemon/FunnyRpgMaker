/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14011aaa4 */

void FUN_14011aaa4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_1401c9640 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_140113dd4();
    *puVar2 = 0x16;
    FUN_140120ee8();
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
  else {
    uVar1 = FUN_14011abe4(param_1,param_2,local_328);
    FUN_14011b0a8(uVar1,local_328,param_3);
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_18 ^ (ulonglong)auStack_348);
}

