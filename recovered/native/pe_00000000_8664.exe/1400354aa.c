/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400354aa */

void FUN_1400354aa(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_3 + 0x14);
  iVar1 = iVar2 + 0x76c;
  iVar3 = -iVar1;
  if (iVar3 < 0) {
    iVar3 = iVar1;
  }
  local_20 = FUN_14001a250(local_38,iVar3,0x15);
  if (iVar2 < -0x76c) {
    *(undefined1 *)(local_20 + -1) = 0x2d;
    local_20 = local_20 + -1;
  }
  FUN_140019fc2(param_4,local_20);
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_58);
}

