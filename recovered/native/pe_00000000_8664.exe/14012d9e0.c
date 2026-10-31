/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012d9e0 */

uint FUN_14012d9e0(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0x55;
  uVar3 = 0;
  if (*(uint *)(param_1 + 1) <= uVar2 + 3) goto LAB_14012da53;
  if ((code *)param_1[4] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar5 = (uint *)(*param_1 + (ulonglong)uVar2);
      goto LAB_14012da42;
    }
    uVar3 = 0;
  }
  else {
    puVar5 = &local_34;
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,puVar5,4);
    uVar3 = 0;
    if (iVar1 != 4) goto LAB_14012da53;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
LAB_14012da42:
    uVar3 = *puVar5;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar2 + 4;
  uVar4 = 0;
LAB_14012da53:
  *param_2 = uVar4;
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

