/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016f3a3 */

int FUN_14016f3a3(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar4 = *(uint *)(param_1 + 4) >> 3;
  uVar3 = param_2 + 7U >> 3;
  local_24 = 0;
  iVar1 = 0;
  if (uVar4 < uVar3) {
    uVar3 = uVar3 + 7 & 0xfffffff8;
    local_38 = *(undefined8 *)(param_1 + 8);
    local_30 = &local_24;
    uVar2 = FUN_140128c13(param_3,1,uVar4,uVar3);
    *(undefined8 *)(param_1 + 8) = uVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 4) = uVar3 << 3;
      iVar1 = 0;
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

