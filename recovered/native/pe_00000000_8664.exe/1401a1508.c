/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401a1508 */

void FUN_1401a1508(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_348 [32];
  undefined1 local_328 [784];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_348;
  if ((param_3 == 0) || (param_1 == 0)) {
    puVar2 = (undefined4 *)FUN_14019e8cc();
    *puVar2 = 0x16;
    FUN_1401ae640();
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
  else {
    uVar1 = FUN_1401a15a8(param_1,param_2,local_328);
    FUN_14019b2a4(uVar1,local_328,param_3);
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = *param_2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_348);
}

