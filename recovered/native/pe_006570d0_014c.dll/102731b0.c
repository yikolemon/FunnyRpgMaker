/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102731b0 */

void FUN_102731b0(EHExceptionRecord *param_1,EHRegistrationNode *param_2,undefined4 param_3,
                 undefined4 param_4,int param_5,int param_6,undefined4 param_7,
                 EHRegistrationNode *param_8)

{
  PVOID pvVar1;
  int iVar2;
  PVOID pvVar3;
  EHRegistrationNode *pEVar4;
  void *pvVar5;
  uint uVar6;
  int *local_30;
  uint local_2c;
  uint local_24;
  int local_20 [2];
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    iVar2 = FUN_10272260();
    if (*(int *)(iVar2 + 8) != 0) {
      iVar2 = FUN_10272260();
      pvVar1 = *(PVOID *)(iVar2 + 8);
      pvVar3 = EncodePointer((PVOID)0x0);
      if ((((pvVar1 != pvVar3) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar2 = FUN_10258b50(param_1,param_2,param_3,param_4,param_5,param_7,param_8), iVar2 != 0)
         ) {
        return;
      }
    }
    local_20[0] = param_5;
    local_20[1] = 0;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    FUN_102589b0(&local_30,local_20,param_6,param_4,param_5,param_7);
    local_18 = local_30;
    uVar6 = local_2c;
    if (local_2c < local_24) {
      do {
        iVar2 = *(int *)(*local_18 + 0x10);
        local_8 = *(int *)(iVar2 + uVar6 * 0x14);
        local_c = *(int *)(iVar2 + 4 + uVar6 * 0x14);
        local_14 = *(int *)(iVar2 + 0x10 + uVar6 * 0x14);
        if ((local_8 <= param_6) && (param_6 <= local_c)) {
          local_10 = *(int *)(iVar2 + 0xc + uVar6 * 0x14) * 0x10;
          iVar2 = *(int *)(local_10 + -0xc + local_14);
          if (((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) &&
             ((*(byte *)(local_10 + -0x10 + local_14) & 0x40) == 0)) {
            pEVar4 = param_2;
            if (param_8 != (EHRegistrationNode *)0x0) {
              pEVar4 = param_8;
            }
            _UnwindNestedFrames(pEVar4,param_1);
            FUN_10272460(param_2,param_4,param_5,local_8);
            FUN_10283410(param_2,param_4,param_5,local_c + 1);
            pvVar5 = (void *)FUN_102725e0(param_1,param_2,param_3,param_5,
                                          *(undefined4 *)(local_10 + -4 + local_14),param_7,0x100);
            if (pvVar5 != (void *)0x0) {
              _JumpToContinuation(pvVar5,param_2);
            }
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_24);
    }
  }
  return;
}

