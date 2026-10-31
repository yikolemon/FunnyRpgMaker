/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003f856 */

void FUN_18003f856(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_3 + 0x14);
  iVar1 = iVar2 + 0x76c;
  iVar3 = -iVar1;
  if (iVar3 < 0) {
    iVar3 = iVar1;
  }
  local_20 = FUN_180024c02(local_38,iVar3,0x15);
  if (iVar2 < -0x76c) {
    *(undefined1 *)(local_20 + -1) = 0x2d;
    local_20 = local_20 + -1;
  }
  FUN_180018bde(param_4,local_20);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_58);
}

