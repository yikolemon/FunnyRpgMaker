/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180283228 */

void FUN_180283228(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_18027e66c();
    *puVar2 = 0x16;
    FUN_180290a50();
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
  else {
    uVar1 = FUN_180283368(param_1,param_2,local_328);
    FUN_18027c82c(uVar1,local_328,param_3);
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_348);
}

