/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140073317 */

undefined8 FUN_140073317(longlong param_1,uint param_2,int param_3,ulonglong *param_4)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  ushort local_38 [2];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  psVar1 = *(short **)(param_1 + 0x4e0);
  if (((((psVar1 != (short *)0x0) && (lVar2 = *(longlong *)(psVar1 + 0x40), lVar2 != 0)) &&
       (*psVar1 != 0)) &&
      ((*(uint *)(psVar1 + 0xc) != 0 && (lVar3 = *(longlong *)(psVar1 + 0x10), lVar3 != 0)))) &&
     (*param_4 == 0)) {
    uVar4 = FUN_140076a59(lVar3,*(uint *)(psVar1 + 0xc),param_2,local_38);
    if ((char)uVar4 != '\0') {
      if ((((ulonglong)local_34 != 0) && (local_34 <= *(uint *)(psVar1 + 0x44))) &&
         (uVar5 = lVar3 + (ulonglong)local_34, uVar5 < lVar2 + (ulonglong)*(uint *)(psVar1 + 0x44)))
      {
        *param_4 = uVar5;
        *(bool *)(param_4 + 1) = param_3 == 0;
        uVar4 = CONCAT71((uint7)(uint3)(local_34 >> 8),1);
        goto LAB_140073372;
      }
    }
  }
  uVar4 = 0;
LAB_140073372:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

