/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129502 */

int FUN_140129502(undefined8 *param_1,uint *param_2,longlong *param_3)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  *param_3 = 0;
  if (param_1 == (undefined8 *)0x0) {
    iVar2 = 0x21;
    goto LAB_1401295f8;
  }
  iVar2 = 6;
  if (param_2 == (uint *)0x0) goto LAB_1401295f8;
  uVar1 = *param_1;
  uVar4 = *param_2 & 7;
  if (uVar4 == 4) {
    lVar3 = FUN_140128a1f(uVar1,0x48,&local_34);
    iVar2 = local_34;
    if (local_34 != 0) goto LAB_1401295f8;
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
    iVar2 = FUN_140131184(lVar3,*(undefined8 *)(param_2 + 6));
    if (iVar2 != 0) {
      FUN_140128b39(uVar1,lVar3);
      goto LAB_1401295f8;
    }
  }
  else {
    if (uVar4 == 2) {
      lVar3 = *(longlong *)(param_2 + 8);
      if (lVar3 == 0) goto LAB_1401295a5;
    }
    else {
      if (uVar4 != 1) {
LAB_1401295a5:
        if (((*param_2 & 2) != 0) && (*(longlong *)(param_2 + 8) != 0)) {
          FUN_140129646();
        }
        goto LAB_1401295f8;
      }
      lVar3 = FUN_140128a1f(uVar1,0x48,&local_34);
      iVar2 = local_34;
      if (local_34 != 0) goto LAB_1401295f8;
      FUN_140129628(lVar3,*(undefined8 *)(param_2 + 2),param_2[4]);
    }
    *(undefined8 *)(lVar3 + 0x30) = uVar1;
  }
  *param_3 = lVar3;
  iVar2 = 0;
LAB_1401295f8:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

