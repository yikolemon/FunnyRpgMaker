/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130294 */

ulonglong FUN_140130294(undefined8 param_1,int param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  iVar2 = FUN_14012d9e0(param_1,&local_34);
  uVar4 = (ulonglong)local_34;
  if (local_34 != 0) goto LAB_14013038d;
  if (iVar2 == param_2) {
    FUN_14012d9e0(param_1,&local_34);
    uVar4 = (ulonglong)local_34;
    if ((local_34 != 0) || (uVar4 = FUN_14012d664(param_1,0x10), (int)uVar4 != 0))
    goto LAB_14013038d;
    uVar1 = FUN_14012d676(param_1,&local_34);
    uVar4 = (ulonglong)local_34;
    if (local_34 != 0) goto LAB_14013038d;
    if (uVar1 != 0) {
      uVar5 = (uint)uVar1;
      do {
        iVar2 = FUN_14012d9e0(param_1,&local_34);
        uVar4 = (ulonglong)local_34;
        if (local_34 != 0) goto LAB_14013038d;
        if (iVar2 == 2) {
          uVar3 = FUN_14012d9e0(param_1,&local_34);
          if ((local_34 == 0) && (FUN_14012d9e0(param_1,&local_34), local_34 == 0)) {
            *param_3 = uVar3;
            uVar4 = 0;
            goto LAB_14013038d;
          }
        }
        else {
          uVar4 = FUN_14012d664(param_1,8);
          local_34 = (uint)uVar4;
          if (local_34 != 0) goto LAB_14013038d;
        }
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  uVar4 = 2;
LAB_14013038d:
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
  }
  return uVar4;
}

