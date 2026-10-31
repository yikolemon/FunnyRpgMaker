/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140016e15 */

undefined8 FUN_140016e15(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  uVar1 = FUN_14018a990();
  FUN_140016e8f(param_1,uVar1,&local_28);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

