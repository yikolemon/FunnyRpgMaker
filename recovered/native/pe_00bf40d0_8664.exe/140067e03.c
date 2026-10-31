/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140067e03 */

void FUN_140067e03(longlong param_1,longlong param_2,longlong *param_3,int *param_4,char *param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  int local_58;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  uVar3 = FUN_140067f2a(param_2);
  uVar4 = (uint)uVar3;
  if ((((byte)uVar3 & *(char *)(param_1 + 0xc) == '\0') == 1) && (*param_5 == '\0')) {
    iVar1 = FUN_140067f37(param_2,0);
    iVar2 = FUN_1400679af(*(longlong *)(param_1 + 0xf0));
    *param_4 = iVar2 + iVar1;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x340) == '\0') {
    if (1 < uVar4) {
      uVar5 = uVar4 & 1;
      do {
        iVar1 = FUN_140067f37(param_2,uVar5);
        local_58 = iVar1 + param_6;
        iVar2 = FUN_140067f37(param_2,uVar5 + 1);
        param_6 = iVar2 + iVar1 + param_6;
        local_5c[0] = 0;
        local_50 = 0;
        local_54 = param_6;
        FUN_140069279(param_3,(undefined8 *)local_5c);
        uVar5 = uVar5 + 2;
      } while (uVar5 < uVar4);
    }
    FUN_140067cb3(param_2);
  }
  *param_5 = '\x01';
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_88);
}

