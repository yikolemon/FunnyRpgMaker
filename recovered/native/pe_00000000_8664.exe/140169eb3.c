/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169eb3 */

void FUN_140169eb3(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,char *param_5
                  ,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  int local_58;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar1 = FUN_140169fda(param_2);
  if ((((byte)uVar1 & *(char *)(param_1 + 0xc) == '\0') == 1) && (*param_5 == '\0')) {
    iVar2 = FUN_140169fe7(param_2,0);
    iVar3 = FUN_140169a5f(*(undefined8 *)(param_1 + 0xf0));
    *param_4 = iVar3 + iVar2;
  }
  if (*(char *)(*(longlong *)(param_1 + 0xf0) + 0x340) == '\0') {
    if (1 < uVar1) {
      uVar4 = uVar1 & 1;
      do {
        iVar2 = FUN_140169fe7(param_2,uVar4);
        local_58 = iVar2 + param_6;
        iVar3 = FUN_140169fe7(param_2,uVar4 + 1);
        param_6 = iVar3 + iVar2 + param_6;
        local_5c[0] = 0;
        local_50 = 0;
        local_54 = param_6;
        FUN_14016b329(param_3,local_5c);
        uVar4 = uVar4 + 2;
      } while (uVar4 < uVar1);
    }
    FUN_140169d63(param_2);
  }
  *param_5 = '\x01';
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
}

