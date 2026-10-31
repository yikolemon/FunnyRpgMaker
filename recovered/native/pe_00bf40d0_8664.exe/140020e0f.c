/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140020e0f */

uint FUN_140020e0f(longlong *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar4 = 0x55;
  uVar3 = 0;
  if (*(uint *)(param_1 + 1) <= uVar2 + 3) goto LAB_140020e82;
  if ((code *)param_1[4] == (code *)0x0) {
    if (*param_1 != 0) {
      puVar5 = (uint *)(*param_1 + (ulonglong)uVar2);
      goto LAB_140020e71;
    }
    uVar3 = 0;
  }
  else {
    puVar5 = &local_34;
    iVar1 = (*(code *)param_1[4])(param_1,(ulonglong)uVar2,puVar5,4);
    uVar3 = 0;
    if (iVar1 != 4) goto LAB_140020e82;
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
LAB_140020e71:
    uVar3 = *puVar5;
    uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar2 + 4;
  uVar4 = 0;
LAB_140020e82:
  *param_2 = uVar4;
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

