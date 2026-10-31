/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401753c3 */

undefined8 FUN_1401753c3(longlong param_1,undefined4 param_2,int param_3,ulonglong *param_4)

{
  short *psVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  psVar1 = *(short **)(param_1 + 0x4e0);
  if (((psVar1 != (short *)0x0) && (lVar2 = *(longlong *)(psVar1 + 0x40), lVar2 != 0)) &&
     (*psVar1 != 0)) {
    if (((*(int *)(psVar1 + 0xc) != 0) && (lVar3 = *(longlong *)(psVar1 + 0x10), lVar3 != 0)) &&
       (*param_4 == 0)) {
      cVar4 = FUN_140178b05(lVar3,*(int *)(psVar1 + 0xc),param_2,local_38);
      if (cVar4 != '\0') {
        if ((((ulonglong)local_34 != 0) && (local_34 <= *(uint *)(psVar1 + 0x44))) &&
           (uVar6 = lVar3 + (ulonglong)local_34, uVar6 < lVar2 + (ulonglong)*(uint *)(psVar1 + 0x44)
           )) {
          *param_4 = uVar6;
          *(bool *)(param_4 + 1) = param_3 == 0;
          uVar5 = CONCAT71((uint7)(uint3)(local_34 >> 8),1);
          goto LAB_14017541e;
        }
      }
    }
  }
  uVar5 = 0;
LAB_14017541e:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

