/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00495470 */

void __cdecl
FUN_00495470(EHExceptionRecord *param_1,EHRegistrationNode *param_2,undefined4 param_3,void *param_4
            ,_s_FuncInfo *param_5,int param_6,int param_7,EHRegistrationNode *param_8)

{
  PVOID pvVar1;
  PVOID pvVar2;
  int iVar3;
  EHRegistrationNode *pEVar4;
  void *pvVar5;
  uint uVar6;
  int *local_30;
  uint local_2c;
  uint local_24;
  _s_FuncInfo *local_20;
  undefined4 local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)param_1 != -0x7ffffffd) {
    pvVar1 = FUN_00494580();
    if (*(int *)((int)pvVar1 + 8) != 0) {
      pvVar1 = FUN_00494580();
      pvVar1 = *(PVOID *)((int)pvVar1 + 8);
      pvVar2 = EncodePointer((PVOID)0x0);
      if ((((pvVar1 != pvVar2) && (*(int *)param_1 != -0x1fbcb0b3)) &&
          (*(int *)param_1 != -0x1fbcbcae)) &&
         (iVar3 = FUN_00485210((int *)param_1,(undefined4 *)param_2,param_3,param_4,param_5,param_7,
                               param_8), iVar3 != 0)) {
        return;
      }
    }
    local_20 = param_5;
    local_1c = 0;
    if (param_5->nTryBlocks == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_004903c8();
    }
    FUN_00485070(&local_30,&local_20,param_6,param_4,(int)param_5,param_7);
    local_18 = local_30;
    uVar6 = local_2c;
    if (local_2c < local_24) {
      do {
        iVar3 = *(int *)(*local_18 + 0x10);
        local_8 = *(int *)(iVar3 + uVar6 * 0x14);
        local_c = *(int *)(iVar3 + 4 + uVar6 * 0x14);
        local_14 = *(int *)(iVar3 + 0x10 + uVar6 * 0x14);
        if ((local_8 <= param_6) && (param_6 <= local_c)) {
          local_10 = *(int *)(iVar3 + 0xc + uVar6 * 0x14) * 0x10;
          iVar3 = *(int *)(local_10 + -0xc + local_14);
          if (((iVar3 == 0) || (*(char *)(iVar3 + 8) == '\0')) &&
             ((*(byte *)(local_10 + -0x10 + local_14) & 0x40) == 0)) {
            pEVar4 = param_2;
            if (param_8 != (EHRegistrationNode *)0x0) {
              pEVar4 = param_8;
            }
            _UnwindNestedFrames(pEVar4,param_1);
            FUN_00494690(param_2,param_4,param_5,local_8);
            FUN_004a35d0((int)param_2,param_4,param_5,local_c + 1);
            pvVar5 = (void *)FUN_004948a0((int)param_1,(int)param_2,param_3,param_5,
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

